// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLEVIEWFOCUSUPDATECONTEXT_H
#define UITABLEVIEWFOCUSUPDATECONTEXT_H

@class NSIndexPath;


#import "UIFocusUpdateContext.h"
#import "UITableView.h"

@interface UITableViewFocusUpdateContext : UIFocusUpdateContext {
    BOOL _didSetPreviouslyFocusedIndexPath;
    BOOL _didSetNextFocusedIndexPath;
}


@property (readonly, nonatomic) NSIndexPath *nextFocusedIndexPath; // ivar: _nextFocusedIndexPath
@property (readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // ivar: _previouslyFocusedIndexPath
@property (readonly, weak, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)_contextWithContext:(id)arg0 tableView:(id)arg1 ;
-(id)_initWithContext:(id)arg0 tableView:(id)arg1 ;


@end


#endif