// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPRIVATECHANNELMEMBERSHIPCONTROLLER_H
#define FCPRIVATECHANNELMEMBERSHIPCONTROLLER_H

@class NSDictionary, NSMutableSet, NSString;
@protocol FCAppActivityObserving;


#import "FCPrivateDataController.h"

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving>

 {
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 privateDataDirectory:(id)arg1 ;
+(id)desiredKeys;
+(id)localStoreFilename;
-(BOOL)hasMemberships;
-(BOOL)isAllowedToSeeDraftsForChannelID:(id)arg0 ;
-(BOOL)isMemberOfChannelID:(id)arg0 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)feedDescriptorForDraftFeedForChannel:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)membershipChannelIDs;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)isAllowedToSeeArticleID:(id)arg0 completionBlock:(id)arg1 ;
-(void)isAllowedToSeeIssueID:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)removeObserver:(id)arg0 ;


@end


#endif