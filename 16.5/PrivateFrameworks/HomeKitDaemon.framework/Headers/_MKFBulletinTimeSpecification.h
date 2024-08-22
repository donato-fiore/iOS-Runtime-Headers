// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) _MKFTimePeriodBulletinCondition *startCondition;
@property (retain, nonatomic) NSObject<MKFTimePeriodBulletinCondition> *startCondition;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfBulletinTimeSpecification;


@end


#endif