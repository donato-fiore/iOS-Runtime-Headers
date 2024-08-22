// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSAPPLEDOUBLEMANAGER_H
#define LIVEFSAPPLEDOUBLEMANAGER_H

@class NSMutableSet, LiveFSServiceMountPoint<NSFileProviderLiveItemImplementation>;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LiveFSAppleDoubleManager : NSObject {
    NSMutableSet *_ADActiveForBaseHandleSet;
    _opaque_pthread_rwlock_t _ADActiveForBaseHandleSetRWLock;
    _opaque_pthread_mutex_t _ADActiveForBaseHandleSetMutex;
    _opaque_pthread_cond_t _ADActiveForBaseHandleSetCond;
    NSUInteger _ADAcctiveForBaseHandleSetWaiters;
}


@property NSUInteger clientID; // ivar: _clientID
@property (retain) LiveFSServiceMountPoint<NSFileProviderLiveItemImplementation> *mount; // ivar: mount
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: queue


+(id)AppleDoubleManagerForMount:(id)arg0 ;
-(BOOL)enumerateDirectory:(id)arg0 intoArray:(id)arg1 ;
-(BOOL)isDotUnderBarFileName:(id)arg0 ;
-(BOOL)scrubDirectoryNamed:(id)arg0 inDirectory:(id)arg1 forPID:(int)arg2 ;
-(id)AppleDoubleForNamespaceWithBaseFile:(id)arg0 named:(id)arg1 inDirectory:(id)arg2 andPID:(int)arg3 ;
-(id)AppleDoubleForPurpose:(int)arg0 withBaseFile:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 andPID:(int)arg4 ;
-(id)AppleDoubleForReadingWithBaseFile:(id)arg0 named:(id)arg1 inDirectory:(id)arg2 andPID:(int)arg3 ;
-(id)AppleDoubleForWritingWithBaseFile:(id)arg0 named:(id)arg1 inDirectory:(id)arg2 andPID:(int)arg3 ;
-(id)AppleDoubleNameForFileNamed:(id)arg0 ;
-(id)initWithMount:(id)arg0 ;
-(void)acquireForBaseFile:(id)arg0 ;
-(void)dealloc;
-(void)releaseForBaseFile:(id)arg0 ;


@end


#endif