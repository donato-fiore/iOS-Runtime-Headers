// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENUMCONVERSIONUTILS_H
#define ENUMCONVERSIONUTILS_H


#import <Foundation/Foundation.h>


@interface EnumConversionUtils : NSObject



+(NSInteger)HKMCMenstrualFlowFromHAMenstrualAlgorithmsFlow:(unsigned char)arg0 ;
+(NSInteger)HKMCOvulationTestResultFromHAMenstrualAlgorithmsOvulationTestResult:(unsigned char)arg0 ;
+(NSInteger)HKMCPredictionPrimarySourceFromHAMenstrualAlgorithmsPrimarySource:(unsigned char)arg0 ;
+(id)getStringRepresentationOfHAMenstrualAlgorithmsPrimarySource:(unsigned char)arg0 ;
+(id)stringFromHKMCPredictionPrimarySource:(NSInteger)arg0 ;
+(unsigned char)HAMenstrualAlgorithmsFlowFromHKMCMenstrualFlow:(NSInteger)arg0 ;
+(unsigned char)HAMenstrualAlgorithmsOvulationTestResultFromHKMCOvulationTestResult:(NSInteger)arg0 ;


@end


#endif