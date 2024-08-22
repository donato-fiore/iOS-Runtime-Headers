// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTDEVICECONFIGURATIONDATA_H
#define PKPAYMENTDEVICECONFIGURATIONDATA_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding>



@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (copy, nonatomic) NSNumber *primaryJSBLSequenceCounter; // ivar: _primaryJSBLSequenceCounter
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif