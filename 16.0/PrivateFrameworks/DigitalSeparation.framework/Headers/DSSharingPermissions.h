// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSSHARINGPERMISSIONS_H
#define DSSHARINGPERMISSIONS_H

@class NSArray, NSOrderedSet, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DSMe.h"
#import "DSSourceRepository.h"

@interface DSSharingPermissions : NSObject {
    os_unfair_lock_s _permissionsLock;
}


@property (readonly, copy, nonatomic) NSArray *allPeople;
@property (readonly, copy, nonatomic) NSArray *allPublicSharingTypes;
@property (readonly, copy, nonatomic) NSArray *allSharingTypes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataUsageQueue; // ivar: _dataUsageQueue
@property (retain, nonatomic) NSOrderedSet *filteredPeople; // ivar: _filteredPeople
@property (retain, nonatomic) NSOrderedSet *filteredSharingTypes; // ivar: _filteredSharingTypes
@property (retain, nonatomic) DSMe *me; // ivar: _me
@property (retain, nonatomic) NSMutableOrderedSet *people; // ivar: _people
@property (retain, nonatomic) NSMutableOrderedSet *publicSharingTypes; // ivar: _publicSharingTypes
@property (readonly, nonatomic) NSInteger publicSharingTypesCount;
@property (retain, nonatomic) DSSourceRepository *repo; // ivar: _repo
@property (retain, nonatomic) NSMutableOrderedSet *sharingTypes; // ivar: _sharingTypes
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)initialize;
-(NSInteger)peopleCountWithFilter:(BOOL)arg0 ;
-(NSInteger)sharingTypesCountWithFilter:(BOOL)arg0 ;
-(id)init;
-(id)person:(NSInteger)arg0 withFilter:(BOOL)arg1 ;
-(id)publicSharingType:(NSInteger)arg0 ;
-(id)sharingType:(NSInteger)arg0 withFilter:(BOOL)arg1 ;
-(void)_trackResourceForPublicAccess:(id)arg0 source:(id)arg1 ;
-(void)addParticipant:(id)arg0 forSource:(id)arg1 sharedResource:(id)arg2 deviceOwnerRole:(NSInteger)arg3 ;
-(void)fetchPermissionsFromSources:(id)arg0 includingErrors:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)fetchPermissionsOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)filterPeopleWithPredicate:(id)arg0 ;
-(void)filterSharingTypesWithPredicate:(id)arg0 ;
-(void)removePerson:(id)arg0 ;
-(void)removePerson:(id)arg0 sources:(id)arg1 ;
-(void)removePublicSharingType:(id)arg0 ;
-(void)removeSharingType:(id)arg0 ;
-(void)removeSharingType:(id)arg0 people:(id)arg1 ;
-(void)sort;
-(void)stopAllSharingOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)verifyDataUsagePoliciesForSources:(id)arg0 completion:(id)arg1 ;


@end


#endif