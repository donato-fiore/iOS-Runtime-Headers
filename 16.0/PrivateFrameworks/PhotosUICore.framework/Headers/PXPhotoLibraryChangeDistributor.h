// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOLIBRARYCHANGEDISTRIBUTOR_H
#define PXPHOTOLIBRARYCHANGEDISTRIBUTOR_H

@class PHPhotoLibrary, NSHashTable, NSMutableSet, NSString;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PXPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver>

 {
    PHPhotoLibrary *_photoLibrary;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_changeDeliverySemaphore;
    NSObject<OS_dispatch_group> *_changePausingGroup;
    NSMutableSet *_changePausingTokens;
}


@property (readonly, nonatomic, getter=areChangesPaused) BOOL changesPaused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)beginPausingChangesWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_notifyPausedStateChange;
-(void)dealloc;
-(void)distributeChangeOnMainQueue:(id)arg0 ;
-(void)endPausingChanges:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif