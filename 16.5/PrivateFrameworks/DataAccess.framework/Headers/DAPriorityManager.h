// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAPRIORITYMANAGER_H
#define DAPRIORITYMANAGER_H

@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

#import <Foundation/Foundation.h>


@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedAppState; // ivar: _cachedAppState
@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests; // ivar: _clientsToPriorityRequests
@property (readonly, nonatomic) int currentPriority; // ivar: _currentPriority
@property (nonatomic) NSInteger foregroundDataclasses; // ivar: _foregroundDataclasses
@property (retain, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor


+(id)sharedManager;
+(void)vendPriorityManagers;
-(id)appIDsToDataclasses;
-(id)init;
-(id)stateString;
-(int)_recalculatePriority;
-(void)_setNewPriority;
-(void)_updateForegroundDataclasses;
-(void)appWithBundleID:(id)arg0 isNowRunningAndVisible:(BOOL)arg1 ;
-(void)bumpDataclassesToUIPriority:(NSInteger)arg0 ;
-(void)dealloc;
-(void)requestPriority:(int)arg0 forClient:(id)arg1 dataclasses:(NSInteger)arg2 ;
-(void)setupProcessStateMonitor;


@end


#endif