// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTTRANSACTIONMETADATA_H
#define PKPEERPAYMENTTRANSACTIONMETADATA_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentTransactionMetadata : NSObject <NSSecureCoding>



@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // ivar: _requestDeviceScoreIdentifier
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // ivar: _sendDeviceScoreIdentifier
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerPaymentTransactionMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif