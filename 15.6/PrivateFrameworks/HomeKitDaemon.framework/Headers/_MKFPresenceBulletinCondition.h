// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFPRESENCEBULLETINCONDITION_H
#define _MKFPRESENCEBULLETINCONDITION_H

@class MKFBulletinCondition, NSString, NSUUID, NSNumber, NSArray, NSSet, NSDate;
@protocol MKFPresenceBulletinCondition, MKFPresenceBulletinConditionPrivateExtensions, MKFBulletinRegistration;


#import "MKFPresenceBulletinConditionDatabaseID.h"

@interface _MKFPresenceBulletinCondition : MKFBulletinCondition <MKFPresenceBulletinCondition, MKFPresenceBulletinConditionPrivateExtensions>



@property (readonly, retain, nonatomic) NSObject<MKFBulletinRegistration> *bulletinRegistration;
@property (readonly, copy, nonatomic) MKFPresenceBulletinConditionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *presenceEventType;
@property (copy, nonatomic) NSNumber *presenceEventType;
@property (copy, nonatomic) NSNumber *presenceEventUserType;
@property (copy, nonatomic) NSNumber *presenceEventUserType;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSSet *users_;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfPresenceBulletinCondition;
-(id)findUsersRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateUsersRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addUsersObject:(id)arg0 ;
-(void)removeUsersObject:(id)arg0 ;


@end


#endif