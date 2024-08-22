// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPROCESS_H
#define BMPROCESS_H

@class NSString, NSMutableDictionary, NSNumber, NSSet;

#import <Foundation/Foundation.h>


@interface BMProcess : NSObject {
    NSString *_executablePath;
    os_unfair_lock_s _entitlementCacheLock;
    NSMutableDictionary *_entitlementCache;
    os_unfair_lock_s _reliesOnCoreDuetAccessLock;
    NSNumber *_reliesOnCoreDuetAccess;
    os_unfair_lock_s _machLookupCacheLock;
    NSMutableDictionary *_machLookupCache;
}


@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSSet *authorizedStreamsForReading;
@property (readonly, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isLegacyAppleInternalClient;
@property (readonly, nonatomic) BOOL isSandboxed;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSUInteger processType; // ivar: _processType
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid


+(id)current;
+(id)processWithXPCConnection:(id)arg0 ;
-(BOOL)_canTrustApplicationIdentifierEntitlement;
-(BOOL)boolForEntitlement:(id)arg0 ;
-(BOOL)canPerformFileOperation:(id)arg0 onPath:(id)arg1 report:(BOOL)arg2 ;
-(BOOL)canPerformGlobalMachLookup:(id)arg0 report:(BOOL)arg1 ;
-(BOOL)canPerformSyscall:(id)arg0 report:(BOOL)arg1 ;
-(id)_initWithAuditToken:(struct ? )arg0 ;
-(id)arrayForEntitlement:(id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_initializeProcessProperties;
-(void)cacheValuesForEntitlements:(id)arg0 ;


@end


#endif