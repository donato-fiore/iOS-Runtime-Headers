// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKACTIONMICROPHONENOISE_H
#define OKACTIONMICROPHONENOISE_H

@protocol NSSecureCoding, OKActionMicrophoneNoiseExports;


#import "OKAction.h"

@interface OKActionMicrophoneNoise : OKAction <NSSecureCoding, OKActionMicrophoneNoiseExports>



@property (readonly, nonatomic) float meanAudioLevel; // ivar: _meanAudioLevel


+(BOOL)supportsSecureCoding;
+(id)microphoneNoiseActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 meanAudioLevel:(float)arg3 context:(id)arg4 ;
+(id)microphoneNoiseActionWithState:(NSUInteger)arg0 meanAudioLevel:(float)arg1 context:(id)arg2 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif