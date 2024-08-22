// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFBULLETINREGISTRATION_H
#define _MKFBULLETINREGISTRATION_H

@class MKFModel, NSArray, NSSet, NSString, NSUUID, NSDate;
@protocol MKFBulletinRegistration, MKFBulletinRegistrationPrivateExtensions, MKFDevice;


#import "MKFBulletinRegistrationDatabaseID.h"
#import "_MKFDevice.h"

@interface _MKFBulletinRegistration : MKFModel <MKFBulletinRegistration, MKFBulletinRegistrationPrivateExtensions>



@property (readonly, retain, nonatomic) NSArray *conditions;
@property (retain, nonatomic) NSSet *conditions_;
@property (readonly, copy, nonatomic) MKFBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFDevice *device;
@property (readonly, retain, nonatomic) NSObject<MKFDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfBulletinRegistration;
-(id)findConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg0 ;
-(id)findConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg0 ;
-(id)findDeviceRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateConditionsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateDeviceRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addConditionsObject:(id)arg0 ;
-(void)addDeviceObject:(id)arg0 ;
-(void)removeConditionsObject:(id)arg0 ;
-(void)removeDeviceObject:(id)arg0 ;


@end


#endif