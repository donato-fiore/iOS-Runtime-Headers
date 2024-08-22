// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERSECONDPASSCONFIG_H
#define CSVOICETRIGGERSECONDPASSCONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "CSVoiceTriggerAirPodWearerDetectionConfig.h"

@interface CSVoiceTriggerSecondPassConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI; // ivar: _configPathNDAPI
@property (readonly, nonatomic) NSString *configPathRecognizer; // ivar: _configPathRecognizer
@property (readonly, nonatomic) NSArray *phraseConfigs; // ivar: _phraseConfigs
@property (readonly, nonatomic) float preTriggerAudioTime; // ivar: _preTriggerAudioTime
@property (readonly, nonatomic) float prependingAudioTime; // ivar: _prependingAudioTime
@property (readonly, nonatomic) NSString *resourcePath; // ivar: _resourcePath
@property (readonly, nonatomic) float trailingAudioTime; // ivar: _trailingAudioTime
@property (readonly, nonatomic) BOOL useKeywordSpotting; // ivar: _useKeywordSpotting
@property (readonly, nonatomic) BOOL useRecognizerCombination; // ivar: _useRecognizerCombination
@property (readonly, nonatomic) CSVoiceTriggerAirPodWearerDetectionConfig *wearerDetectionConfig; // ivar: _wearerDetectionConfig


-(id)initWithPreTriggerAudioTime:(float)arg0 prependingAudioTime:(float)arg1 trailingAudioTime:(float)arg2 resourcePath:(id)arg3 configPathNDAPI:(id)arg4 useRecognizerCombination:(BOOL)arg5 configPathRecognizer:(id)arg6 useKeywordSpotting:(BOOL)arg7 phraseConfigs:(id)arg8 wearerDetectionConfig:(id)arg9 ;


@end


#endif