// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALPROVIDER_H
#define HKCLINICALPROVIDER_H

@class NSString, NSArray, NSURL;
@protocol NSCopying, NSSecureCoding, HKClinicalBrandable;

#import <Foundation/Foundation.h>

#import "HKClinicalBrand.h"

@interface HKClinicalProvider : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>



@property (readonly, copy, nonatomic) HKClinicalBrand *brand; // ivar: _brand
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, copy, nonatomic) NSArray *gateways; // ivar: _gateways
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *informationURL; // ivar: _informationURL
@property (readonly, copy, nonatomic) NSString *location; // ivar: _location
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalID:(id)arg0 title:(id)arg1 subtitle:(id)arg2 location:(id)arg3 informationURL:(id)arg4 brand:(id)arg5 gateways:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif