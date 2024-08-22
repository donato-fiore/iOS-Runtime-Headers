// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERSECONDPASSCONFIGDECODER_H
#define CSVOICETRIGGERSECONDPASSCONFIGDECODER_H


#import <Foundation/Foundation.h>


@interface CSVoiceTriggerSecondPassConfigDecoder : NSObject



+(BOOL)decodeUseKeywordSpotting:(id)arg0 fromCategory:(id)arg1 ;
+(BOOL)decodeUseRecognizerCombination:(id)arg0 fromCategory:(id)arg1 ;
+(float)decodePreTriggerAudioTime:(id)arg0 fromCategory:(id)arg1 ;
+(float)decodePrependingAudioTime:(id)arg0 fromCategory:(id)arg1 ;
+(float)decodeTrailingAudioTime:(id)arg0 fromCategory:(id)arg1 ;
+(id)categoryForFirstPass:(NSUInteger)arg0 ;
+(id)decodeConfigFileNDAPI:(id)arg0 fromCategory:(id)arg1 ;
+(id)decodeConfigFileRecognizer:(id)arg0 fromCategory:(id)arg1 ;
+(id)decodeConfigFrom:(id)arg0 forFirstPassSource:(NSUInteger)arg1 ;
+(id)decodeWearerDetectionConfig:(id)arg0 fromCategory:(id)arg1 ;


@end


#endif