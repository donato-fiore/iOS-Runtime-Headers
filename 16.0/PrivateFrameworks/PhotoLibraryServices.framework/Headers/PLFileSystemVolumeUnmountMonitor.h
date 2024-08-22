// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILESYSTEMVOLUMEUNMOUNTMONITOR_H
#define PLFILESYSTEMVOLUMEUNMOUNTMONITOR_H

@class NSHashTable, NSURL;

#import <Foundation/Foundation.h>


@interface PLFileSystemVolumeUnmountMonitor : NSObject {
    NSHashTable *_observers;
    os_unfair_lock_s _lock;
    NSURL *_volumeURL;
}




-(id)description;
-(id)initWithVolumeURL:(id)arg0 ;
-(void)addVolumeUnmountObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeVolumeUnmountObserver:(id)arg0 ;


@end


#endif