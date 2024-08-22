// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTDEVICEDISCOVERYSESSION_H
#define AVOUTPUTDEVICEDISCOVERYSESSION_H

@class NSArray, AVAudioSession;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceDiscoverySessionInternal.h"
#import "AVOutputDeviceDiscoverySessionAvailableOutputDevices.h"

@interface AVOutputDeviceDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}


@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (nonatomic) NSInteger discoveryMode;
@property (readonly) *OpaqueFigRouteDiscoverer routeDiscoverer;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;


+(id)outputDeviceDiscoverySessionFactory;
+(void)initialize;
-(id)impl;
-(id)init;
-(id)initWithDeviceFeatures:(NSUInteger)arg0 ;
-(id)initWithOutputDeviceDiscoverySessionImpl:(id)arg0 ;
-(void)dealloc;
-(void)outputDeviceDiscoverySessionImpl:(id)arg0 didExpireWithReplacement:(id)arg1 ;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)arg0 ;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg0 ;


@end


#endif