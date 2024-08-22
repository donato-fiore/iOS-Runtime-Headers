// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHARACTERISTICREQUEST_H
#define HMDCHARACTERISTICREQUEST_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDHAPAccessory.h"
#import "HMDCharacteristic.h"
#import "HMDService.h"

@interface HMDCharacteristicRequest : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMDHAPAccessory *accessory;
@property (readonly, nonatomic) HMDCharacteristic *characteristic; // ivar: _characteristic
@property (nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *previousValue; // ivar: _previousValue
@property (readonly, nonatomic) HMDService *service;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)requestWithCharacteristic:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCharacteristic:(id)arg0 ;


@end


#endif