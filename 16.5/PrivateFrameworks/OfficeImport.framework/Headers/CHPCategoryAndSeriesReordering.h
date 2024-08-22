// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHPCATEGORYANDSERIESREORDERING_H
#define CHPCATEGORYANDSERIESREORDERING_H



#import "EDProcessor.h"

@interface CHPCategoryAndSeriesReordering : EDProcessor



-(BOOL)isObjectSupported:(id)arg0 ;
-(BOOL)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg0 isCategoryOrderReversed:(BOOL)arg1 ;
-(NSInteger)reorderDataValues:(id)arg0 dataPointCount:(NSUInteger)arg1 ;
-(void)applyCategoryReorderingPreprocessor:(id)arg0 ;
-(void)applyProcessorToObject:(id)arg0 sheet:(id)arg1 ;
-(void)applySeriesReorderingPreprocessor:(id)arg0 ;
-(void)reorderCategoryAndSeries:(id)arg0 sheet:(id)arg1 clearAxisReversedFlag:(BOOL)arg2 ;
-(void)reorderData:(id)arg0 dataPointCount:(NSUInteger)arg1 byRow:(BOOL)arg2 ;
-(void)reorderDataFormula:(id)arg0 dataPointCount:(NSUInteger)arg1 byRow:(BOOL)arg2 ;
-(void)reorderSeriesCategory:(id)arg0 dataPointCount:(NSUInteger)arg1 byRow:(BOOL)arg2 ;
-(void)reorderValueProperties:(id)arg0 dataPointCount:(NSUInteger)arg1 ;


@end


#endif