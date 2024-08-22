// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEORESOURCEMANIFESTTILEGROUPOBSERVERPROXY_H
#define _GEORESOURCEMANIFESTTILEGROUPOBSERVERPROXY_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)description;
-(id)init;
-(void)registerObserver:(id)arg0 ;


@end


#endif