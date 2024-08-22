// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPAPPREGISTRY_H
#define FPAPPREGISTRY_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue, FPAppRegistryDelegate;

#import <Foundation/Foundation.h>


@interface FPAppRegistry : NSObject {
    NSMutableDictionary *_appMetadataByBundleID;
    NSMutableDictionary *_appMetadataByDisplayName;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _updateAppsNotification;
}


@property (weak, nonatomic) NSObject<FPAppRegistryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *listOfMonitoredApps;


+(BOOL)keepInSync;
+(id)daemonConnectionOverride;
+(id)sharedRegistry;
+(void)setDaemonConnectionOverride:(id)arg0 ;
+(void)setSharedRegistry:(id)arg0 ;
-(BOOL)_isAppLibrary:(id)arg0 appMetadata:(*id)arg1 userVisible:(*BOOL)arg2 ;
-(BOOL)isAppLibrary:(id)arg0 ;
-(id)_bundleIDForHomonymOfApp:(id)arg0 ;
-(id)appForBundleID:(id)arg0 ;
-(id)appForDisplayName:(id)arg0 ;
-(id)init;
-(id)promoteItemToAppLibraryIfNeeded:(id)arg0 ;
-(int)_registerForNotification:(id)arg0 handler:(id)arg1 ;
-(void)_addApps:(id)arg0 ;
-(void)_removeAppsWithBundleIDs:(id)arg0 ;
-(void)_setApps:(id)arg0 ;
-(void)addApps:(id)arg0 ;
-(void)dealloc;
-(void)removeAppsWithBundleIDs:(id)arg0 ;
-(void)updateAppList;


@end


#endif