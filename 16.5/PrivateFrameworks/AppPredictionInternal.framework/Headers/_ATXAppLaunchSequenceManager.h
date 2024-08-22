// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXAPPLAUNCHSEQUENCEMANAGER_H
#define _ATXAPPLAUNCHSEQUENCEMANAGER_H

@class NSMapTable, NSString, NSDate;
@protocol ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "_ATXInternalUninstallNotification.h"

@interface _ATXAppLaunchSequenceManager : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol>

 {
    _ATXDataStore *_datastore;
    NSMapTable *_appLaunchSequence;
    NSMapTable *_appActionLaunchSequence;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSString *_lastAppActionLaunch;
    NSDate *_lastAppActionLaunchDate;
}




+(id)sharedInstance;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)initWithInMemoryStore;
-(id)launchSequence;
-(id)launchSequenceForAppAction:(id)arg0 ;
-(id)launchSequenceForBundle:(id)arg0 ;
-(id)syncQueue;
-(void)addBundleIdToLaunchSequence:(id)arg0 date:(id)arg1 ;
-(void)decayAllAppActionLaunchSequencesWithHalfLifeInDays:(CGFloat)arg0 ;
-(void)decayAllLaunchSequencesWithHalfLifeInDays:(CGFloat)arg0 ;
-(void)deleteAllLaunchesForAppActions:(id)arg0 ;
-(void)deleteAllLaunchesForBundles:(id)arg0 ;
-(void)removeActionKeys:(id)arg0 ;
-(void)removeBundleIds:(id)arg0 ;


@end


#endif