// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSREMOTEAPPCONFIGURATIONSERVICEPROVIDER_H
#define DNDSREMOTEAPPCONFIGURATIONSERVICEPROVIDER_H

@class BSServiceConnectionListener, NSMutableSet, NSString;
@protocol BSServiceConnectionListenerDelegate, DNDRemoteAppConfigurationServiceServerProtocol, DNDSRemoteAppConfigurationServiceProviderDelegate;

#import <Foundation/Foundation.h>

#import "DNDSClientDetailsProvider.h"

@interface DNDSRemoteAppConfigurationServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteAppConfigurationServiceServerProtocol>

 {
    BSServiceConnectionListener *_requestListener;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    os_unfair_lock_s _accessLock;
    NSMutableSet *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSRemoteAppConfigurationServiceProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientDetailsProvider:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_handleClientConnectionInterrupted:(id)arg0 ;
-(void)_handleClientConnectionInvalidated:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)dealloc;
-(void)getCurrentAppConfigurationForActionIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)invalidateAppContextForActionIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)resume;


@end


#endif