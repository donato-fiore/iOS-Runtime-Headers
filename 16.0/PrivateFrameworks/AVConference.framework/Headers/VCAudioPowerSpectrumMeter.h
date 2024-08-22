// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOPOWERSPECTRUMMETER_H
#define VCAUDIOPOWERSPECTRUMMETER_H

@class NSString;
@protocol VCAudioPowerSpectrumProtocol;


#import "VCObject.h"

@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumProtocol>

 {
    unsigned short _audioSpectrumBinCount;
    _VCAudioPowerSpectrumMeterRealtimeContext _realtimeContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void realtimeContext;
@property (readonly) Class superclass;


-(id)initWithBinCount:(unsigned short)arg0 refreshRate:(CGFloat)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)registerNewAudioPowerSpectrumForStreamToken:(id)arg0 powerSpectrumKey:(id)arg1 spectrumSource:(id)arg2 ;
-(void)releaseAudioPowerSpectrumForStreamToken:(id)arg0 ;
-(void)unregisterAllStreams;


@end


#endif