// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRCRYPTOPAIRINGMESSAGE_H
#define MRCRYPTOPAIRINGMESSAGE_H

@class NSData;


#import "MRProtocolMessage.h"

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *pairingData;
@property (readonly, nonatomic, getter=isRetrying) BOOL retrying;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;


-(NSUInteger)encryptionType;
-(NSUInteger)type;
-(id)initWithPairingData:(id)arg0 status:(int)arg1 ;
-(id)initWithPairingData:(id)arg0 status:(int)arg1 isRetrying:(BOOL)arg2 isUsingSystemPairing:(BOOL)arg3 state:(NSUInteger)arg4 ;


@end


#endif