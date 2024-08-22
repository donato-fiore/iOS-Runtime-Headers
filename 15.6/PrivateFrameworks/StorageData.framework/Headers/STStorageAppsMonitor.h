// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTORAGEAPPSMONITOR_H
#define STSTORAGEAPPSMONITOR_H

@class NSOperationQueue, NSLock, NSDictionary, NSArray, SUDownload, NSString;
@protocol STMSizeCacheDelegate, LSApplicationWorkspaceObserverProtocol, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "STMSizer.h"
#import "STSizeDict.h"
#import "STUsageBundleRegistry.h"

@interface STStorageAppsMonitor : NSObject <STMSizeCacheDelegate, LSApplicationWorkspaceObserverProtocol>

 {
    NSOperationQueue *_serialQueue;
    NSLock *_appsLock;
    NSDictionary *_appsByID;
    NSDictionary *_childAppsByParentID;
    NSArray *_pkContainers;
    NSDictionary *_sharedContainers;
    Class _sharedContainerClass;
    BOOL _sortNeeded;
}


@property (readonly) NSArray *allApps; // ivar: _allApps
@property (retain) STMSizer *appSizer; // ivar: _appSizer
@property (readonly) NSArray *apps;
@property (readonly) BOOL appsLoaded; // ivar: _appsLoaded
@property (retain) STSizeDict *categorySizes; // ivar: _categorySizes
@property (readonly) BOOL containersSized; // ivar: _containersSized
@property (retain) SUDownload *currentSoftwareUpdate; // ivar: _currentSoftwareUpdate
@property (readonly) NSInteger currentSoftwareUpdateSize; // ivar: _currentSoftwareUpdateSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *demotableApps;
@property (readonly) NSArray *demotedApps;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_semaphore> *loadUsageSemaphore; // ivar: _loadUsageSemaphore
@property (readonly) NSInteger localStorageContainerSize; // ivar: _localStorageContainerSize
@property (readonly) NSInteger pluginkitDataSize; // ivar: _pluginkitDataSize
@property (retain) NSArray *prevApps; // ivar: _prevApps
@property (readonly) Class superclass;
@property (retain) STUsageBundleRegistry *usageBundles; // ivar: _usageBundles


+(id)sharedMonitor;
-(id)appSizesDict;
-(id)appWithIdentifier:(id)arg0 ;
-(id)childAppsForApp:(id)arg0 ;
// -(id)filteredApps:(id)arg0 sortedUsingBlock:(unk)arg1  ;
-(id)init;
-(id)storageInfoDict;
-(id)usageBundleForIdentifier:(id)arg0 ;
-(void)_logAppSizes:(id)arg0 ;
-(void)_updateApps;
-(void)addDeviceInfoToDict:(id)arg0 ;
-(void)addNumber:(NSInteger)arg0 toDict:(id)arg1 forKey:(id)arg2 ;
-(void)addTimestampToDict:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)appsStateChanged:(id)arg0 ;
-(void)dealloc;
-(void)loadApps;
-(void)logAppSizes;
-(void)mediaSizesChanged:(id)arg0 ;
-(void)notifyAppsChanged;
-(void)refreshApps:(id)arg0 ;
-(void)setSortNeeded;
-(void)sizeCacheItemsUpdated:(id)arg0 ;
-(void)startMonitor;
-(void)stopMonitor;
-(void)sync;
-(void)updateApps;


@end


#endif