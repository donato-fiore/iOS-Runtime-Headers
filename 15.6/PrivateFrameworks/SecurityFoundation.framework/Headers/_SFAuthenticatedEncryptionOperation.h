// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFAUTHENTICATEDENCRYPTIONOPERATION_H
#define _SFAUTHENTICATEDENCRYPTIONOPERATION_H

@class NSString;
@protocol _SFEncryptionOperation;

#import <Foundation/Foundation.h>

#import "_SFAESKeySpecifier.h"

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation>

 {
    id *_authenticatedEncryptionOperationInternal;
}


@property (nonatomic) NSInteger authenticationCodeLength;
@property (nonatomic) NSInteger authenticationMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)_defaultAuthenticationMode;
+(id)_defaultEncryptionOperation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decrypt:(id)arg0 withKey:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(*id)arg3 ;
-(id)decrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(*id)arg3 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 additionalAuthenticatedData:(id)arg2 ivGenerator:(id)arg3 error:(*id)arg4 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 ivGenerator:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 authenticationMode:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif