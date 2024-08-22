// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMCONFIGURATION_H
#define VMCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface VMConfiguration : NSObject



+(float)confidenceLowQualityThreshold;
+(float)confidenceSegmentThreshold;
+(float)confidenceThreshold;
+(id)confidenceLowQualityThresholdFromAsset;
+(id)confidenceSegmentThresholdFromAsset;
+(id)confidenceThresholdFromAsset;
+(id)confidenceThresholdFromAssetForKey:(id)arg0 ;
+(id)confidenceThresholdFromDefaultsForKey:(id)arg0 ;
+(id)localeForTranscriptionLanguage;
+(id)metadataDictionaryForSpeechAssetWithLanguage:(id)arg0 ;


@end


#endif