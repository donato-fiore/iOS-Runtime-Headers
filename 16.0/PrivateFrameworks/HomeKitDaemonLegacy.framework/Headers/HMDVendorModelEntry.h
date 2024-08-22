// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDVENDORMODELENTRY_H
#define HMDVENDORMODELENTRY_H

@class HMFObject, NSString, NSArray;


#import "HMDAccessoryVersion.h"

@interface HMDVendorModelEntry : HMFObject

@property (readonly, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (readonly, nonatomic) NSString *appStoreID; // ivar: _appStoreID
@property (readonly, nonatomic) HMDAccessoryVersion *firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *productData; // ivar: _productData
@property (readonly, nonatomic) NSArray *productDataAlternates; // ivar: _productDataAlternates


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithManufacturer:(id)arg0 model:(id)arg1 appBundleID:(id)arg2 appStoreID:(id)arg3 firmwareVersion:(id)arg4 productData:(id)arg5 productDataAlternates:(id)arg6 ;


@end


#endif