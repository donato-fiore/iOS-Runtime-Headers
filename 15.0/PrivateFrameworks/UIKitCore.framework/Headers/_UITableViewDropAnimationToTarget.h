// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWDROPANIMATIONTOTARGET_H
#define _UITABLEVIEWDROPANIMATIONTOTARGET_H

@class UITableViewDropAnimation;


#import "UITableViewCell.h"
#import "UIDragPreviewTarget.h"

@interface _UITableViewDropAnimationToTarget : UITableViewDropAnimation

@property (retain, nonatomic) UITableViewCell *cell; // ivar: _cell
@property (nonatomic) BOOL didSearchForCell; // ivar: _didSearchForCell
@property (retain, nonatomic) UIDragPreviewTarget *target; // ivar: _target


-(id)cellForTargetContainerInTableView:(id)arg0 ;
-(id)initWithDragItem:(id)arg0 target:(id)arg1 ;


@end


#endif