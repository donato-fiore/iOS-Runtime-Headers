// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PULAYOUTSECTIONLISTSAMPLER_H
#define PULAYOUTSECTIONLISTSAMPLER_H



#import "PULayoutSectionSampler.h"

@interface PULayoutSectionListSampler : PULayoutSectionSampler {
    NSInteger _numberOfVisibleItems;
    NSInteger _numberOfRealItems;
    *NSInteger _visibleItemIndexes;
    NSInteger _lastSeenSampledIndex;
    NSInteger _lastSeenUnsampledIndex;
    NSInteger _lastSeenTopUnsampledIndex;
}




-(*NSInteger)visibleItemIndexes;
-(NSInteger)indexForUnsampledIndex:(NSInteger)arg0 isMainItem:(*BOOL)arg1 ;
-(NSInteger)unsampledIndexForIndex:(NSInteger)arg0 ;
-(id)initWithNumberOfVisibleItems:(NSInteger)arg0 numberOfRealItems:(NSInteger)arg1 ;
-(void)dealloc;
-(void)dumpInternalMemory;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;


@end


#endif