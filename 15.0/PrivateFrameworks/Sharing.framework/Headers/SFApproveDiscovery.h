// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPPROVEDISCOVERY_H
#define SFAPPROVEDISCOVERY_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFDeviceDiscovery.h"

@interface SFApproveDiscovery : NSObject {
    BOOL _activateCalled;
    id *_activateHandler;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFDeviceDiscovery *_deviceDiscovery;
    NSMutableDictionary *_deviceDictionary;
}


@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSArray *devices; // ivar: _devices
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_activatedWithError:(id)arg0 ;
-(void)_discoveryDeviceChanged:(id)arg0 ;
-(void)_discoveryEnsureStarted;
-(void)_discoveryEnsureStopped;
-(void)_discoveryFoundDevice:(id)arg0 ;
-(void)_discoveryLostDevice:(id)arg0 ;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif