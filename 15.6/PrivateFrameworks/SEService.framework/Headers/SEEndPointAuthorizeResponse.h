// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEENDPOINTAUTHORIZERESPONSE_H
#define SEENDPOINTAUTHORIZERESPONSE_H

@class NSData;
@protocol NSSecureCoding, SESEndPointAuthorizeAttestation;

#import <Foundation/Foundation.h>


@interface SEEndPointAuthorizeResponse : NSObject <NSSecureCoding, SESEndPointAuthorizeAttestation>



@property (retain, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (retain, nonatomic) NSData *encryptionPublicKeyData; // ivar: _encryptionPublicKeyData
@property (retain, nonatomic) NSData *endPointAttestationData; // ivar: _endPointAttestationData


+(BOOL)supportsSecureCoding;
+(id)responseWithEndPointAttestationData:(id)arg0 encryptionPublicKeyData:(id)arg1 encryptedData:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif