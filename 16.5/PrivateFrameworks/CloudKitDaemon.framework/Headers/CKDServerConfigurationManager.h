// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDSERVERCONFIGURATIONMANAGER_H
#define CKDSERVERCONFIGURATIONMANAGER_H

@class NSOperationQueue, NSMutableDictionary, NSString, NSMutableSet;
@protocol CKDSystemAvailabilityWatcher, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDServerConfiguration.h"

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>



@property (readonly, nonatomic) NSOperationQueue *configurationQueue; // ivar: _configurationQueue
@property (readonly, nonatomic) NSMutableDictionary *containerSpecificInfoOperations; // ivar: _containerSpecificInfoOperations
@property (readonly, nonatomic) NSOperationQueue *containerSpecificInfoQueue; // ivar: _containerSpecificInfoQueue
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfos; // ivar: _containerSpecificInfos
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKDServerConfiguration *globalConfiguration; // ivar: _globalConfiguration
@property (readonly, nonatomic) NSMutableSet *globalConfigurationOps; // ivar: _globalConfigurationOps
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int iCloudEnvNotifToken; // ivar: _iCloudEnvNotifToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // ivar: _propertyQueue
@property BOOL shouldDropAllConfigurations; // ivar: _shouldDropAllConfigurations
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)systemAvailabilityChanged:(NSUInteger)arg0 ;
-(id)CKStatusReportArray;
-(id)_uniqueStringForContainer:(id)arg0 ;
-(id)init;
-(id)lastKnownServerConfiguration;
-(void)_fetchContainerSpecificInfoForOperation:(id)arg0 requireUserIDs:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_fetchGlobalConfigForOperation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_reallyDropAllConfigurations;
-(void)_writeOutiCloudAppSiteAssociationData:(id)arg0 ;
-(void)configurationForOperation:(id)arg0 completionHandler:(id)arg1 ;
-(void)containerServerInfoForOperation:(id)arg0 requireUserIDs:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)expireConfigurationForContainer:(id)arg0 ;
-(void)expireGlobalConfiguration;
-(void)wipeAllConfigurations;


@end


#endif