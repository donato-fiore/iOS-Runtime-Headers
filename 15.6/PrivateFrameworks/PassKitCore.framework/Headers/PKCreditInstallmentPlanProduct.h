// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCREDITINSTALLMENTPLANPRODUCT_H
#define PKCREDITINSTALLMENTPLANPRODUCT_H

@class NSString, NSSet, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditInstallmentPlanProduct : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *capacity; // ivar: _capacity
@property (copy, nonatomic) NSString *color; // ivar: _color
@property (copy, nonatomic) NSSet *features; // ivar: _features
@property (copy, nonatomic) NSDictionary *iconURLs; // ivar: _iconURLs
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSDictionary *splashImageURLs; // ivar: _splashImageURLs
@property (nonatomic, getter=isUpgradeEligible) BOOL upgradeEligible; // ivar: _upgradeEligible
@property (nonatomic) NSUInteger warrantyYears; // ivar: _warrantyYears


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstallmentPlanProduct:(id)arg0 ;
-(NSUInteger)hash;
-(id)_imageURLFromImageURLs:(id)arg0 forScale:(CGFloat)arg1 suffix:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)iconURLForScale:(CGFloat)arg0 suffix:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)splashImageURLForScale:(CGFloat)arg0 suffix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif