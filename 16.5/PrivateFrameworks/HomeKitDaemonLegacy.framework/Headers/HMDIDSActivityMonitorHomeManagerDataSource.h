// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDIDSACTIVITYMONITORHOMEMANAGERDATASOURCE_H
#define HMDIDSACTIVITYMONITORHOMEMANAGERDATASOURCE_H

@class NSString;
@protocol HMFLogging, HMDIDSActivityMonitorDataSource, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HMDHomeManager.h"

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)homeHasCamera:(id)arg0 ;
-(id)currentDevice;
-(id)initWithHomeManager:(id)arg0 ;
-(void)handleDeviceAdded:(id)arg0 ;
-(void)handleDeviceRemoved:(id)arg0 ;
-(void)handleRegistrationUpdated:(id)arg0 ;
-(void)pushTokensForDevicesObservingSubjectDevice:(id)arg0 subActivity:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)start;
-(void)startObservingDevice:(id)arg0 subActivity:(id)arg1 ;
-(void)startWithNotificationCenter:(id)arg0 ;
-(void)stopObservingDevice:(id)arg0 subActivity:(id)arg1 ;


@end


#endif