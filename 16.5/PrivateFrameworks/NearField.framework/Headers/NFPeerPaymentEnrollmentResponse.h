// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFPEERPAYMENTENROLLMENTRESPONSE_H
#define NFPEERPAYMENTENROLLMENTRESPONSE_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSDictionary *certificate; // ivar: _certificate
@property (readonly, retain, nonatomic) NSData *prePeerPaymentCertificate; // ivar: _prePeerPaymentCertificate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif