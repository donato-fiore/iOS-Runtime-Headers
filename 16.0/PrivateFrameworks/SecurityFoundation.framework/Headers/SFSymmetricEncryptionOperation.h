// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSYMMETRICENCRYPTIONOPERATION_H
#define SFSYMMETRICENCRYPTIONOPERATION_H

@class NSString;
@protocol _SFEncryptionOperation;

#import <Foundation/Foundation.h>

#import "_SFSymmetricKeySpecifier.h"

@interface SFSymmetricEncryptionOperation : NSObject <_SFEncryptionOperation>

 {
    id *_symmetricEncryptionOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) _SFSymmetricKeySpecifier *encryptionKeySpecifier;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)_defaultEncryptionMode;
+(id)_defaultEncryptionOperation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 ivGenerator:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 mode:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif