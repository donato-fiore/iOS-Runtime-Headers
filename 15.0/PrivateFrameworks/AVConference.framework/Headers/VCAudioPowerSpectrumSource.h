// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAUDIOPOWERSPECTRUMSOURCE_H
#define VCAUDIOPOWERSPECTRUMSOURCE_H

@class NSString;
@protocol VCAudioIOSink;


#import "VCObject.h"

@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink>

 {
    ? _realtimeContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *_VCAudioPowerSpectrumSourceRealtimeContext realtimeContext;
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;


-(?)cleanupQueue;
-(id)initWithStreamToken:(NSInteger)arg0 delegate:(id)arg1 ;
-(void)cleanupAudioPowerSpectrumSinks;
-(void)dealloc;
-(void)invalidate;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)registerAudioPowerSpectrumSink:(id)arg0 callback:(*unk)arg1 ;
-(void)unregisterAudioPowerSpectrumSink:(id)arg0 ;


@end


#endif