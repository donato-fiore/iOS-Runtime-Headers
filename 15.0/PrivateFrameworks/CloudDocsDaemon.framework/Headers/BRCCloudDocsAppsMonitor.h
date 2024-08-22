// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCCLOUDDOCSAPPSMONITOR_H
#define BRCCLOUDDOCSAPPSMONITOR_H

@class NSMutableDictionary, NSMutableSet, br_pacer, NSString;
@protocol BRCAppListMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate>

 {
    NSMutableDictionary *_cloudDocsAppLibrariesByAppID;
    NSMutableDictionary *_appIDsByAppLibraryID;
    NSMutableSet *_observers;
    br_pacer *_refetchPacer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fetchInstalledAppsQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _hasFetchedInitialApps;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cloudDocsAppsMonitor;
-(BOOL)hasFetchedInitialApps;
-(BOOL)isApplicationInstalledForContainerID:(id)arg0 ;
-(id)allApplicationIdentifiers;
-(id)applicationIdentifiersForContainerID:(id)arg0 ;
-(id)containerIDsForApplicationIdentifier:(id)arg0 ;
-(id)init;
-(void)_refetchApps;
-(void)_start;
-(void)addObserver:(id)arg0 ;
-(void)dumpToContext:(id)arg0 ;
-(void)forceRefetchAppList;
-(void)removeObserver:(id)arg0 ;


@end


#endif