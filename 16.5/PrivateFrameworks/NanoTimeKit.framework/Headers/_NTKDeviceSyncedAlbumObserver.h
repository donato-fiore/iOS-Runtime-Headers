// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKDEVICESYNCEDALBUMOBSERVER_H
#define _NTKDEVICESYNCEDALBUMOBSERVER_H

@class NPTOCollectionTargetLibrary, NSHashTable, NSString, NRDevice;
@protocol NPTOCollectionTargetLibraryObserver;

#import <Foundation/Foundation.h>


@interface _NTKDeviceSyncedAlbumObserver : NSObject <NPTOCollectionTargetLibraryObserver>

 {
    NPTOCollectionTargetLibrary *_library;
    NSHashTable *_observers;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NRDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *syncedAlbumName; // ivar: _syncedAlbumName


-(id)initWithDevice:(id)arg0 ;
-(void)_startObserving;
-(void)_stopObserving;
-(void)addObserver:(id)arg0 ;
-(void)collectionTargetLibraryDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif