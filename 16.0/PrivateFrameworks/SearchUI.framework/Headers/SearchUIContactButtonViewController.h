// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICONTACTBUTTONVIEWCONTROLLER_H
#define SEARCHUICONTACTBUTTONVIEWCONTROLLER_H

@class NSString;
@protocol CNContactInlineActionsViewControllerDelegate;


#import "SearchUIButtonItemViewController.h"
#import "SearchUIActionsViewBoxView.h"

@interface SearchUIContactButtonViewController : SearchUIButtonItemViewController <CNContactInlineActionsViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) SearchUIActionsViewBoxView *view;


-(id)init;
-(void)contactInlineActionsViewController:(id)arg0 willPerformActionOfType:(id)arg1 ;
-(void)setButtonItem:(id)arg0 ;
-(void)setCompact:(BOOL)arg0 ;


@end


#endif