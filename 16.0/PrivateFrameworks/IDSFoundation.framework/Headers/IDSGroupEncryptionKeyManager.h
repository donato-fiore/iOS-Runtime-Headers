// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPENCRYPTIONKEYMANAGER_H
#define IDSGROUPENCRYPTIONKEYMANAGER_H

@class NSMutableData, NSMutableArray, NSData, NSUUID, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSGroupEncryptionKeyManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableData *_encryptionContext;
    NSUInteger _encryptionKeySize;
    NSMutableArray *_previousEncryptingKeys;
    NSMutableArray *_previousEncryptingKeyIndexes;
    NSMutableArray *_previousEncryptingKeySalts;
    NSData *_currentEncryptingKey;
    NSUUID *_currentEncryptingKeyIndex;
    NSData *_currentEncryptingKeySalt;
    unsigned int _currentEncryptingKeyGeneration;
    NSMutableDictionary *_currentDecryptingKeysAndSalts;
}




-(BOOL)useCurrentEncryptionkeyWithHandler:(id)arg0 ;
-(BOOL)useDecryptingKeyForKeyIndex:(id)arg0 handler:(id)arg1 ;
-(id)initWithEncryptionContext:(id)arg0 encryptionKeySize:(NSUInteger)arg1 ;
-(void)enumerateDecryptingKeysAndSaltsUsingBlock:(id)arg0 ;
-(void)invalidateKeyMaterialByKeyIndexes:(id)arg0 ;
-(void)purgeOldKeyMaterial;
-(void)receiveMembershipChangedInformation:(unsigned char)arg0 ;
-(void)recvKeyMaterial:(id)arg0 ;


@end


#endif