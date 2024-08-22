// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSERVICEFACILITYSERVER_H
#define FBSERVICEFACILITYSERVER_H

@class BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSString, BSServiceDomainSpecification;
@protocol BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging;

#import <Foundation/Foundation.h>


@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging>

 {
    os_unfair_lock_s _lock;
    BSServiceConnectionListener *_serviceListener;
    NSMutableDictionary *_lock_facilitiesByIdentifier;
    NSMutableSet *_lock_completedMilestones;
    NSMutableDictionary *_lock_suspendedFacilitiesByIdentifier;
    NSMutableSet *_lock_pendingConnects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) BSServiceDomainSpecification *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)sharedInstanceDomain;
-(BOOL)_lock_areFacilityPrerequisitesSatisfied:(id)arg0 ;
-(id)_initWithDomain:(id)arg0 ;
-(id)init;
-(void)_facilityQueue_facility:(id)arg0 handleMessage:(id)arg1 client:(id)arg2 ;
-(void)_lock_evaluateSuspendedFacility:(id)arg0 ;
-(void)addFacility:(id)arg0 ;
-(void)dealloc;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)noteMilestoneReached:(id)arg0 ;
-(void)removeFacility:(id)arg0 ;
-(void)run;


@end


#endif