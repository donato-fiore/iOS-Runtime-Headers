// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPRECOVERYKEYPAIR_H
#define TPRECOVERYKEYPAIR_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TPRecoveryKeyPair : NSObject

@property (readonly, retain) NSData *encryptionKeyData; // ivar: _encryptionKeyData
@property (readonly, retain) NSData *signingKeyData; // ivar: _signingKeyData


-(id)initWithSigningKeyData:(id)arg0 encryptionKeyData:(id)arg1 ;
-(id)initWithStableInfo:(id)arg0 ;


@end


#endif