// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIOINJECTIONSERVICES_H
#define CSAUDIOINJECTIONSERVICES_H


#import <Foundation/Foundation.h>


@interface CSAudioInjectionServices : NSObject



+(BOOL)audioInjectionEnabled;
+(BOOL)setAudioInjectionMode:(BOOL)arg0 ;
+(id)getAudioInjectionXPCConnection;
+(void)connectDeviceWithUUID:(id)arg0 completion:(id)arg1 ;
+(void)createAudioInjectionDeviceWithType:(NSInteger)arg0 deviceName:(id)arg1 deviceID:(id)arg2 productID:(id)arg3 completion:(id)arg4 ;
+(void)disconnectDeviceWithUUID:(id)arg0 completion:(id)arg1 ;
+(void)injectAudio:(id)arg0 toDeviceWithUUID:(id)arg1 completion:(id)arg2 ;
+(void)injectAudio:(id)arg0 toDeviceWithUUID:(id)arg1 withfadingTimeWindowLength:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)pingpong:(id)arg0 completion:(id)arg1 ;
+(void)primaryInputDeviceUUIDWithCompletion:(id)arg0 ;


@end


#endif