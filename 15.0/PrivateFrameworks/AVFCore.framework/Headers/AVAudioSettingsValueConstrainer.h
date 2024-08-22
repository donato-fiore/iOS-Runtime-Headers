// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOSETTINGSVALUECONSTRAINER_H
#define AVAUDIOSETTINGSVALUECONSTRAINER_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AVAudioSettingsValueConstrainer : NSObject {
    AudioStreamBasicDescription _inputASBD;
    AudioStreamBasicDescription _outputASBD;
    *OpaqueAudioConverter _audioConverter;
    unsigned int _outputDataRate;
    BOOL _needNewConverter;
    BOOL _needAvailableSampleRates;
    BOOL _needApplicableParameters;
    NSArray *_availableOutputSampleRates;
    NSMutableArray *_availableOutputDataRates;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
}


@property (nonatomic) unsigned int outputBitsPerChannel;
@property (nonatomic) unsigned int outputChannelCount;
@property (nonatomic) unsigned int outputDataRate;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) unsigned int outputFormatFlags;
@property (nonatomic) float outputSampleRate;


-(float)_getAvailableOutputSampleRateFor:(float)arg0 rounding:(NSInteger)arg1 ;
-(float)applicableOutputSampleRateForDesiredSampleRate:(float)arg0 rounding:(NSInteger)arg1 ;
-(id)_fetchApplicableOutputDataRates;
-(id)init;
-(unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg0 rounding:(NSInteger)arg1 ;
-(void)_bringUpToDate;
-(void)_buildApplicableDataRatesForSampleRates;
-(void)_buildAudioConverter;
-(void)_buildAvailableSampleRates;
-(void)dealloc;
-(void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription )arg0 ;


@end


#endif