// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDCSESSIONCRYPTARCH_H
#define CIDCSESSIONCRYPTARCH_H

@class NSData;

#import <Foundation/Foundation.h>

#import "_TtC17CoreIDCredBuilder28CIDCInternalSessionCryptarch.h"

@interface CIDCSessionCryptarch : NSObject

@property (retain) _TtC17CoreIDCredBuilder28CIDCInternalSessionCryptarch *internalCryptarch; // ivar: _internalCryptarch
@property (readonly) NSData *publicKey;


-(BOOL)deriveSessionKeysFromSessionTranscript:(id)arg0 error:(*id)arg1 ;
-(BOOL)deriveSessionKeysFromSessionTranscript:(id)arg0 intermediateKeyMaterial:(id)arg1 error:(*id)arg2 ;
-(BOOL)setRemoteKey:(id)arg0 error:(*id)arg1 ;
-(id)decryptData:(id)arg0 error:(*id)arg1 ;
-(id)encryptData:(id)arg0 error:(*id)arg1 ;
-(id)initWithRole:(NSUInteger)arg0 curve:(NSUInteger)arg1 ;
-(id)initWithRole:(NSUInteger)arg0 curve:(NSUInteger)arg1 variant:(NSUInteger)arg2 ;


@end


#endif