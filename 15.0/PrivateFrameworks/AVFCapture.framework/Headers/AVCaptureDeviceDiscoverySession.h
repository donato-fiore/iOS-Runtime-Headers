// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREDEVICEDISCOVERYSESSION_H
#define AVCAPTUREDEVICEDISCOVERYSESSION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    NSInteger _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}


@property (readonly, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;


+(id)allAudioDeviceTypes;
+(id)allAudioDevices;
+(id)allDeviceTypes;
+(id)allDevices;
+(id)allPointCloudDeviceTypes;
+(id)allPointCloudDevices;
+(id)allSupportedMultiCamDeviceSets;
+(id)allVideoDeviceTypes;
+(id)allVideoDevices;
+(id)allVirtualDeviceTypes;
+(id)allVirtualDevices;
+(id)discoverySessionWithDeviceTypes:(id)arg0 mediaType:(id)arg1 position:(NSInteger)arg2 ;
+(void)initialize;
-(id)_initWithDeviceTypes:(id)arg0 mediaType:(id)arg1 position:(NSInteger)arg2 allowIOSMacEnvironment:(BOOL)arg3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)arg4 ;
-(id)description;
-(id)init;
-(void)_handleDeviceConnectedDisconnectedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif