// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERPHRASECONFIGDECODER_H
#define CSVOICETRIGGERPHRASECONFIGDECODER_H


#import <Foundation/Foundation.h>


@interface CSVoiceTriggerPhraseConfigDecoder : NSObject



+(float)adjustTwoShotDelay:(float)arg0 ;
+(float)defaultTwoShotDelay;
+(id)decodeConfigFrom:(id)arg0 category:(id)arg1 ;
+(id)decodeConfigV1:(id)arg0 category:(id)arg1 ;
+(id)decodeConfigV2:(id)arg0 category:(id)arg1 ;
+(id)twoShotDelayConfigKey;


@end


#endif