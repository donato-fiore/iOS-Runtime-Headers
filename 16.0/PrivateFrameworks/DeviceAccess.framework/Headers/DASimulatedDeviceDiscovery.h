// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DASIMULATEDDEVICEDISCOVERY_H
#define DASIMULATEDDEVICEDISCOVERY_H

@class CBDiscovery, CUBonjourBrowser, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DASimulatedDeviceDiscovery : NSObject {
    BOOL _activateCalled;
    CBDiscovery *_bluetoothScanner;
    CUBonjourBrowser *_bonjourBrowser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_nameTXTKey;
}


@property (copy, nonatomic) NSString *deviceBonjourServiceType; // ivar: _deviceBonjourServiceType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activate;
-(void)_bluetoothEnsureStarted;
-(void)_bluetoothEnsureStopped;
-(void)_bluetoothFoundDevice:(id)arg0 ;
-(void)_bluetoothLostDevice:(id)arg0 ;
-(void)_bonjourEnsureStarted;
-(void)_bonjourEnsureStopped;
-(void)_bonjourFoundDevice:(id)arg0 ;
-(void)_bonjourLostDevice:(id)arg0 ;
-(void)_invalidated;
-(void)activate;
-(void)invalidate;


@end


#endif