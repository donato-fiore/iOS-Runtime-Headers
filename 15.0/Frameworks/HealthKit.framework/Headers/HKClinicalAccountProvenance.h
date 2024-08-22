// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALACCOUNTPROVENANCE_H
#define HKCLINICALACCOUNTPROVENANCE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKClinicalBrand.h"
#import "HKClinicalGateway.h"
#import "HKSignedClinicalDataIssuer.h"

@interface HKClinicalAccountProvenance : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) HKClinicalBrand *brand;
@property (readonly, nonatomic) HKClinicalGateway *gateway; // ivar: _gateway
@property (readonly, nonatomic) HKSignedClinicalDataIssuer *signedClinicalDataIssuer; // ivar: _signedClinicalDataIssuer
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGateway:(id)arg0 ;
-(id)initWithSignedClinicalDataIssuer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif