// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCPLPHOTOLIBRARYMONITOR_H
#define PXCPLPHOTOLIBRARYMONITOR_H

@class NSProgress, PHPhotoLibrary;
@protocol OS_dispatch_queue;


#import "PXObservable.h"

@interface PXCPLPhotoLibraryMonitor : PXObservable {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSProgress *_main_postOpenProgress;
}


@property (readonly, nonatomic) BOOL isRestoring; // ivar: _isRestoring
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_main_addObserverForPostOpenProgress:(id)arg0 ;
-(void)_main_removePostOpenProgressObserverIfNeeded;
-(void)_main_updateIsRestoring;
-(void)_queue_subscribeToPostOpenProgressForPhotoLibrary:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif