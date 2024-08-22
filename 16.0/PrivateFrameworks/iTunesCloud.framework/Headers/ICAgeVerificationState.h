// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAGEVERIFICATIONSTATE_H
#define ICAGEVERIFICATIONSTATE_H

@class NSError, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICAgeVerifier.h"
#import "ICUserIdentity.h"

@interface ICAgeVerificationState : NSObject <NSCopying>



@property (readonly, copy, nonatomic) ICAgeVerifier *ageVerifier; // ivar: _ageVerifier
@property (readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSInteger treatment; // ivar: _treatment
@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, copy, nonatomic) NSURL *verificationURL; // ivar: _verificationURL


+(id)_stateFromDictionaryRepresentation:(id)arg0 DSID:(id)arg1 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg0 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg0 withError:(id)arg1 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg0 withTreatment:(NSInteger)arg1 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg0 withTreatment:(NSInteger)arg1 verificationURL:(id)arg2 ;
+(id)cachedStateForDSID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentationWithDSID:(id)arg0 ;
-(id)_initWithUserIdentity:(id)arg0 status:(NSInteger)arg1 treatment:(NSInteger)arg2 verificationURL:(id)arg3 error:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUserIdentity:(id)arg0 ageVerifier:(id)arg1 treatment:(NSInteger)arg2 verificationURL:(id)arg3 ;
-(void)saveToUserDefaults;


@end


#endif