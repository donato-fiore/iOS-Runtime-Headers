// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAGROUPSSTAGEMANAGER_H
#define HMDMEDIAGROUPSSTAGEMANAGER_H

@class NSString, NSUUID, HMFStagedValue, NSUserDefaults;
@protocol HMFStagedValueDelegate, HMDMediaGroupsStageManagerDelegate;

#import <Foundation/Foundation.h>

#import "HMDMediaGroupsAggregateData.h"

@interface HMDMediaGroupsStageManager : NSObject <HMFStagedValueDelegate>



@property (readonly, copy) HMDMediaGroupsAggregateData *aggregateData;
@property (retain) HMDMediaGroupsAggregateData *committedAggregateData; // ivar: _committedAggregateData
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaGroupsStageManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (copy) HMDMediaGroupsAggregateData *lastNotifiedAggregateData; // ivar: _lastNotifiedAggregateData
@property (readonly) HMFStagedValue *stagedAggregateData; // ivar: _stagedAggregateData
@property (readonly) Class superclass;
@property (readonly) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(BOOL)hasSavedIdentifier;
-(id)initWithIdentifier:(id)arg0 userDefaults:(id)arg1 ;
-(id)savedAggregateData;
-(id)transformedDestinationForLegacyMediaSystem:(id)arg0 role:(NSUInteger)arg1 ;
-(void)clearSavedData;
-(void)commitAggregateData:(id)arg0 ;
-(void)configure;
-(void)notifyOfUpdatedAggregateData;
-(void)refreshManager;
-(void)saveAggregateData:(id)arg0 ;
-(void)saveAssociatedGroupDataForCurrentLegacyAppleTVAccessory:(id)arg0 ;
-(void)saveAssociatedGroupDataForCurrentLegacyHomePodAccessory:(id)arg0 ;
-(void)saveAssociatedGroupDataForLegacyCurrentAccessory:(id)arg0 ;
-(void)saveDataForLegacyMediaSystem:(id)arg0 ;
-(void)saveDestinationControllerData:(id)arg0 ;
-(void)saveDestinations:(id)arg0 ;
-(void)saveGroup:(id)arg0 ;
-(void)saveIdentifier;
-(void)stagedValue:(id)arg0 didExpireValue:(id)arg1 ;


@end


#endif