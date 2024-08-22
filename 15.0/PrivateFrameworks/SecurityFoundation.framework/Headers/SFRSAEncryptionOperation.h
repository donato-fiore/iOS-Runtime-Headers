// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRSAENCRYPTIONOPERATION_H
#define SFRSAENCRYPTIONOPERATION_H

@class NSString;
@protocol _SFEncryptionOperation;

#import <Foundation/Foundation.h>

#import "_SFRSAKeySpecifier.h"

@interface SFRSAEncryptionOperation : NSObject <_SFEncryptionOperation>

 {
    id *_rsaEncryptionOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) _SFRSAKeySpecifier *encryptionKeySpecifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_defaultEncryptionOperation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif