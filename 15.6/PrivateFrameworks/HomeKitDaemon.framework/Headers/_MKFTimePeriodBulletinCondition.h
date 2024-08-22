// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFTIMEPERIODBULLETINCONDITION_H
#define _MKFTIMEPERIODBULLETINCONDITION_H

@class MKFBulletinCondition, NSString, NSUUID, NSDate;
@protocol MKFTimePeriodBulletinCondition, MKFTimePeriodBulletinConditionPrivateExtensions, MKFBulletinRegistration, MKFBulletinTimeSpecification;


#import "MKFTimePeriodBulletinConditionDatabaseID.h"
#import "_MKFBulletinTimeSpecification.h"

@interface _MKFTimePeriodBulletinCondition : MKFBulletinCondition <MKFTimePeriodBulletinCondition, MKFTimePeriodBulletinConditionPrivateExtensions>



@property (readonly, retain, nonatomic) NSObject<MKFBulletinRegistration> *bulletinRegistration;
@property (readonly, copy, nonatomic) MKFTimePeriodBulletinConditionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFBulletinTimeSpecification *endElement;
@property (retain, nonatomic) NSObject<MKFBulletinTimeSpecification> *endElement;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) _MKFBulletinTimeSpecification *startElement;
@property (retain, nonatomic) NSObject<MKFBulletinTimeSpecification> *startElement;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfTimePeriodBulletinCondition;
-(id)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg0 ;
-(id)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg0 ;
-(id)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg0 ;
-(id)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg0 ;
-(id)materializeOrCreateEndElementRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateStartElementRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addEndElementObject:(id)arg0 ;
-(void)addStartElementObject:(id)arg0 ;
-(void)removeEndElementObject:(id)arg0 ;
-(void)removeStartElementObject:(id)arg0 ;


@end


#endif