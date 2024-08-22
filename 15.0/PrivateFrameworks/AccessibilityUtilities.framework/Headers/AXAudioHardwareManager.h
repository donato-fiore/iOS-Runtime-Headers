// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXAUDIOHARDWAREMANAGER_H
#define AXAUDIOHARDWAREMANAGER_H


#import <Foundation/Foundation.h>


@interface AXAudioHardwareManager : NSObject



+(BOOL)channelsAreAirplay:(id)arg0 route:(id)arg1 ;
+(BOOL)channelsAreWiredHeadphones:(id)arg0 ;
+(id)channelsForPort:(id)arg0 ;
+(id)defaultPort;
+(id)defaultPortChannels;
+(id)defaultRouteDescription;
+(id)sharedManager;
+(void)disableMultiroute;
+(void)enableMultiroute;
+(void)setDefaultPort:(id)arg0 ;
+(void)setDefaultPortChannels:(id)arg0 ;
+(void)setDefaultRouteDescription:(id)arg0 ;
+(void)updateTestingChannels;
-(BOOL)isDolbyAtmosConfigured;
-(id)_savedIdForRouteDescription:(id)arg0 ;
-(id)init;
-(id)savedChannelsForOutput:(id)arg0 forSource:(NSInteger)arg1 ;
-(void)_handleSurroundSoundDefaults:(id)arg0 returnedChannels:(id)arg1 port:(id)arg2 source:(NSInteger)arg3 ;
-(void)setSavedChannels:(id)arg0 forOutput:(id)arg1 forSource:(NSInteger)arg2 ;


@end


#endif