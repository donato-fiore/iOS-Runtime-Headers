// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFSTRINGCHARACTERISTIC_H
#define _MKFSTRINGCHARACTERISTIC_H

@class MKFCharacteristic, NSData, NSArray, NSString, NSNumber, NSDictionary, NSUUID;
@protocol MKFStringCharacteristic, MKFStringCharacteristicPrivateExtensions, MKFHome, MKFService;


#import "MKFStringCharacteristicDatabaseID.h"
#import "HMDCharacteristicMetadata.h"

@interface _MKFStringCharacteristic : MKFCharacteristic <MKFStringCharacteristic, MKFStringCharacteristicPrivateExtensions>



@property (retain, nonatomic) NSData *authorizationData;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (readonly, copy, nonatomic) MKFStringCharacteristicDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *format;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (copy, nonatomic) NSNumber *maximumLength;
@property (copy, nonatomic) NSNumber *maximumLength;
@property (readonly, retain, nonatomic) NSArray *notificationRegistrations;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (copy, nonatomic) NSNumber *properties;
@property (readonly, retain, nonatomic) NSObject<MKFService> *service;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSUUID *type;
@property (copy, nonatomic) NSString *units;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfStringCharacteristic;
-(void)pr_updateWithHAPMetadata:(id)arg0 ;


@end


#endif