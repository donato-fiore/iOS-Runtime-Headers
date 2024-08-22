// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICOMMANDBUTTONVIEWCONTROLLER_H
#define SEARCHUICOMMANDBUTTONVIEWCONTROLLER_H

@class NSString;
@protocol CNActionViewDelegate;


#import "SearchUIButtonItemViewController.h"
#import "SearchUIActionView.h"

@interface SearchUICommandButtonViewController : SearchUIButtonItemViewController <CNActionViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUIActionView *view;


-(id)init;
-(void)didPressActionView:(id)arg0 longPress:(BOOL)arg1 ;
-(void)disableAndHideButton:(BOOL)arg0 ;
-(void)setButtonItem:(id)arg0 ;
-(void)setCompact:(BOOL)arg0 ;
-(void)updateTitle;


@end


#endif