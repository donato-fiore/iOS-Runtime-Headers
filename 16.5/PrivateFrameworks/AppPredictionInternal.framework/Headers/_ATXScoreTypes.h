// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXSCORETYPES_H
#define _ATXSCORETYPES_H


#import <Foundation/Foundation.h>


@interface _ATXScoreTypes : NSObject



+(NSUInteger)mappingForDayOfWeekDistributionSignals:(NSUInteger)arg0 forScoreInputCategory:(NSUInteger)arg1 ;
+(NSUInteger)mappingForTimeOfDayDistributionSignals:(NSUInteger)arg0 forScoreInputCategory:(NSUInteger)arg1 ;
+(NSUInteger)mappingForTopRankedCoarseGeoHashSignals:(NSUInteger)arg0 forScoreInputCategory:(NSUInteger)arg1 ;
+(NSUInteger)mappingForTopRankedGeoHashSignalsWithResolution:(NSUInteger)arg0 withRank:(NSUInteger)arg1 forScoreInputCategory:(NSUInteger)arg2 ;
+(NSUInteger)mappingForTopRankedSpecificGeoHashSignals:(NSUInteger)arg0 forScoreInputCategory:(NSUInteger)arg1 ;
+(NSUInteger)mappingForTopRankedZoom7GeoHashSignals:(NSUInteger)arg0 ;
+(NSUInteger)scoreInputForString:(id)arg0 ;
+(id)aggdStringForScoreInput:(NSUInteger)arg0 ;
+(id)scoreInputsToNames;
+(id)stringForScoreInput:(NSUInteger)arg0 ;
+(void)iterScoreInputsWithBlock:(id)arg0 ;


@end


#endif