// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKSYNCEDALBUMOBSERVER_H
#define NTKSYNCEDALBUMOBSERVER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NTKSyncedAlbumObserver : NSObject {
    NSMutableDictionary *_deviceAlbumObservers;
    os_unfair_lock_s _observersLock;
}




+(id)sharedInstance;
-(id)init;
-(id)syncedAlbumNameForDevice:(id)arg0 ;
-(void)addObserver:(id)arg0 forDevice:(id)arg1 ;
-(void)removeObserver:(id)arg0 forDevice:(id)arg1 ;


@end


#endif