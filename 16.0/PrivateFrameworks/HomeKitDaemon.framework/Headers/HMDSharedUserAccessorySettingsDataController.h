// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSHAREDUSERACCESSORYSETTINGSDATACONTROLLER_H
#define HMDSHAREDUSERACCESSORYSETTINGSDATACONTROLLER_H

@class NSUUID, NSPersistentStore, NSArray;
@protocol HMDUserAccessorySettingsDataController;

#import <Foundation/Foundation.h>

#import "HMDManagedObjectContext.h"

@interface HMDSharedUserAccessorySettingsDataController : NSObject <HMDUserAccessorySettingsDataController>

 {
    NSUUID *_userModelID;
    NSUUID *_homeModelID;
    NSPersistentStore *_privateStore;
    HMDManagedObjectContext *_moc;
}


@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly) BOOL assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;


-(id)_fetchDataRootWithError:(*id)arg0 ;
-(id)initWithUserModelID:(id)arg0 homeModelID:(id)arg1 privateStore:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_addMissingAccessorySettingsFromAccessoryModelIDs:(id)arg0 dataRoot:(id)arg1 ;
-(void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg0 activityNotificationsEnabledForPersonalRequests:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovedAccessoryWithModelID:(id)arg0 ;
-(void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif