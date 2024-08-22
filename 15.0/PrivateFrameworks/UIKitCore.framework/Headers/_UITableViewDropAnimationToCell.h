// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWDROPANIMATIONTOCELL_H
#define _UITABLEVIEWDROPANIMATIONTOCELL_H

@class UITableViewDropAnimation;


#import "UITableViewCell.h"
#import "UIDragPreviewParameters.h"

@interface _UITableViewDropAnimationToCell : UITableViewDropAnimation

@property (weak, nonatomic) UITableViewCell *cell; // ivar: _cell
@property (retain, nonatomic) UIDragPreviewParameters *previewParameters; // ivar: _previewParameters


-(id)initWithDragItem:(id)arg0 cell:(id)arg1 previewParameters:(id)arg2 ;


@end


#endif