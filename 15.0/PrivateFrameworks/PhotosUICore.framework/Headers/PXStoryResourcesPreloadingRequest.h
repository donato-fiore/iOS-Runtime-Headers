// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRESOURCESPRELOADINGREQUEST_H
#define PXSTORYRESOURCESPRELOADINGREQUEST_H

@protocol PXStorySongResource, PXStoryTimeline;

#import <Foundation/Foundation.h>


@interface PXStoryResourcesPreloadingRequest : NSObject

@property BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BOOL shouldIgnoreStartingSegmentIdentifier; // ivar: _shouldIgnoreStartingSegmentIdentifier
@property (retain, nonatomic) NSObject<PXStorySongResource> *songResource; // ivar: _songResource
@property (readonly, nonatomic) NSInteger startingSegmentIdentifier; // ivar: _startingSegmentIdentifier
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline
@property (readonly, nonatomic) NSUInteger timelineAttributes; // ivar: _timelineAttributes


-(id)initWithTimeline:(id)arg0 timelineAttributes:(NSUInteger)arg1 startingSegmentIdentifier:(NSInteger)arg2 shouldIgnoreStartingSegmentIdentifier:(BOOL)arg3 ;


@end


#endif