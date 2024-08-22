// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAACMHELPER_H
#define LAACMHELPER_H


#import <Foundation/Foundation.h>


@interface LAACMHelper : NSObject {
    BOOL _contextOwner;
}


@property (readonly, nonatomic) *__ACMHandle acmContext; // ivar: _acmContext
@property (readonly, nonatomic) unsigned int acmTrackingNumber; // ivar: _acmTrackingNumber


+(BOOL)requirement:(struct __ACMRequirement *)arg0 hasFlag:(NSUInteger)arg1 andType:(unsigned int)arg2 ;
+(BOOL)requirement:(struct __ACMRequirement *)arg0 hasState:(unsigned int)arg1 andType:(unsigned int)arg2 ;
+(char *)acmPolicyForPolicy:(NSInteger)arg0 ;
+(id)boolEnvironmentVariable:(unsigned int)arg0 ;
+(id)catacombUUID:(id)arg0 ;
+(id)requirement:(struct __ACMRequirement *)arg0 dataProperty:(unsigned int)arg1 ;
+(id)requirement:(struct __ACMRequirement *)arg0 uint32Property:(unsigned int)arg1 ;
-(BOOL)_verifyRequirement:(struct __ACMRequirement *)arg0 satisfiedForType:(unsigned int)arg1 present:(*BOOL)arg2 flags:(*unsigned int)arg3 ;
-(BOOL)addCredential:(unsigned int)arg0 scope:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)addExtractablePassphrase:(id)arg0 scope:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)isCredentialOfTypeSet:(unsigned int)arg0 error:(*id)arg1 ;
// -(BOOL)performContextBlock:(id)arg0 error:(unk)arg1  ;
// -(BOOL)performCredentialBlock:(id)arg0 credentialType:(unk)arg1 error:(unsigned int)arg2  ;
-(BOOL)removeCredentialsOfType:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)replacePassphraseCredentialWithPurpose:(unsigned int)arg0 passphrase:(id)arg1 scope:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)setData:(id)arg0 type:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)verifyRequirementOfType:(unsigned int)arg0 policy:(char *)arg1 error:(*id)arg2 ;
-(BOOL)verifyRequirementOfType:(unsigned int)arg0 policy:(char *)arg1 mustBePresent:(BOOL)arg2 parameter:(id)arg3 flags:(*unsigned int)arg4 error:(*id)arg5 ;
-(id)credentialOfType:(unsigned int)arg0 property:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithACMContext:(struct __ACMHandle *)arg0 ;
-(id)initWithExternalizedContext:(id)arg0 ;
-(void)dealloc;
-(void)preflightPolicy:(char *)arg0 parameters:(struct ? *)arg1 parametersCount:(unsigned int)arg2 maxGlobalCredentialAge:(unsigned int)arg3 processRequirement:(id)arg4 ;
-(void)verifyPolicy:(char *)arg0 preflight:(BOOL)arg1 parameters:(struct ? *)arg2 parametersCount:(unsigned int)arg3 maxGlobalCredentialAge:(unsigned int)arg4 processRequirement:(id)arg5 ;


@end


#endif