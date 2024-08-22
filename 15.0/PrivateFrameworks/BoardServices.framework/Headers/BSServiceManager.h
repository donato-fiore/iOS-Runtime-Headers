// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSERVICEMANAGER_H
#define BSSERVICEMANAGER_H

@class NSMutableDictionary, NSMapTable, RBSService, NSString;
@protocol RBSServiceDelegate;

#import <Foundation/Foundation.h>

#import "BSServicesConfiguration.h"

@interface BSServiceManager : NSObject <RBSServiceDelegate>

 {
    BSServicesConfiguration *_bootstrapConfiguration;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_identifierToDomain;
    BOOL _lock_bootstrapped;
    NSUInteger _lock_bootstrapExtensions;
    NSMutableDictionary *_lock_endpointToOutgoingRootConnections;
    NSMutableDictionary *_lock_inheritanceToEndpoint;
    NSMapTable *_lock_endpointToInheritances;
    NSMutableDictionary *_lock_serviceIdentifierToEndpoints;
    NSMutableDictionary *_lock_serviceIdentifierToMonitors;
    os_unfair_lock_s _callOutLock;
    NSMutableDictionary *_callOutLock_serviceIdentifierToEndpointsToEnvironments;
    RBSService *_RBSService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)service:(id)arg0 didLoseInheritances:(id)arg1 ;
-(void)service:(id)arg0 didReceiveInheritances:(id)arg1 ;


@end


#endif