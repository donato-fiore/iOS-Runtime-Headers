// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFVOICE_H
#define MTFVOICE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MTFVoice : NSObject

@property (nonatomic) *void _pcmData; // ivar: __pcmData
@property (readonly, nonatomic) *VoiceDescription description;
@property (retain, nonatomic) NSDictionary *pitchCoeff; // ivar: _pitchCoeff
@property (readonly, nonatomic) *void privateData;
@property (nonatomic) *void voiceData; // ivar: _voiceData
@property (nonatomic) *WrappedMTVoice wrapped; // ivar: _wrapped


-(void)dealloc;


@end


#endif