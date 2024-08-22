// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINHAPSERVICEDESCRIPTION_H
#define CHIPPLUGINHAPSERVICEDESCRIPTION_H

@class HMFObject, NSDictionary, NSNumber, NSArray, NSString;



@interface CHIPPluginHAPServiceDescription : HMFObject

@property (readonly) NSDictionary *characteristicFeatureMap; // ivar: _characteristicFeatureMap
@property (retain) NSNumber *endpoint; // ivar: _endpoint
@property (readonly) NSArray *optionalCharacteristics; // ivar: _optionalCharacteristics
@property (readonly) NSArray *requiredCharacteristics; // ivar: _requiredCharacteristics
@property (readonly) NSString *serviceType; // ivar: _serviceType


-(id)attributeDescriptions;
-(id)initWithType:(id)arg0 endpoint:(id)arg1 ;
-(id)padCharacteristicIDWithZeros:(id)arg0 ;
-(void)addFeatureMapForCharacteristic:(id)arg0 featureMap:(id)arg1 ;
-(void)addMandatoryCharacteristic:(id)arg0 ;
-(void)addOptionalCharacteristic:(id)arg0 ;
-(void)removeCharacteristic:(id)arg0 ;


@end


#endif