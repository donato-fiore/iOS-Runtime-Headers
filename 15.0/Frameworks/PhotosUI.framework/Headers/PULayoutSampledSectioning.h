// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PULAYOUTSAMPLEDSECTIONING_H
#define PULAYOUTSAMPLEDSECTIONING_H

@class NSArray;


#import "PULayoutSectioning.h"

@interface PULayoutSampledSectioning : PULayoutSectioning {
    BOOL _sectioningIsValid;
    BOOL _samplingIsValid;
    NSInteger _numberOfRealSections;
    NSInteger _numberOfVisualSections;
    NSArray *_realSectionIndexesForVisualSection;
    *NSInteger _visualSectionForRealSection;
    *NSInteger _numberOfItemsForRealSection;
    *NSInteger _numberOfRealItemsForVisualSection;
    *NSInteger _startIndexInVisualSectionForRealSection;
    *id _sectionSamplers;
    *NSInteger _maximumNumberOfVisibleItemsForVisualSection;
    BOOL _hasSomeSampling;
    NSInteger _lastHitRealSectionIndex;
    NSInteger _lastHitVisualSectionIndex;
    NSInteger _lastHitRangeIndex;
}


@property (nonatomic) BOOL supportsSamplingAndSectionGrouping; // ivar: _supportsSamplingAndSectionGrouping


-(BOOL)hasSomeSampling;
-(NSInteger)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath )arg0 ;
-(NSInteger)_unsampledItemIndexForVisualItemIndex:(NSInteger)arg0 visualSection:(NSInteger)arg1 ;
-(NSInteger)_visualItemIndexForUnsampledItemIndex:(NSInteger)arg0 visualSection:(NSInteger)arg1 isMainItem:(*BOOL)arg2 ;
-(NSInteger)mainRealSectionForVisualSection:(NSInteger)arg0 ;
-(NSInteger)numberOfRealItemsInVisualSection:(NSInteger)arg0 ;
-(NSInteger)numberOfVisualItemsInVisualSection:(NSInteger)arg0 ;
-(NSInteger)visualSectionForRealSection:(NSInteger)arg0 ;
-(id)_sectionSamplerForVisualSection:(NSInteger)arg0 ;
-(id)init;
-(id)visibleUnsampledIndexesForCombinedRealSections:(id)arg0 ;
-(struct PUSimpleIndexPath )_mainRealItemIndexPathForVisualSection:(NSInteger)arg0 andUnsampledItemIndex:(NSInteger)arg1 ;
-(struct PUSimpleIndexPath )mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath )arg0 ;
-(struct PUSimpleIndexPath )visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath )arg0 isMainItem:(*BOOL)arg1 ;
-(void)_cacheSectioningIfNeeded;
-(void)_discardSamplingCache;
-(void)_discardSectioningCache;
-(void)dealloc;
-(void)enumerateRealMainItemIndexPathsForVisualSection:(NSInteger)arg0 inVisualItemRange:(struct _NSRange )arg1 usingBlock:(id)arg2 ;
-(void)enumerateRealSectionsForVisualSection:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)invalidateSampling;
-(void)invalidateSections;


@end


#endif