// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSREMOTEAVAILABILITYSERVICEPROVIDER_H
#define DNDSREMOTEAVAILABILITYSERVICEPROVIDER_H

@class BSServiceConnectionListener, NSMutableSet, NSString;
@protocol BSServiceConnectionListenerDelegate, DNDRemoteAvailabilityServiceServerProtocol, DNDSRemoteAvailabilityServiceProviderDelegate;

#import <Foundation/Foundation.h>

#import "DNDSClientDetailsProvider.h"

@interface DNDSRemoteAvailabilityServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteAvailabilityServiceServerProtocol>

 {
    BSServiceConnectionListener *_requestListener;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    os_unfair_lock_s _accessLock;
    NSMutableSet *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSRemoteAvailabilityServiceProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientDetailsProvider:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_handleClientConnectionInterrupted:(id)arg0 ;
-(void)_handleClientConnectionInvalidated:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)dealloc;
-(void)getIsLocalUserAvailableWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)resume;


@end


#endif