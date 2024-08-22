// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTSYNCMANAGER_H
#define HMDRESIDENTSYNCMANAGER_H

@class NSString;
@protocol HMFLogging, HMDResidentSyncClient, HMDResidentSyncServer;

#import <Foundation/Foundation.h>

#import "HMDHome.h"
#import "HMDResidentSyncClient.h"
#import "HMDResidentSyncServer.h"

@interface HMDResidentSyncManager : NSObject <HMFLogging, HMDResidentSyncClient, HMDResidentSyncServer>

 {
    HMDHome *_home;
    HMDResidentSyncClient *_client;
    HMDResidentSyncServer *_server;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHome:(id)arg0 notificationCenter:(id)arg1 persistence:(id)arg2 logEventSubmitter:(id)arg3 ;
-(id)initWithHome:(id)arg0 notificationCenter:(id)arg1 persistence:(id)arg2 logEventSubmitter:(id)arg3 isResidentCapable:(BOOL)arg4 clientDataSource:(id)arg5 ;
-(id)logIdentifier;
-(void)interceptRemoteResidentRequest:(id)arg0 proceed:(id)arg1 ;
-(void)performResidentRequest:(id)arg0 options:(NSUInteger)arg1 ;
-(void)performSync;
-(void)start;
-(void)stop;


@end


#endif