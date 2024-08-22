// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFBULLETINREGISTRATION_H
#define _MKFBULLETINREGISTRATION_H

@class MKFModel, NSArray, NSSet, NSString, NSUUID, NSDate;
@protocol MKFBulletinRegistration, MKFBulletinRegistrationPrivateExtensions, MKFHome, MKFUser;


#import "MKFBulletinRegistrationDatabaseID.h"
#import "_MKFUser.h"

@interface _MKFBulletinRegistration : MKFModel <MKFBulletinRegistration, MKFBulletinRegistrationPrivateExtensions>



@property (readonly, retain, nonatomic) NSArray *conditions;
@property (retain, nonatomic) NSSet *conditions_;
@property (readonly, copy, nonatomic) MKFBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKFUser *user;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfBulletinRegistration;
-(id)createConditionsRelationOfType:(id)arg0 modelID:(id)arg1 ;
-(id)createConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg0 ;
-(id)createConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg0 ;
-(id)findConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg0 ;
-(id)findConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg0 ;
-(id)materializeOrCreateConditionsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addConditionsObject:(id)arg0 ;
-(void)removeConditionsObject:(id)arg0 ;


@end


#endif