// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFTIMEOFDAYTIMESPECIFICATION_H
#define _MKFTIMEOFDAYTIMESPECIFICATION_H

@class MKFBulletinTimeSpecification, NSString, NSNumber, NSUUID, NSDate;
@protocol MKFTimeOfDayTimeSpecification, MKFTimeOfDayTimeSpecificationPrivateExtensions, MKFTimePeriodBulletinCondition;


#import "MKFTimeOfDayTimeSpecificationDatabaseID.h"

@interface _MKFTimeOfDayTimeSpecification : MKFBulletinTimeSpecification <MKFTimeOfDayTimeSpecification, MKFTimeOfDayTimeSpecificationPrivateExtensions>



@property (readonly, copy, nonatomic) MKFTimeOfDayTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MKFTimePeriodBulletinCondition> *endCondition;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSNumber *minute;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSObject<MKFTimePeriodBulletinCondition> *startCondition;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfTimeOfDayTimeSpecification;


@end


#endif