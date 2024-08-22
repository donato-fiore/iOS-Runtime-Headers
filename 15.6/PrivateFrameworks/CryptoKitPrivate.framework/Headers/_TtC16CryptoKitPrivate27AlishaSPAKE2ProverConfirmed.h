// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16CRYPTOKITPRIVATE27ALISHASPAKE2PROVERCONFIRMED_H
#define _TTC16CRYPTOKITPRIVATE27ALISHASPAKE2PROVERCONFIRMED_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate27AlishaSPAKE2ProverConfirmed : NSObject

@property (nonatomic, readonly) NSData *KEnc; // ivar: KEnc
@property (nonatomic, readonly) NSData *KMac; // ivar: KMac
@property (nonatomic, readonly) NSData *KRMac; // ivar: KRMac
@property (nonatomic, readonly) NSData *Kble_intro; // ivar: Kble_intro
@property (nonatomic, readonly) NSData *Kble_oob_master; // ivar: Kble_oob_master
@property (nonatomic, readonly) NSData *M2; // ivar: M2
@property (nonatomic, readonly) NSData *SymmetricLTS; // ivar: SymmetricLTS
@property (nonatomic, readonly) NSData *alishaKey; // ivar: alishaKey


-(id)init;


@end


#endif