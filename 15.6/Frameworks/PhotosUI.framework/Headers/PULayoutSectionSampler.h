// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PULAYOUTSECTIONSAMPLER_H
#define PULAYOUTSECTIONSAMPLER_H


#import <Foundation/Foundation.h>


@interface PULayoutSectionSampler : NSObject



-(NSInteger)indexForUnsampledIndex:(NSInteger)arg0 isMainItem:(*BOOL)arg1 ;
-(NSInteger)unsampledIndexForIndex:(NSInteger)arg0 ;
-(void)dumpInternalMemory;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;


@end


#endif