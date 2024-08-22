// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPCONFIGURATION_H
#define PKPAYMENTSETUPCONFIGURATION_H

@class NSString, NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (retain, nonatomic) NSURL *originatingURL; // ivar: _originatingURL
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (copy, nonatomic) NSString *signature; // ivar: _signature
@property (copy, nonatomic) NSArray *signedFields; // ivar: _signedFields


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif