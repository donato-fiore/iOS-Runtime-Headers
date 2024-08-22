// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPSTATEHANDLER_H
#define APPSTATEHANDLER_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol NWAppStateEventListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NWEntityMapper.h"

@interface AppStateHandler : NSObject <NWAppStateEventListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appPidState;
    NSMutableDictionary *_appBundlesMonitored;
    NSMutableDictionary *_appsWithStates;
    NSMutableSet *_foregroundApps;
    NWEntityMapper *_entityMapper;
    BOOL _hasAnyForegroundApp;
    BOOL _handlesRnf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)getAppsWithStates;
-(BOOL)_trackerSetHasForeground:(id)arg0 ;
-(BOOL)hasAnyForegroundApp;
-(id)_getAppsWithStates;
-(id)foregroundAppKeys;
-(id)initWithMapper:(id)arg0 ;
-(unsigned int)currentStateForProcessWithPid:(int)arg0 ;
-(void)_removeStateTracker:(id)arg0 hadForeground:(*BOOL)arg1 hasForeground:(*BOOL)arg2 ;
-(void)configure:(id)arg0 ;
-(void)handleApplicationStateChangeForDisplayName:(id)arg0 UUID:(id)arg1 pid:(int)arg2 state:(unsigned int)arg3 ;
-(void)purgeInvalidPidState;


@end


#endif