// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBSELECTPOPOVER_H
#define UIWEBSELECTPOPOVER_H

@protocol UIWebFormControl;


#import "UIWebFormRotatingAccessoryPopover.h"
#import "UIWebSelectTableViewController.h"

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>



@property (retain, nonatomic) UIWebSelectTableViewController *_tableViewController; // ivar: _tableViewController


-(id)controlView;
-(id)initWithDOMHTMLSelectElement:(id)arg0 cachedItems:(id)arg1 singleSelectionItem:(id)arg2 singleSelectionIndex:(NSUInteger)arg3 multipleSelection:(BOOL)arg4 ;
-(void)_userActionDismissedPopover:(id)arg0 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;


@end


#endif