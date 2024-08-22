// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGLIFTEDITEM_H
#define _UIDRAGLIFTEDITEM_H


#import <Foundation/Foundation.h>

#import "_UIPlatterView.h"
#import "UITargetedDragPreview.h"

@interface _UIDragLiftedItem : NSObject

@property (nonatomic) CGFloat liftAlpha; // ivar: _liftAlpha
@property (retain, nonatomic) _UIPlatterView *platterView; // ivar: _platterView
@property (nonatomic) BOOL sourceViewWasAdded; // ivar: _sourceViewWasAdded
@property (retain, nonatomic) UITargetedDragPreview *targetedPreview; // ivar: _targetedPreview




@end


#endif