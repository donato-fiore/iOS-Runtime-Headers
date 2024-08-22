// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPSERVICE_H
#define HAPSERVICE_H

@class HMFObject, CBService, NSArray, NSString, NSNumber;
@protocol NSCopying, HMFMerging;


#import "HAPAccessory.h"

@interface HAPService : HMFObject <NSCopying, HMFMerging>



@property (weak, nonatomic) HAPAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic, setter=setCBService:) CBService *cbService;
@property (retain, nonatomic) NSArray *characteristics; // ivar: _characteristics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (retain, nonatomic) NSArray *linkedServices; // ivar: _linkedServices
@property (nonatomic) NSUInteger serviceProperties; // ivar: _serviceProperties
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)hap2_mergeServices:(id)arg0 discoveredServices:(id)arg1 mergedServices:(id)arg2 ;
-(BOOL)_updateCharacteristic:(id)arg0 ;
-(BOOL)_validateMandatoryCharacteristics;
-(BOOL)_validateServiceCharacteristics;
-(BOOL)hap2_mergeWithService:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToService:(id)arg0 ;
-(BOOL)mergeObject:(id)arg0 ;
-(BOOL)shouldMergeObject:(id)arg0 ;
-(BOOL)updateAndValidateCharacteristics;
-(id)characteristicsOfType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(id)arg0 instanceID:(id)arg1 ;
-(id)initWithType:(id)arg0 instanceID:(id)arg1 parsedCharacteristics:(id)arg2 serviceProperties:(NSUInteger)arg3 linkedServices:(id)arg4 ;
-(id)propertiesDescription;


@end


#endif