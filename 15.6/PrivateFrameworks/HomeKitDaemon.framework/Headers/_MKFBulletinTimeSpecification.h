// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFBULLETINTIMESPECIFICATION_H
#define _MKFBULLETINTIMESPECIFICATION_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol MKFBulletinTimeSpecification, MKFBulletinTimeSpecificationPrivateExtensions, MKFTimePeriodBulletinCondition;


#import "MKFBulletinTimeSpecificationDatabaseID.h"
#import "_MKFTimePeriodBulletinCondition.h"

@interface _MKFBulletinTimeSpecification : MKFModel <MKFBulletinTimeSpecification, MKFBulletinTimeSpecificationPrivateExtensions>



@property (readonly, copy, nonatomic) MKFBulletinTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFTimePeriodBulletinCondition *endCondition;
@property (retain, nonatomic) NSObject<MKFTimePeriodBulletinCondition> *endCondition;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) _MKFTimePeriodBulletinCondition *startCondition;
@property (retain, nonatomic) NSObject<MKFTimePeriodBulletinCondition> *startCondition;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfBulletinTimeSpecification;
-(id)findEndConditionRelationWithModelID:(id)arg0 ;
-(id)findStartConditionRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateEndConditionRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateStartConditionRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addEndConditionObject:(id)arg0 ;
-(void)addStartConditionObject:(id)arg0 ;
-(void)removeEndConditionObject:(id)arg0 ;
-(void)removeStartConditionObject:(id)arg0 ;


@end


#endif