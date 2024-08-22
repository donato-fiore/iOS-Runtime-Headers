// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFINTEGERCHARACTERISTIC_H
#define _MKFINTEGERCHARACTERISTIC_H

@class MKFCharacteristic, NSData, NSArray, NSString, NSNumber, NSDictionary, NSUUID;
@protocol MKFIntegerCharacteristic, MKFIntegerCharacteristicPrivateExtensions, MKFHome, MKFService;


#import "MKFIntegerCharacteristicDatabaseID.h"
#import "HMDCharacteristicMetadata.h"

@interface _MKFIntegerCharacteristic : MKFCharacteristic <MKFIntegerCharacteristic, MKFIntegerCharacteristicPrivateExtensions>



@property (retain, nonatomic) NSData *authorizationData;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (readonly, copy, nonatomic) MKFIntegerCharacteristicDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *format;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (copy, nonatomic) NSNumber *properties;
@property (readonly, retain, nonatomic) NSObject<MKFService> *service;
@property (copy, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSUUID *type;
@property (copy, nonatomic) NSString *units;
@property (retain, nonatomic) NSArray *validValues;
@property (retain, nonatomic) NSArray *validValues;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfIntegerCharacteristic;
-(void)pr_updateWithHAPMetadata:(id)arg0 ;


@end


#endif