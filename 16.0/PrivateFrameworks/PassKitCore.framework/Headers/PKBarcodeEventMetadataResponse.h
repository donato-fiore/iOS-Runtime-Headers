// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBARCODEEVENTMETADATARESPONSE_H
#define PKBARCODEEVENTMETADATARESPONSE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBarcodeEventMetadataResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *paymentInformation; // ivar: _paymentInformation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentInformation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif