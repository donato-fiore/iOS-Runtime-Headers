// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYCONCRETECOMPANIONTIMELINESEGMENTTRANSITION_H
#define _PXSTORYCONCRETECOMPANIONTIMELINESEGMENTTRANSITION_H

@protocol PXStoryCompanionTimelineSegmentTransition;

#import <Foundation/Foundation.h>


@interface _PXStoryConcreteCompanionTimelineSegmentTransition : NSObject <PXStoryCompanionTimelineSegmentTransition>



@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic) NSInteger kind;
@property (readonly, nonatomic) ? transitionInfo; // ivar: _transitionInfo


-(id)initWithTransitionInfo:(struct ? )arg0 ;


@end


#endif