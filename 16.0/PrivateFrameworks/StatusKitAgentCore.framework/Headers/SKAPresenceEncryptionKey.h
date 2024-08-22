// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAPRESENCEENCRYPTIONKEY_H
#define SKAPRESENCEENCRYPTIONKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SKAPresenceEncryptionKey : NSObject

@property (retain, nonatomic) NSData *keyData; // ivar: _keyData
@property (readonly, nonatomic) NSData *keyMaterial;


+(id)logger;
-(BOOL)_initializeNewKeyMaterial;
-(id)_randomBytesWithLength:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)decryptPayload:(id)arg0 ;
-(id)encryptPayload:(id)arg0 ;
-(id)initWithKeyMaterial:(id)arg0 ;
-(id)initWithNewKeyMaterial;


@end


#endif