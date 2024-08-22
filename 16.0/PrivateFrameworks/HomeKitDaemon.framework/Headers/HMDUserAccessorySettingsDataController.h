// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSERACCESSORYSETTINGSDATACONTROLLER_H
#define HMDUSERACCESSORYSETTINGSDATACONTROLLER_H

@class NSUUID, NSArray;
@protocol HMDUserAccessorySettingsDataController;

#import <Foundation/Foundation.h>

#import "HMDManagedObjectContext.h"

@interface HMDUserAccessorySettingsDataController : NSObject <HMDUserAccessorySettingsDataController>

 {
    NSUUID *_userModelID;
    HMDManagedObjectContext *_moc;
}


@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly) BOOL assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;


-(id)_updatedAccessorySetFromAccessoryUUIDs:(id)arg0 currentAccessories:(id)arg1 error:(*id)arg2 ;
-(id)initWithUserModelID:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg0 activityNotificationsEnabledForPersonalRequests:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovedAccessoryWithModelID:(id)arg0 ;
-(void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif