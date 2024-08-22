// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17MESSAGEPROTECTION17SKOUTGOINGRATCHET_H
#define _TTC17MESSAGEPROTECTION17SKOUTGOINGRATCHET_H


#import <Foundation/Foundation.h>


@interface _TtC17MessageProtection17SKOutgoingRatchet : NSObject {
    ? ratchet;
    ? signingKey;
    ? currentSubscriptionKey;
    ? currentMessageKey;
}




+(id)generate;
-(BOOL)ratchetForward;
-(id)currentSubscriptionKeys;
-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)sealMessage:(id)arg0 authenticating:(id)arg1 error:(*id)arg2 ;
-(id)serializedData;
-(id)signingKeyIdentifier;


@end


#endif