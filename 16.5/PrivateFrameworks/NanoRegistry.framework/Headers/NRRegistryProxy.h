// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRREGISTRYPROXY_H
#define NRREGISTRYPROXY_H

@protocol NRXPCRegistryDelegate;


#import "NRXPCProxy.h"

@interface NRRegistryProxy : NRXPCProxy <NRXPCRegistryDelegate>





+(BOOL)requireAnEntitlement;
+(id)clientRemoteObjectInterface;
+(id)entitlements;
+(id)machServiceName;
+(id)serverExportedInterface;
-(BOOL)_hasInternalEntitlement;
-(BOOL)loudHasEntitlement:(id)arg0 ;
-(id)registryDelegate;
-(void)logCaller:(SEL)arg0 args:(id)arg1 ;
-(void)xpcApplyDiff:(id)arg0 withSecureProperties:(id)arg1 block:(id)arg2 ;
-(void)xpcClientInfo:(id)arg0 ;
-(void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg0 withBlock:(id)arg1 ;
-(void)xpcGetChangeHistoryWithBlock:(id)arg0 ;
-(void)xpcGetDeviceCollectionWithBlock:(id)arg0 ;
-(void)xpcGetDiffSinceTokenValue:(NSUInteger)arg0 getSecureProperties:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)xpcRetrieveSecureProperties:(id)arg0 block:(id)arg1 ;
-(void)xpcSetMigrationConsented:(BOOL)arg0 forDeviceID:(id)arg1 withBlock:(id)arg2 ;
-(void)xpcSwitchIndex:(id)arg0 ;


@end


#endif