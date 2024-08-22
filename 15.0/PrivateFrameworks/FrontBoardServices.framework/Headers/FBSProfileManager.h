// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSPROFILEMANAGER_H
#define FBSPROFILEMANAGER_H

@class NSSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBSProfileManager : NSObject {
    BOOL _started;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_workQueue_managedApplicationBundleIDs;
    NSMutableDictionary *_workQueue_profilesBySignerIdentity;
}


@property (readonly, nonatomic, getter=isStarted) BOOL started;


+(id)sharedInstance;
-(BOOL)isManaged:(id)arg0 ;
-(id)init;
-(id)profilesForSignerIdentity:(id)arg0 ;
-(void)_managedAppsChangedNotification:(id)arg0 ;
-(void)_reloadProfiles;
-(void)_workQueue_reloadManagedApplicationBundleIDs;
-(void)_workQueue_reloadProfiles;
-(void)dealloc;
-(void)startService;


@end


#endif