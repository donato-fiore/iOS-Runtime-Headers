// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGSZONEMANAGER_H
#define HMDCOMPOSITESETTINGSZONEMANAGER_H

@class HMBCloudZone, NAFuture, NSString, HMBLocalZone;
@protocol HMFLogging, HMDDatabaseDelegate, HMDDatabase, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDCompositeSettingsZoneManager : NSObject <HMFLogging, HMDDatabaseDelegate>



@property (retain) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly) NAFuture *configurationFuture; // ivar: _configurationFuture
@property (readonly, getter=isConfigured) BOOL configured;
@property (readonly) BOOL createZoneIfNotExist; // ivar: _createZoneIfNotExist
@property (readonly) NSObject<HMDDatabase> *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, copy) NSString *zoneName; // ivar: _zoneName


+(id)logCategory;
-(id)database:(id)arg0 willRemoveZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(id)initWithDatabase:(id)arg0 workQueue:(id)arg1 zoneName:(id)arg2 createZoneIfNotExists:(BOOL)arg3 ;
-(id)logIdentifier;
-(void)database:(id)arg0 didCreateZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)database:(id)arg0 didReceiveMessageWithUserInfo:(id)arg1 ;
-(void)database:(id)arg0 didRemoveZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)remove;


@end


#endif