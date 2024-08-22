// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGAUDIOCAPTURECONNECTIONCONFIGURATION_H
#define FIGAUDIOCAPTURECONNECTIONCONFIGURATION_H



#import "FigCaptureConnectionConfiguration.h"

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) int builtInMicrophonePosition; // ivar: _builtInMicrophonePosition
@property (nonatomic) CGFloat builtInMicrophoneRequiredSampleRate; // ivar: _builtInMicrophoneRequiredSampleRate
@property (nonatomic) BOOL builtInMicrophoneStereoAudioCaptureEnabled; // ivar: _builtInMicrophoneStereoAudioCaptureEnabled


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif