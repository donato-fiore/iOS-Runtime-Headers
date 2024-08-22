// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_SERVICE_CONNECTOR_H
#define NWCONCRETE_NW_SERVICE_CONNECTOR_H

@class NSString;
@protocol OS_nw_service_connector, OS_nw_listener, OS_nw_parameters, OS_dispatch_queue, OS_nw_array, OS_nw_dictionary, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector>

 {
    NSObject<OS_nw_listener> *listener;
    unsigned int state;
    NSObject<OS_nw_parameters> *clientParameters;
    NSObject<OS_dispatch_queue> *serviceConnectorQueue;
    NSUInteger uniqueID;
    unsigned short localPortHBO;
    unsigned char retryCounterForAddressInUse;
    *void retryAddrInUseTimer;
    id *serviceAvailableBlock;
    NSObject<OS_nw_array> *pendingUnverifiedIncomingRequests;
    NSObject<OS_nw_dictionary> *pendingIncomingRequests;
    NSObject<OS_nw_dictionary> *activeConnections;
    NSObject<OS_nw_dictionary> *activeOutgoingRequests;
    NSObject<OS_xpc_object> *remotePubKeys;
    unsigned char localPrivKey;
    unsigned char localPubKey;
    BOOL useLargeUUIDForTesting;
    BOOL failConnectionAfterVerificationFailsForTesting;
    BOOL failConnectionAfterVerificationPassesForTesting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif