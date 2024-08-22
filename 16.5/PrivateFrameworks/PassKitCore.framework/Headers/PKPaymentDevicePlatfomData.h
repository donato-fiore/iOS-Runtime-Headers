// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTDEVICEPLATFOMDATA_H
#define PKPAYMENTDEVICEPLATFOMDATA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentDevicePlatfomData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *platformData; // ivar: _platformData
@property (copy, nonatomic) NSData *platformDataSignature; // ivar: _platformDataSignature


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif