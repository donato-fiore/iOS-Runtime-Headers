// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEFIDOKEY_H
#define SEFIDOKEY_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SEFidoKey : NSObject <NSSecureCoding>



@property (readonly) NSData *fidoAttestation; // ivar: _fidoAttestation
@property (readonly) NSData *fidoKeyHash;
@property (readonly) NSData *fidoPublicKey; // ivar: _fidoPublicKey
@property (readonly) NSString *relyingParty; // ivar: _relyingParty
@property (readonly) NSString *relyingPartyAccountHash; // ivar: _relyingPartyAccountHash


+(BOOL)supportsSecureCoding;
+(id)withRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoPublicKey:(id)arg2 fidoAttestation:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif