// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKLOCALSEPKEY_H
#define TKLOCALSEPKEY_H

@class NSString, NSXPCConnection;


#import "TKSEPKey.h"

@interface TKLocalSEPKey : TKSEPKey {
    NSString *_callerName;
}


@property (readonly, nonatomic) NSXPCConnection *caller; // ivar: _caller
@property (readonly, nonatomic) NSString *callerName;
@property (retain, nonatomic) id *sac; // ivar: _sac


+(BOOL)hasSEP;
+(BOOL)isDaytona;
+(BOOL)isGibraltar;
+(id)_testing_keybagHandle;
+(id)protectionForKeyClass:(int)arg0 ;
+(int)keyClassForProtection:(id)arg0 ;
+(int)keybagHandleForceSystemSession:(BOOL)arg0 ;
+(void)setContextErrorHandler:(id)arg0 ;
+(void)set_testing_callerEntitlements:(id)arg0 ;
+(void)set_testing_keybagHandle:(id)arg0 ;
+(void)setupKeybagForTesting:(BOOL)arg0 ;
-(BOOL)callerHasEntitlement:(id)arg0 error:(*id)arg1 ;
-(BOOL)error:(*id)arg0 withAKSReturn:(int)arg1 ACMHandle:(id)arg2 AKSOperation:(id)arg3 message:(id)arg4 ;
-(BOOL)evaluateRequirementIgnoringAccessGroups:(struct __ACMRequirement *)arg0 ;
-(BOOL)systemKey;
-(id)_initWithAuthContext:(id)arg0 caller:(id)arg1 ;
-(id)_initWithKeyType:(id)arg0 keySize:(NSInteger)arg1 accessControl:(struct __SecAccessControl *)arg2 options:(id)arg3 authContext:(id)arg4 caller:(id)arg5 forceSystemSession:(BOOL)arg6 error:(*id)arg7 ;
-(id)_initWithObjectID:(id)arg0 authContext:(id)arg1 caller:(id)arg2 forceSystemSession:(BOOL)arg3 error:(*id)arg4 ;
-(id)authContextWithError:(*id)arg0 ;
-(id)encodedAccessGroups;
-(id)parametersWithACMHandle:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(struct __SecAccessControl *)accessControl;


@end


#endif