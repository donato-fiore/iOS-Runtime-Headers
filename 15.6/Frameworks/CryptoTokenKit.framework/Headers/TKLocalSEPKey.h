// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKLOCALSEPKEY_H
#define TKLOCALSEPKEY_H

@class NSXPCConnection;


#import "TKSEPKey.h"

@interface TKLocalSEPKey : TKSEPKey

@property (retain, nonatomic) NSXPCConnection *caller; // ivar: _caller
@property (retain, nonatomic) id *sac; // ivar: _sac


+(BOOL)hasSEP;
+(BOOL)isDaytona;
+(BOOL)isGibraltar;
+(id)protectionForKeyClass:(int)arg0 ;
+(int)keyClassForProtection:(id)arg0 ;
+(int)keybagHandle;
+(void)setContextErrorHandler:(id)arg0 ;
+(void)set_testing_callerEntitlements:(id)arg0 ;
+(void)setupKeybagForTesting:(BOOL)arg0 ;
-(BOOL)callerHasEntitlement:(id)arg0 error:(*id)arg1 ;
-(BOOL)error:(*id)arg0 withAKSReturn:(int)arg1 ACMHandle:(id)arg2 AKSOperation:(id)arg3 message:(id)arg4 ;
-(BOOL)systemKey;
-(id)_initWithKeyType:(id)arg0 keySize:(NSInteger)arg1 accessControl:(struct __SecAccessControl *)arg2 options:(id)arg3 authContext:(id)arg4 error:(*id)arg5 ;
-(id)_initWithObjectID:(id)arg0 authContext:(id)arg1 error:(*id)arg2 ;
-(id)authContextWithError:(*id)arg0 ;
-(id)parametersWithACMHandle:(id)arg0 ;
-(struct __SecAccessControl *)accessControl;


@end


#endif