// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFCHARACTERISTIC_H
#define _MKFCHARACTERISTIC_H

@class MKFObject, NSData, NSArray, NSSet, NSString, NSNumber, NSDictionary, NSUUID;
@protocol MKFCharacteristic, MKFCharacteristicPrivateExtensions, MKFHome, MKFService;


#import "MKFCharacteristicDatabaseID.h"
#import "HMDCharacteristicMetadata.h"
#import "_MKFService.h"

@interface _MKFCharacteristic : MKFObject <MKFCharacteristic, MKFCharacteristicPrivateExtensions>



@property (retain, nonatomic) NSData *authorizationData;
@property (retain, nonatomic) NSData *authorizationData;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (retain, nonatomic) NSSet *bulletinRegistrations_;
@property (readonly, copy, nonatomic) MKFCharacteristicDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *format;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSNumber *instanceID;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (readonly, retain, nonatomic) NSArray *notificationRegistrations;
@property (retain, nonatomic) NSSet *notificationRegistrations_;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSNumber *properties;
@property (retain, nonatomic) _MKFService *service;
@property (readonly, retain, nonatomic) NSObject<MKFService> *service;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSUUID *type;
@property (copy, nonatomic) NSUUID *type;
@property (copy, nonatomic) NSString *units;
@property (copy, nonatomic) NSString *units;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfCharacteristic;
-(void)pr_updateWithDictionary:(id)arg0 ;
-(void)pr_updateWithHAPMetadata:(id)arg0 ;


@end


#endif