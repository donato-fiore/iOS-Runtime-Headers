// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTHOSTENDPOINTREGISTRY_H
#define PKPAYMENTHOSTENDPOINTREGISTRY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPaymentHostEndpointRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_registrySerialQueue;
    NSMutableDictionary *_hostIdentifierToEndpointMap;
    NSMutableDictionary *_processIdentifierToHostIdentifiersMap;
}




-(id)debugDescription;
-(id)init;
-(id)takeListenerEndpointForHostIdentifier:(id)arg0 ;
-(void)addListenerEndpoint:(id)arg0 forHostIdentifier:(id)arg1 processIdentifier:(int)arg2 ;
-(void)removeListenerEndpointsForProcessIdentifier:(int)arg0 ;


@end


#endif