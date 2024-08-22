// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSXPCCLIENTFACTORY_H
#define CSXPCCLIENTFACTORY_H


#import <Foundation/Foundation.h>


@interface CSXPCClientFactory : NSObject



+(id)defaultFactory;
-(id)clientForAudioProviding;
-(id)clientForAudioSessionInfoProviding;
-(id)clientForFallbackAudioSessionReleaseProviding;
-(id)clientForMacOSDuckAudioDevice;
-(id)clientForSmartSiriVolumeProviding;


@end


#endif