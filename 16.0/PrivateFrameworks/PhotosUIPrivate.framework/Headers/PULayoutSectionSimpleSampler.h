// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PULAYOUTSECTIONSIMPLESAMPLER_H
#define PULAYOUTSECTIONSIMPLESAMPLER_H



#import "PULayoutSectionSampler.h"

@interface PULayoutSectionSimpleSampler : PULayoutSectionSampler {
    NSInteger _numberOfVisibleItems;
    NSInteger _numberOfRealItems;
}




-(NSInteger)indexForUnsampledIndex:(NSInteger)arg0 isMainItem:(*BOOL)arg1 ;
-(NSInteger)unsampledIndexForIndex:(NSInteger)arg0 ;
-(id)initWithNumberOfVisibleItems:(NSInteger)arg0 numberOfRealItems:(NSInteger)arg1 ;
-(void)dumpInternalMemory;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;


@end


#endif