// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRESIDENTDEVICEELECTIONPARAMETERS_H
#define HMDRESIDENTDEVICEELECTIONPARAMETERS_H

@class HMFObject, NSSet, NSDictionary, HMFBoolean, HMFProductInfo;


#import "HMDResidentDevice.h"
#import "HMDHomeKitVersion.h"

@interface HMDResidentDeviceElectionParameters : HMFObject

@property (readonly, copy) NSSet *accessories; // ivar: _accessories
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, getter=isEnabled) HMFBoolean *enabled; // ivar: _enabled
@property (readonly) NSInteger location; // ivar: _location
@property (readonly) HMFProductInfo *productInfo; // ivar: _productInfo
@property (readonly) HMDResidentDevice *resident; // ivar: _resident
@property (readonly) HMDHomeKitVersion *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 outCriteria:(*NSUInteger)arg1 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithResident:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)initWithResident:(id)arg0 enabled:(id)arg1 location:(NSInteger)arg2 accessories:(id)arg3 ;


@end


#endif