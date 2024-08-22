// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOUTILS_H
#define SOUTILS_H


#import <Foundation/Foundation.h>


@interface SOUtils : NSObject



+(BOOL)auditTokenFromData:(id)arg0 auditToken:(struct ? *)arg1 ;
+(BOOL)checkEntitlementFromXPC:(id)arg0 entitlement:(id)arg1 ;
+(BOOL)checkSignatureOfFile:(id)arg0 teamIdentifier:(*id)arg1 trusted:(*BOOL)arg2 signedBySet:(*NSInteger)arg3 certificates:(*id)arg4 error:(*id)arg5 ;
+(BOOL)currentProcessIsSandboxed;
+(BOOL)isAppSSOServiceAvailable;
+(BOOL)isInternalBuild;
+(BOOL)sandboxAllowsXPC:(char *)arg0 ;
+(id)bundleIdentifierFromAuditToken:(struct ? )arg0 ;
+(id)currentProcessContainerPath;
+(id)currentProcessName;
+(id)mapArray:(id)arg0 usingBlock:(id)arg1 ;
+(id)processNameForPID:(int)arg0 ;
+(id)signatureSetToString:(NSInteger)arg0 ;
+(id)teamIdentifierFromAuditToken:(struct ? )arg0 ;
+(int)mmapFile:(id)arg0 mode:(NSInteger)arg1 mmapData:(*id)arg2 ;
+(int)pidFromAuditToken:(struct ? )arg0 ;
+(void)unmapFile:(int)arg0 data:(id)arg1 ;


@end


#endif