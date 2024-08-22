// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEENDPOINTPRIVACYENCRYPTRESPONSE_H
#define SEENDPOINTPRIVACYENCRYPTRESPONSE_H

@class NSData, NSString;
@protocol NSSecureCoding, SEEndPointPrivacyEncryptResponse;

#import <Foundation/Foundation.h>


@interface SEEndPointPrivacyEncryptResponse : NSObject <NSSecureCoding, SEEndPointPrivacyEncryptResponse>



@property (retain, nonatomic) NSData *cipherText; // ivar: _cipherText
@property (retain, nonatomic) NSData *ephemeralPublicKeydata; // ivar: _ephemeralPublicKeydata
@property (retain, nonatomic) NSData *receiverPublicKeyHash; // ivar: _receiverPublicKeyHash
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)responseWithCipherText:(id)arg0 epehemeralPublicKeydata:(id)arg1 receiverPublicKeyHash:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif