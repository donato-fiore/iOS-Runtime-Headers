// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCAUDIOMANAGER_H
#define ACCAUDIOMANAGER_H

@class NSString;
@protocol ACCAudioClientProtocol;

#import <Foundation/Foundation.h>

#import "ACCAudioClient.h"

@interface ACCAudioManager : NSObject <ACCAudioClientProtocol>



@property (retain, nonatomic) ACCAudioClient *audioClient; // ivar: _audioClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedACCAudioManager;
-(BOOL)allowBackgroundAudioForClient:(id)arg0 ;
-(BOOL)setDigitalAudioSampleRate:(unsigned int)arg0 ;
-(id)deviceAudioStates;
-(id)init;
-(id)supportedDigitalAudioSampleRates;
-(unsigned int)supportedDigitalAudioSampleRate:(unsigned int)arg0 ;


@end


#endif