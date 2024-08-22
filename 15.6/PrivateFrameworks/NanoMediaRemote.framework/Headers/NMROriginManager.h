// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRORIGINMANAGER_H
#define NMRORIGINMANAGER_H

@class NSOrderedSet, NSDictionary, NSNumber, MPAVRoutingController, NSArray, NSString;
@protocol MPAVRoutingControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NMROrigin.h"

@interface NMROriginManager : NSObject <MPAVRoutingControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOrderedSet *_availableOrigins;
    NSDictionary *_availableOriginsByDeviceIdentifier;
    NSDictionary *_availableOriginsByOriginIdentifier;
    NSNumber *_activeOriginIdentifier;
    NSNumber *_localOriginIdentifier;
    *__CFArray _availableOriginRefs;
    MPAVRoutingController *_companionRoutingController;
    MPAVRoutingController *_proxiedEndpointRoutingController;
}


@property (readonly, nonatomic) NMROrigin *activeOrigin;
@property (readonly, nonatomic) NSArray *availableOrigins;
@property (readonly, nonatomic) NMROrigin *companionOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NMROrigin *localOrigin;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)_originFromTestOptions:(id)arg0 ;
-(id)init;
-(id)originForPlayerPath:(id)arg0 ;
-(id)originWithDeviceIdentifier:(id)arg0 ;
-(id)originWithUniqueIdentifier:(id)arg0 ;
-(void)_beginProxiedEndpointDiscovery;
-(void)_endProxiedEndpointDiscovery;
-(void)_handleDeviceInfoDidChangeNotification:(id)arg0 ;
-(void)_handleMediaRemoteActiveOriginDidChangeNotification:(id)arg0 ;
-(void)_handleMediaRemoteAvailableOriginsDidChangeNotification:(id)arg0 ;
-(void)_onQueue_updateActiveOriginIdentifier:(id)arg0 ;
-(void)_onQueue_updateAvailableOrigins;
-(void)_updateMediaRemoteAvailableAndActiveOrigins;
-(void)_updateMediaRemoteLocalOrigin;
-(void)dealloc;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;


@end


#endif