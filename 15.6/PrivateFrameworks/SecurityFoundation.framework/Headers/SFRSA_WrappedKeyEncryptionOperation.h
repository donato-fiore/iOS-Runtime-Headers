// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFRSA_WRAPPEDKEYENCRYPTIONOPERATION_H
#define SFRSA_WRAPPEDKEYENCRYPTIONOPERATION_H

@class NSString;
@protocol _SFEncryptionOperation, NSCopying;

#import <Foundation/Foundation.h>

#import "_SFKeySpecifier.h"
#import "SFRSAEncryptionOperation.h"
#import "SFSymmetricEncryptionOperation.h"

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying>

 {
    id *_wrappedKeyEncryptionOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SFRSAEncryptionOperation *keyWrappingOperation;
@property (copy, nonatomic) SFSymmetricEncryptionOperation *sessionEncryptionOperation;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyWrappingOperation:(id)arg0 ;
-(id)initWithKeyWrappingOperation:(id)arg0 sessionEncryptionOperation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif