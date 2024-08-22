// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUNETSERVICEDISCOVERY_H
#define CUNETSERVICEDISCOVERY_H

@class SFService, NSMutableDictionary, SFDeviceDiscovery, NSString, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUBonjourBrowser.h"
#import "CUNANSubscriber.h"

@interface CUNetServiceDiscovery : NSObject {
    BOOL _activated;
    unsigned char _bleActionType;
    SFService *_bleAdvertiser;
    NSMutableDictionary *_bleDevices;
    SFDeviceDiscovery *_bleDiscovery;
    NSString *_bleServiceIdentifier;
    NSMutableDictionary *_endpoints;
    CUBonjourBrowser *_infraBonjourBrowser;
    NSMutableDictionary *_infraBonjourDevices;
    unsigned int _infraBonjourBrowserID;
    NSMutableDictionary *_nanEndpoints;
    CUNANSubscriber *_nanSubscriber;
    unsigned int _nanSubscriberID;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    BOOL _updatePending;
    BOOL _blePeerFilterChanged;
    BOOL _serviceTypeChanged;
}


@property (nonatomic) int awdlControl; // ivar: _awdlControl
@property (nonatomic) unsigned int bleDiscoveryFlags; // ivar: _bleDiscoveryFlags
@property (copy, nonatomic) NSSet *blePeerFilter; // ivar: _blePeerFilter
@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *endpointChangedHandler; // ivar: _endpointChangedHandler
@property (copy, nonatomic) id *endpointFoundHandler; // ivar: _endpointFoundHandler
@property (copy, nonatomic) id *endpointLostHandler; // ivar: _endpointLostHandler
@property (nonatomic) int infraControl; // ivar: _infraControl
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int nanControl; // ivar: _nanControl
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activateSafeInvokeBlock:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_bleScannerEnsureStarted;
-(void)_bleScannerEnsureStopped;
-(void)_bleTriggerDeviceFound:(id)arg0 ;
-(void)_bleTriggerDeviceLost:(id)arg0 ;
-(void)_bleTriggerEnsureStarted;
-(void)_bleTriggerEnsureStopped;
-(void)_infraBonjourBrowserEnsureStarted;
-(void)_infraBonjourBrowserEnsureStopped;
-(void)_infraBonjourDeviceChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_infraBonjourDeviceFound:(id)arg0 ;
-(void)_infraBonjourDeviceLost:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_nanEndpointChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_nanEndpointFound:(id)arg0 ;
-(void)_nanEndpointLost:(id)arg0 ;
-(void)_nanSubscriberEnsureStarted;
-(void)_nanSubscriberEnsureStopped;
-(void)_updateLocked;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif