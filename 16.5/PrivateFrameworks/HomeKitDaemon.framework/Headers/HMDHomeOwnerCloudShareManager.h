// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEOWNERCLOUDSHAREMANAGER_H
#define HMDHOMEOWNERCLOUDSHAREMANAGER_H

@class NSString;
@protocol HMDCoreDataCloudChangeListener, HMFLogging;

#import <Foundation/Foundation.h>

#import "HMDCoreDataCloudShareService.h"
#import "HMDCoreDataCloudTransform.h"
#import "HMDHomeManager.h"

@interface HMDHomeOwnerCloudShareManager : NSObject <HMDCoreDataCloudChangeListener, HMFLogging>

 {
    HMDCoreDataCloudShareService *_shareService;
    HMDCoreDataCloudTransform *_cloudTransform;
    HMDHomeManager *_homeManager;
    id *_modelSelectionBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_allExistingSharesForHomeWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)_canonicalShareFromSharesToSharedHomes:(id)arg0 shareMap:(id)arg1 ;
-(id)_createShareForHome:(id)arg0 ;
-(id)_existingShareForHomeWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)_existingSharedHomesWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)_removeShare:(id)arg0 usingShareService:(id)arg1 forHomeWithUUID:(id)arg2 ;
-(id)_shareForHome:(id)arg0 ;
-(id)acceptShareInvitation:(id)arg0 ;
-(id)auditAccessForUsers:(id)arg0 home:(id)arg1 ;
-(id)grantAccessForUser:(id)arg0 home:(id)arg1 ;
-(id)initWithContainer:(id)arg0 sharedStore:(id)arg1 privateStore:(id)arg2 moc:(id)arg3 cloudTransform:(id)arg4 homeManager:(id)arg5 ;
-(id)initWithShareService:(id)arg0 homeManager:(id)arg1 cloudTransform:(id)arg2 modelSelectionBlock:(id)arg3 ;
-(id)removeSharesForHome:(id)arg0 ;
-(id)revokeAccessForUser:(id)arg0 home:(id)arg1 ;
-(void)_deleteSharedHome:(id)arg0 ;
-(void)didDeleteModelWithID:(id)arg0 tombstone:(id)arg1 context:(id)arg2 ;


@end


#endif