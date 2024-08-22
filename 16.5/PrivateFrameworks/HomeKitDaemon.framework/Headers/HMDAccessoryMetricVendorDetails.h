// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYMETRICVENDORDETAILS_H
#define HMDACCESSORYMETRICVENDORDETAILS_H

@class HMFObject, NSString, NSNumber;



@interface HMDAccessoryMetricVendorDetails : HMFObject

@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSNumber *differentiationNumber; // ivar: _differentiationNumber
@property (readonly, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *productData; // ivar: _productData


+(NSUInteger)maximumDifferentiationNumber;
-(id)attributeDescriptions;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithProductData:(id)arg0 manufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 category:(id)arg4 differentiationNumber:(id)arg5 ;


@end


#endif