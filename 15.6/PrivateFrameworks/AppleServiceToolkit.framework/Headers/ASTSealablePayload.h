// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTSEALABLEPAYLOAD_H
#define ASTSEALABLEPAYLOAD_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface ASTSealablePayload : NSObject

@property (retain, nonatomic) NSString *base64Signature; // ivar: _base64Signature
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic, getter=isSealed) BOOL sealed; // ivar: _sealed
@property (retain, nonatomic) NSData *signature; // ivar: _signature


// -(BOOL)sealWithPayloadSigner:(id)arg0 error:(unk)arg1  ;
-(id)description;
-(id)generatePayload;
-(id)initWithPayload:(id)arg0 signature:(id)arg1 ;
-(id)sealedDescription;


@end


#endif