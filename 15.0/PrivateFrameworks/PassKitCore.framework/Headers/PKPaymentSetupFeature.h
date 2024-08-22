// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPFEATURE_H
#define PKPAYMENTSETUPFEATURE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger supportedOptions; // ivar: _supportedOptions
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)paymentSetupFeatureWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif