// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDENCRYPTEDARCHIVEKEYPAIR_H
#define HDENCRYPTEDARCHIVEKEYPAIR_H

@class NSString;
@protocol HDEncryptedArchiveKey;

#import <Foundation/Foundation.h>


@interface HDEncryptedArchiveKeyPair : NSObject <HDEncryptedArchiveKey>

 {
    *__SecKey _fullKey;
    *__SecKey _publicKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL symmetric;


+(id)fetchFromKeychainForLabel:(id)arg0 includePrivate:(BOOL)arg1 error:(*id)arg2 ;
+(id)randomKeyPairWithError:(*id)arg0 ;
-(BOOL)_deleteFromKeychainWithLabel:(id)arg0 public:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)addToKeychainWithLabel:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteFromKeychainWithLabel:(id)arg0 error:(*id)arg1 ;
-(id)initWithPublicSecKey:(struct __SecKey *)arg0 ;
-(id)initWithSecKey:(struct __SecKey *)arg0 ;
-(id)keyDataForDecryptionWithError:(*id)arg0 ;
-(id)keyDataForEncryptionWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif