// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGROUTEDISCOVEREROUTPUTDEVICEDISCOVERYSESSIONIMPL_H
#define AVFIGROUTEDISCOVEREROUTPUTDEVICEDISCOVERYSESSIONIMPL_H

@class NSString, AVAudioSession;
@protocol AVOutputDeviceDiscoverySessionImpl;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVOutputDeviceDiscoverySessionAvailableOutputDevices.h"
#import "AVOutputDeviceDiscoverySession.h"

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl>

 {
    id *_routeDiscovererCreator;
    *OpaqueAPSyncController _syncController;
    AVWeakReference *_weakObserver;
}


@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession; // ivar: _parentSession
@property (readonly, nonatomic) *OpaqueFigRouteDiscoverer routeDiscoverer; // ivar: _discoverer
@property (readonly) Class superclass;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;


-(id)init;
// -(id)initWithFigRouteDiscovererCreator:(id)arg0 syncController:(unk)arg1  ;
-(void)_availableGroupsChanged;
-(void)_availableRoutesChanged;
-(void)_routePresentChanged;
-(void)_serverDied;
-(void)dealloc;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg0 ;


@end


#endif