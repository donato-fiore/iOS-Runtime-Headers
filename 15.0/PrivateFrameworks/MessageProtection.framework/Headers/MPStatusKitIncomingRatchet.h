// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTATUSKITINCOMINGRATCHET_H
#define MPSTATUSKITINCOMINGRATCHET_H


#import <Foundation/Foundation.h>

#import "_TtC17MessageProtection17SKIncomingRatchet.h"

@interface MPStatusKitIncomingRatchet : NSObject

@property (retain, nonatomic) _TtC17MessageProtection17SKIncomingRatchet *ratchet; // ivar: _ratchet


-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithIndex:(unsigned short)arg0 chainKey:(id)arg1 signingKey:(id)arg2 error:(*id)arg3 ;
-(id)serializedData;
-(id)unsealStatusWithIndex:(unsigned short)arg0 encryptedMessage:(id)arg1 authenticating:(id)arg2 signature:(id)arg3 error:(*id)arg4 ;


@end


#endif