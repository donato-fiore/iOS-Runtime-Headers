// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXSESSIONMANAGERSIDEKICK_H
#define MXSESSIONMANAGERSIDEKICK_H

@class NSPointerArray, NSMapTable, NSRecursiveLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MXSessionManagerSidekick : NSObject {
    NSPointerArray *mCoreSessionList;
}


@property (readonly, nonatomic) NSMapTable *coreSessionIDToMXSessionList; // ivar: _coreSessionIDToMXSessionList
@property (readonly, nonatomic) NSRecursiveLock *recursiveLock; // ivar: _recursiveLock
@property (readonly, nonatomic) NSMapTable *remoteDeviceIDToCoreSessionIDList; // ivar: _remoteDeviceIDToCoreSessionIDList
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(id)sharedInstance;
-(BOOL)isSomeOtherSessionPlaying:(id)arg0 ;
-(id)copyMXCoreSessionForAudioSessionID:(unsigned int)arg0 ;
-(id)copyMXSessionList:(id)arg0 ;
-(id)init;
-(int)postInterruptionEndedNotificationForAudioSessionID:(unsigned int)arg0 resumable:(BOOL)arg1 ;
-(void)dealloc;
-(void)dumpCoreSessionList;
-(void)dumpVersionNumbersFromSidekickSessionBehavioursPlist;
-(void)registerMXCoreSessionSidekick:(id)arg0 ;
-(void)unregisterMXCoreSessionSidekick:(id)arg0 ;


@end


#endif