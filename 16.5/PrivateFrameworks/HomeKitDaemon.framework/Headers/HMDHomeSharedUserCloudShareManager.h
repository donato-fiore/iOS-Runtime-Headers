// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMESHAREDUSERCLOUDSHAREMANAGER_H
#define HMDHOMESHAREDUSERCLOUDSHAREMANAGER_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "HMDCoreDataCloudShareService.h"

@interface HMDHomeSharedUserCloudShareManager : NSObject <HMFLogging>

 {
    HMDCoreDataCloudShareService *_shareService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_onlyShareOwnerInShare:(id)arg0 ;
-(id)_createShareForSharedUserDataWithHomeModelID:(id)arg0 ;
-(id)_existingShareForSharedUserDataWithHomeModelID:(id)arg0 error:(*id)arg1 ;
-(id)_existingSharesForSharedUserDataWithHomeModelID:(id)arg0 error:(*id)arg1 ;
-(id)_shareForSharedUserDataWithHomeModelID:(id)arg0 ;
-(id)acceptShareInvitation:(id)arg0 ;
-(id)grantAccessForOwner:(id)arg0 sharedUserDataWithHomeModelID:(id)arg1 ;
-(id)initWithCloudShareService:(id)arg0 ;
-(id)initWithContainer:(id)arg0 sharedStore:(id)arg1 privateStore:(id)arg2 moc:(id)arg3 ;
-(void)_deleteDanglingShare:(id)arg0 homeModelID:(id)arg1 ;
-(void)_removeSharedUserDataRootsForHomeWithModelID:(id)arg0 ;
-(void)leaveShareWithSharedHomeModelID:(id)arg0 ;
-(void)removeShareForSharedUserDataWithHomeModelID:(id)arg0 ;
-(void)removeSharesWithNoParticipantForHomeWithModelID:(id)arg0 ;
-(void)revokeAccessForOwner:(id)arg0 sharedUserDataWithHomeModelID:(id)arg1 ;


@end


#endif