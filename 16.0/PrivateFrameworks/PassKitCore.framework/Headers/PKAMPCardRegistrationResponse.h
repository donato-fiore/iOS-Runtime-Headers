// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAMPCARDREGISTRATIONRESPONSE_H
#define PKAMPCARDREGISTRATIONRESPONSE_H

@class NSURL, NSData, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAMPCardRegistrationResponse : NSObject <NSSecureCoding>



@property (retain) NSURL *brokerURL; // ivar: _brokerURL
@property (retain) NSData *cardData; // ivar: _cardData
@property (retain) NSError *error; // ivar: _error
@property (retain) NSURL *paymentServicesURL; // ivar: _paymentServicesURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCardData:(id)arg0 brokerURL:(id)arg1 paymentServicesURL:(id)arg2 error:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif