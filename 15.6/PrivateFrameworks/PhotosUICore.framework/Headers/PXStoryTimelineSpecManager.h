// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTIMELINESPECMANAGER_H
#define PXSTORYTIMELINESPECMANAGER_H

@protocol PXStoryTimelineSpec;


#import "PXFeatureSpecManager.h"

@interface PXStoryTimelineSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) NSObject<PXStoryTimelineSpec> *timelineSpec;


-(Class)specClass;
-(NSUInteger)defaultChangesToUpdateFor;


@end


#endif