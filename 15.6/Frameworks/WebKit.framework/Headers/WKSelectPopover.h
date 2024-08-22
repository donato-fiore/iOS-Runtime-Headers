// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSELECTPOPOVER_H
#define WKSELECTPOPOVER_H

@class UITableViewController;
@protocol WKFormControl;


#import "WKFormRotatingAccessoryPopover.h"

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl>

 {
    RetainPtr<WKSelectTableViewController> _tableViewController;
}


@property (readonly, nonatomic) UITableViewController *tableViewController;


-(id)controlView;
-(id)initWithView:(id)arg0 hasGroups:(BOOL)arg1 ;
-(void)_userActionDismissedPopover:(id)arg0 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;
-(void)selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 extendingSelection:(BOOL)arg2 ;


@end


#endif