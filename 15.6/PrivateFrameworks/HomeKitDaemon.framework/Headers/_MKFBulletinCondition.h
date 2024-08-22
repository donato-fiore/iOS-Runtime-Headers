// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFBULLETINCONDITION_H
#define _MKFBULLETINCONDITION_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol MKFBulletinCondition, MKFBulletinConditionPrivateExtensions, MKFBulletinRegistration;


#import "_MKFBulletinRegistration.h"
#import "MKFBulletinConditionDatabaseID.h"

@interface _MKFBulletinCondition : MKFModel <MKFBulletinCondition, MKFBulletinConditionPrivateExtensions>



@property (retain, nonatomic) _MKFBulletinRegistration *bulletinRegistration;
@property (readonly, retain, nonatomic) NSObject<MKFBulletinRegistration> *bulletinRegistration;
@property (readonly, copy, nonatomic) MKFBulletinConditionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfBulletinCondition;
-(id)findBulletinRegistrationRelationOfTypeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)arg0 ;
-(id)materializeOrCreateBulletinRegistrationRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateBulletinRegistrationRelationOfTypeBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addBulletinRegistrationObject:(id)arg0 ;
-(void)removeBulletinRegistrationObject:(id)arg0 ;


@end


#endif