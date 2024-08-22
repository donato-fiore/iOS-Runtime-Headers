// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMICLEANUPIMPUREHOMEPERSONSOPERATION_H
#define HMICLEANUPIMPUREHOMEPERSONSOPERATION_H

@class HMFOperation, NSArray, NSString, NSUUID, NSDate;
@protocol HMFObject, HMFLogging, HMIHomePersonManagerDataSource;


#import "HMIGreedyClustering.h"
#import "HMIFaceprinter.h"

@interface HMICleanupImpureHomePersonsOperation : HMFOperation <HMFObject, HMFLogging>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) HMIGreedyClustering *clusterer; // ivar: _clusterer
@property (readonly) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceprinter *faceprinter; // ivar: _faceprinter
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID
@property int numFailures; // ivar: _numFailures
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSDate *targetDate; // ivar: _targetDate


+(id)logCategory;
-(BOOL)isAffectedDate:(id)arg0 ;
-(BOOL)isIdentityPureWithFaceprints:(id)arg0 person:(id)arg1 ;
-(id)fetchFaceCropsForPerson:(id)arg0 ;
-(id)fetchOrCreateFaceprintsForCrops:(id)arg0 person:(id)arg1 ;
-(id)fetchPersons;
-(id)ffArchiveRootURLWithError:(*id)arg0 ;
-(id)initWithHomeUUID:(id)arg0 dataSource:(id)arg1 ;
-(void)dumpFFDataToCacheForPerson:(id)arg0 personFaceCrops:(id)arg1 ;
-(void)handleCleanupForPerson:(id)arg0 ;
-(void)main;
-(void)mainInsideAutoreleasePool;
-(void)purgeURLIfNeeded:(id)arg0 ;
-(void)reassociateFaceCropsWithUnknownSource:(id)arg0 toPersonUUID:(id)arg1 ;
-(void)removeFaceCropsWithUUIDs:(id)arg0 ;
-(void)removePerson:(id)arg0 ;


@end


#endif