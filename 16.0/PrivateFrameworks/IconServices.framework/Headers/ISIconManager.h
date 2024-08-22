// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISICONMANAGER_H
#define ISICONMANAGER_H

@class NSXPCConnection, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ISIconCache.h"

@interface ISIconManager : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (retain) ISIconCache *iconCache; // ivar: _iconCache
@property (retain) NSHashTable *iconRegistry; // ivar: _iconRegistry
@property (retain) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain) NSHashTable *observers; // ivar: _observers


+(id)serviceName;
+(id)sharedInstance;
-(id)_init;
-(id)findOrRegisterIcon:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif