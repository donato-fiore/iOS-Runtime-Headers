// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTRIPLEDESENCRYPTIONOPERATION_H
#define SFTRIPLEDESENCRYPTIONOPERATION_H



#import "SFSymmetricEncryptionOperation.h"
#import "_SFTripleDESKeySpecifier.h"

@interface SFTripleDESEncryptionOperation : SFSymmetricEncryptionOperation {
    id *_tripleDESEncryptionOperationInternal;
}


@property (copy, nonatomic) _SFTripleDESKeySpecifier *encryptionKeySpecifier;


-(id)decrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 mode:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif