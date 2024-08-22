// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHFLIPBOOKFRAMESHISTOGRAM_H
#define BLSHFLIPBOOKFRAMESHISTOGRAM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BLSHFlipbookFramesHistogram : NSObject

@property (readonly, nonatomic) float averageAPL; // ivar: _averageAPL
@property (readonly, nonatomic) float averageAPLDimming; // ivar: _averageAPLDimming
@property (readonly, nonatomic) NSUInteger averageMemoryUsage; // ivar: _averageMemoryUsage
@property (readonly, nonatomic) CGFloat averagePresentationTimeFromNow; // ivar: _averagePresentationTimeFromNow
@property (readonly, nonatomic) unsigned int count1to2Min;
@property (readonly, nonatomic) unsigned int count2to3Min;
@property (readonly, nonatomic) unsigned int count3to4Min;
@property (readonly, nonatomic) unsigned int count4to5Min;
@property (readonly, nonatomic) unsigned int count5to6Min;
@property (readonly, nonatomic) unsigned int countLessThan1Min;
@property (readonly, nonatomic) unsigned int countMoreThan6Min;
@property (readonly, nonatomic) float highestAPL; // ivar: _highestAPL
@property (readonly, nonatomic) float highestAPLDimming; // ivar: _highestAPLDimming
@property (readonly, nonatomic) CGFloat intervalUntilFirstFrame; // ivar: _intervalUntilFirstFrame
@property (readonly, nonatomic) float lowestAPL; // ivar: _lowestAPL
@property (readonly, nonatomic) float lowestAPLDimming; // ivar: _lowestAPLDimming
@property (readonly, nonatomic) float medianAPL; // ivar: _medianAPL
@property (readonly, nonatomic) float medianAPLDimming; // ivar: _medianAPLDimming
@property (readonly, nonatomic) NSUInteger medianMemoryUsage; // ivar: _medianMemoryUsage
@property (readonly, nonatomic) CGFloat medianPresentationTimeFromNow; // ivar: _medianPresentationTimeFromNow
@property (readonly, nonatomic) NSUInteger memoryUsage; // ivar: _memoryUsage
@property (readonly, nonatomic) NSArray *memoryUsageHistogram; // ivar: _memoryUsageHistogram
@property (readonly, nonatomic) CGFloat presentationDuration; // ivar: _presentationDuration
@property (readonly, nonatomic) NSArray *presentationTimeHistogram; // ivar: _presentationTimeHistogram
@property (readonly, nonatomic) NSUInteger totalCount; // ivar: _totalCount


+(id)histogramWithReferenceDate:(id)arg0 flipbookFrames:(id)arg1 ;
+(id)histogramWithReferenceDate:(id)arg0 iteratePresentationDatesBlock:(id)arg1 ;
-(id)description;


@end


#endif