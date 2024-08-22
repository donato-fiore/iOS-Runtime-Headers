// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWUSAGEMONITOR_H
#define NWUSAGEMONITOR_H

@class NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NWEntityMapperCoalitionWatcher.h"
#import "NWEntityMapperStaticAssignment.h"
#import "NWEntityMapperNEHelper.h"
#import "NWEntityMapperDynamicLaunchServices.h"
#import "NWEntityMapperProcessWatcher.h"
#import "NWAppEventListener.h"
#import "AppStateHandler.h"

@interface NWUsageMonitor : NSObject {
    NWEntityMapperCoalitionWatcher *_coalitionUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentSymptomsUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentCommCenterUUIDMapper;
    NWEntityMapperNEHelper *_neHelperUUIDMapper;
    NWEntityMapperDynamicLaunchServices *_dynamicLaunchServicesUUIDMapper;
    NWEntityMapperProcessWatcher *_processWatcherUUIDMapper;
    BOOL _useSymptomsMapping;
    BOOL _useNEHelper;
    BOOL _useDynamicLaunchServices;
    BOOL _useCoalitionIDs;
    BOOL _useProcessNames;
    NSSet *_useNEHelperSet;
    NSSet *_appendProcNameSet;
    NSSet *_knownDaemonSet;
    NSMutableDictionary *_reportedLookupFailures;
    NWAppEventListener *_appEventListener;
    AppStateHandler *_appStateHandler;
}


@property (readonly) BOOL debugMode; // ivar: _debugMode
@property (readonly) BOOL hasAnyForegroundApp;


+(id)getAppsWithStates;
+(void)initialize;
-(id)allIdentifiersForUUID:(id)arg0 EUUID:(id)arg1 pid:(int)arg2 epid:(int)arg3 procname:(char *)arg4 ;
-(id)bestIdentifierForUUID:(id)arg0 EUUID:(id)arg1 pid:(int)arg2 epid:(int)arg3 procname:(char *)arg4 derivation:(*int)arg5 ;
-(id)foregroundAppKeys;
-(id)identifierForUUID:(id)arg0 derivation:(*int)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(id)processNameForUUID:(id)arg0 ;
-(id)processNameForUUIDString:(id)arg0 ;
-(id)stateDictionary;
-(unsigned int)currentStateForProcessWithPid:(int)arg0 ;
-(void)configure:(id)arg0 ;
-(void)invalidate;
-(void)noteFailedLookupFor:(id)arg0 processName:(char *)arg1 pid:(int)arg2 ;
-(void)noteUUID:(id)arg0 forPid:(int)arg1 procname:(*char)arg2 ;


@end


#endif