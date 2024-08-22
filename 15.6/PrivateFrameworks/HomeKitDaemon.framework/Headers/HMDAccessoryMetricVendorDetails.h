// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYMETRICVENDORDETAILS_H
#define HMDACCESSORYMETRICVENDORDETAILS_H

@class HMFObject, NSString, NSNumber;



@interface HMDAccessoryMetricVendorDetails : HMFObject

@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSNumber *differentiationNumber; // ivar: _differentiationNumber
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *productData; // ivar: _productData


+(NSUInteger)maximumDifferentiationNumber;
-(id)initWithAccessory:(id)arg0 ;


@end


#endif