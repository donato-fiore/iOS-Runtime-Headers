// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTSHARINGDISCOVERYPRIMITIVES_H
#define DMTSHARINGDISCOVERYPRIMITIVES_H

@class NSString, SFDeviceDiscovery, NSMutableDictionary;
@protocol CATSharingDiscoveryPrimitives, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DMTSharingDiscoveryPrimitives : NSObject <CATSharingDiscoveryPrimitives>



@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SFDeviceDiscovery *deviceDiscovery; // ivar: _deviceDiscovery
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *discoveryCallbackQueue; // ivar: _discoveryCallbackQueue
@property (retain, nonatomic) NSMutableDictionary *foundDevicesByIdentifier; // ivar: _foundDevicesByIdentifier
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) Class superclass;


-(id)init;
-(id)sessionForDevice:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addDependencyHandlers;
-(void)deactivate;


@end


#endif