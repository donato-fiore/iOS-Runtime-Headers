// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17COREIDCREDBUILDER28CIDCINTERNALSESSIONCRYPTARCH_H
#define _TTC17COREIDCREDBUILDER28CIDCINTERNALSESSIONCRYPTARCH_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _TtC17CoreIDCredBuilder28CIDCInternalSessionCryptarch : NSObject {
    ? sessionCryptarch;
}


@property (nonatomic, readonly) NSData *publicKey;


-(BOOL)deriveSessionKeysWithSessionTranscript:(id)arg0 ikm:(id)arg1 error:(*id)arg2 ;
-(BOOL)setRemoteKey:(id)arg0 error:(*id)arg1 ;
-(id)decryptWithData:(id)arg0 error:(*id)arg1 ;
-(id)encryptWithData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithRole:(NSUInteger)arg0 curve:(NSUInteger)arg1 variant:(NSUInteger)arg2 ;


@end


#endif