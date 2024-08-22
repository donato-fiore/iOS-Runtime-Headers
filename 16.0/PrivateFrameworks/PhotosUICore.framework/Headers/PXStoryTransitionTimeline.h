// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTRANSITIONTIMELINE_H
#define PXSTORYTRANSITIONTIMELINE_H

@class NSMutableIndexSet, NSMutableDictionary;


#import "PXStoryDerivedTimeline.h"
#import "PXCArrayStore.h"

@interface PXStoryTransitionTimeline : PXStoryDerivedTimeline {
    NSMutableIndexSet *_clipIdentifiersInTransition;
    CGPoint _fromSegmentClipOffset;
    ? _fromSegmentTimeRange;
    NSInteger _duplicateSegmentIdentifier;
    NSMutableDictionary *_originalClipIdentifiersByDuplicateClipIdentifiers;
    NSMutableDictionary *_duplicateClipIdentifiersByOriginalClipIdentifiers;
}


@property (readonly, nonatomic) PXCArrayStore *clipFrames; // ivar: _clipFrames
@property (readonly, nonatomic) PXCArrayStore *clipInfos; // ivar: _clipInfos
@property (readonly, nonatomic) PXCArrayStore *clipTimeRanges; // ivar: _clipTimeRanges
@property (readonly, nonatomic) PXCArrayStore *segmentInfos; // ivar: _segmentInfos
@property (readonly, nonatomic) PXCArrayStore *segmentTimeRanges; // ivar: _segmentTimeRanges
@property (readonly, nonatomic) ? transitionInfo; // ivar: _transitionInfo


-(NSInteger)numberOfSegments;
-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)initWithOriginalTimeline:(id)arg0 ;
-(id)initWithOriginalTimeline:(id)arg0 transitionInfo:(struct ? )arg1 ;
-(struct ? )_transitionClipInfoWithIdentifier:(NSInteger)arg0 fromOriginalClipInfo:(struct ? )arg1 ;
-(struct CGPoint )_offsetBetweenSegmentWithIdentifier:(NSInteger)arg0 andSegmentWithIdentifier:(NSInteger)arg1 ;
-(void)_modifyClipsIfNeeded:(struct ? *)arg0 frames:(struct CGRect *)arg1 infos:(struct ? *)arg2 count:(NSInteger)arg3 resultHandler:(id)arg4 ;
-(void)_modifySegmentsIfNeeded:(struct ? *)arg0 infos:(struct ? *)arg1 count:(NSInteger)arg2 resultHandler:(id)arg3 ;
-(void)_prepareForTransitionInfo:(struct ? )arg0 ;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)enumerateSegmentsInTimeRange:(struct ? )arg0 usingBlock:(id)arg1 ;


@end


#endif