// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUISERVICEENTITLEMENTCHECKER_H
#define AXUISERVICEENTITLEMENTCHECKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AXUIServiceEntitlementChecker : NSObject

@property (retain, nonatomic) NSMutableArray *clientConnections; // ivar: _clientConnections
@property (retain, nonatomic) NSMutableArray *entitlementsCaches; // ivar: _entitlementsCaches
@property (nonatomic) Class serviceClass; // ivar: _serviceClass


-(BOOL)_clientProcessWithAuditToken:(struct ? *)arg0 hasEntitlement:(id)arg1 ;
-(BOOL)serviceCanProcessMessageWithIdentifier:(NSUInteger)arg0 fromClientWithConnection:(id)arg1 possibleRequiredEntitlements:(*id)arg2 ;
-(NSUInteger)_indexOfClientConnection:(id)arg0 ;
-(id)_possibleRequiredEntitlementForMessageWithIdentifier:(NSUInteger)arg0 ;
-(id)_singleRequiredEntitlementForMessageWithIdentifier:(NSUInteger)arg0 ;
-(id)initWithServiceClass:(Class)arg0 ;
-(void)clientConnectionWillBeTerminated:(id)arg0 ;
-(void)dealloc;


@end


#endif