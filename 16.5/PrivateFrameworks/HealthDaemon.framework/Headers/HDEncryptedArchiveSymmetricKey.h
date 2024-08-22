// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDENCRYPTEDARCHIVESYMMETRICKEY_H
#define HDENCRYPTEDARCHIVESYMMETRICKEY_H

@class NSData, NSString;
@protocol HDEncryptedArchiveKey, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDEncryptedArchiveSymmetricKey : NSObject <HDEncryptedArchiveKey, NSCopying, NSSecureCoding>

 {
    NSData *_key;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL symmetric;


+(BOOL)supportsSecureCoding;
+(id)fetchFromKeychainForLabel:(id)arg0 error:(*id)arg1 ;
+(id)randomKeyWithError:(*id)arg0 ;
-(BOOL)addToKeychainWithLabel:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteFromKeychainWithLabel:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)keyDataForDecryptionWithError:(*id)arg0 ;
-(id)keyDataForEncryptionWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif