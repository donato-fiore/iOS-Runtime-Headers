// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTATUSKITOUTGOINGRATCHET_H
#define MPSTATUSKITOUTGOINGRATCHET_H


#import <Foundation/Foundation.h>

#import "_TtC17MessageProtection17SKOutgoingRatchet.h"

@interface MPStatusKitOutgoingRatchet : NSObject

@property (retain, nonatomic) _TtC17MessageProtection17SKOutgoingRatchet *ratchet; // ivar: _ratchet


-(id)currentSubscriptionKeys;
-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)sealStatus:(id)arg0 authenticating:(id)arg1 error:(*id)arg2 ;
-(id)serializedData;
-(id)signingKeyIdentifier;


@end


#endif