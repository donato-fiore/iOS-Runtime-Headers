// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTRANSITIONCONFIGURATION_H
#define PXSTORYTRANSITIONCONFIGURATION_H

@protocol PXStoryTransitionSource, PXStoryTimeline, PXStoryTimelineSpec;

#import <Foundation/Foundation.h>

#import "PXGEntityManager.h"
#import "PXStoryTransitionModel.h"

@interface PXStoryTransitionConfiguration : NSObject

@property (retain, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (retain, nonatomic) NSObject<PXStoryTransitionSource> *source; // ivar: _source
@property (retain, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline
@property (retain, nonatomic) NSObject<PXStoryTimelineSpec> *timelineSpec; // ivar: _timelineSpec
@property (retain, nonatomic) PXStoryTransitionModel *transitionModel; // ivar: _transitionModel




@end


#endif