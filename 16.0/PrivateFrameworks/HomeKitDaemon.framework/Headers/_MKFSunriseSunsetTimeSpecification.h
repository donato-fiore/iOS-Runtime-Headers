// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFSUNRISESUNSETTIMESPECIFICATION_H
#define _MKFSUNRISESUNSETTIMESPECIFICATION_H

@class MKFBulletinTimeSpecification, NSString, NSUUID, NSDateComponents, NSNumber, NSDate;
@protocol MKFSunriseSunsetTimeSpecification, MKFSunriseSunsetTimeSpecificationPrivateExtensions, MKFTimePeriodBulletinCondition;


#import "MKFSunriseSunsetTimeSpecificationDatabaseID.h"

@interface _MKFSunriseSunsetTimeSpecification : MKFBulletinTimeSpecification <MKFSunriseSunsetTimeSpecification, MKFSunriseSunsetTimeSpecificationPrivateExtensions>



@property (readonly, copy, nonatomic) MKFSunriseSunsetTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MKFTimePeriodBulletinCondition> *endCondition;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSObject<MKFTimePeriodBulletinCondition> *startCondition;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfSunriseSunsetTimeSpecification;


@end


#endif