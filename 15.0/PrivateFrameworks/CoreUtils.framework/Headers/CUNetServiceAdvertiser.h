// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUNETSERVICEADVERTISER_H
#define CUNETSERVICEADVERTISER_H

@class NSMutableDictionary, SFDeviceDiscovery, NSSet, NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUBonjourAdvertiser.h"
#import "CUNANPublisher.h"

@interface CUNetServiceAdvertiser : NSObject {
    BOOL _activated;
    CUBonjourAdvertiser *_awdlBonjourAdvertiser;
    NSMutableDictionary *_bleDevices;
    SFDeviceDiscovery *_bleDiscovery;
    NSUInteger _bleDiscoveryFlags;
    CUBonjourAdvertiser *_infraBonjourAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CUNANPublisher *_nanPublisher;
    *LogCategory _ucat;
    BOOL _updatePending;
    BOOL _blePeerFilterChanged;
    BOOL _portChanged;
    BOOL _serviceInfoChanged;
    BOOL _serviceTypeChanged;
}


@property (nonatomic) int awdlControl; // ivar: _awdlControl
@property (copy, nonatomic) NSSet *blePeerFilter; // ivar: _blePeerFilter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) int infraControl; // ivar: _infraControl
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int nanControl; // ivar: _nanControl
@property (nonatomic) int port; // ivar: _port
@property (copy, nonatomic) NSDictionary *serviceInfo; // ivar: _serviceInfo
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activateSafeInvokeBlock:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_awdlBonjourAdvertiserEnsureStarted;
-(void)_awdlBonjourAdvertiserEnsureStopped;
-(void)_bleTriggerDeviceFound:(id)arg0 ;
-(void)_bleTriggerDeviceLost:(id)arg0 ;
-(void)_bleTriggerEnsureStarted;
-(void)_bleTriggerEnsureStopped;
-(void)_infraBonjourAdvertiserEnsureStarted;
-(void)_infraBonjourAdvertiserEnsureStopped;
-(void)_invalidate;
-(void)_invalidated;
-(void)_nanAdvertiserEnsureStarted;
-(void)_nanAdvertiserEnsureStopped;
-(void)_updateLocked;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif