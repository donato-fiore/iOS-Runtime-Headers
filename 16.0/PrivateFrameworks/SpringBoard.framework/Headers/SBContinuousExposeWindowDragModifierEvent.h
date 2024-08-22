// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSEWINDOWDRAGMODIFIEREVENT_H
#define SBCONTINUOUSEXPOSEWINDOWDRAGMODIFIEREVENT_H



#import "SBGestureSwitcherModifierEvent.h"

@interface SBContinuousExposeWindowDragModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic, getter=isDraggingFromContinuousExposeStrips) BOOL draggingFromContinuousExposeStrips; // ivar: _draggingFromContinuousExposeStrips
@property (nonatomic) CGPoint locationInSelectedDisplayItem; // ivar: _locationInSelectedDisplayItem


-(BOOL)isContinuousExposeWindowDragEvent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif