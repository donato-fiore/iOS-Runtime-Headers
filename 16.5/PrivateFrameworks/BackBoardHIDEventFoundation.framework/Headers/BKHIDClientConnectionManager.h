// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKHIDCLIENTCONNECTIONMANAGER_H
#define BKHIDCLIENTCONNECTIONMANAGER_H

@class BSMutableIntegerMap, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BKHIDClientConnectionManager : NSObject {
    *__IOHIDEventSystem _hidEventSystem;
    BSMutableIntegerMap *_taskPortToClientConnectionMapping;
    BSMutableIntegerMap *_pidToClientConnectionMapping;
    NSMutableDictionary *_versionedPIDToClientConnectionMapping;
    *__CFDictionary _hidConnectionToBKConnection;
    os_unfair_lock_s _lock;
}




-(NSInteger)versionedPIDForPID:(int)arg0 ;
-(id)addRemovalObserverForConnectionWithVersionedPID:(NSInteger)arg0 observerBlock:(id)arg1 ;
-(id)bundleIDForPID:(int)arg0 ;
-(id)clientForDestination:(id)arg0 ;
-(id)clientForTaskPort:(unsigned int)arg0 ;
-(id)description;
-(id)initWithHIDEventSystem:(struct __IOHIDEventSystem *)arg0 ;
-(int)pidForBundleID:(id)arg0 ;
-(struct __IOHIDEventSystemConnection *)copyClientForDestination:(id)arg0 ;
-(struct __IOHIDEventSystemConnection *)copyClientForTaskPort:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif