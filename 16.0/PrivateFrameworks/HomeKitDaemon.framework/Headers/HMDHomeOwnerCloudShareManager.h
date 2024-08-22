// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_createShareForHome:(id)arg0 ;
-(id)_existingShareForHomeWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)_shareForHome:(id)arg0 ;
-(id)acceptShareInvitation:(id)arg0 ;
-(id)auditAccessForUsers:(id)arg0 home:(id)arg1 ;
-(id)grantAccessForUser:(id)arg0 home:(id)arg1 ;
-(id)initWithContainer:(id)arg0 sharedStore:(id)arg1 privateStore:(id)arg2 moc:(id)arg3 cloudTransform:(id)arg4 homeManager:(id)arg5 ;
-(id)removeShareForHome:(id)arg0 ;
-(void)didDeleteModelWithID:(id)arg0 tombstone:(id)arg1 context:(id)arg2 ;
-(void)revokeAccessForUser:(id)arg0 home:(id)arg1 ;


@end


#endif