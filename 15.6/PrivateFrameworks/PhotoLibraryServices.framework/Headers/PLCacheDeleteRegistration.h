// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCACHEDELETEREGISTRATION_H
#define PLCACHEDELETEREGISTRATION_H

@class NSMutableDictionary, PFCameraViewfinderSessionWatcher, NSString;
@protocol PFCameraViewfinderSessionWatcherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLCacheDeleteRegistration : NSObject <PFCameraViewfinderSessionWatcherDelegate>

 {
    NSMutableDictionary *_cacheDeleteSupportByLibraryURL;
    NSMutableDictionary *_notificationIDsByLibraryURL;
    NSObject<OS_dispatch_queue> *_queue;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSMutableDictionary *_fileIDsAndPurgedPathsReceivedWhileCameraIsStreamingPerLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerNullHandler;
-(id)_getInternalQueue;
-(id)init;
-(void)_processRemovedFiles:(id)arg0 withCacheDeleteSupport:(id)arg1 forLibraryURL:(id)arg2 ;
-(void)_registerResourceDirectories;
-(void)_replaceCameraWatcherWith:(id)arg0 ;
-(void)_setCacheDeleteSupport:(id)arg0 forLibrary:(id)arg1 ;
-(void)cameraWatcherDidChangeState:(id)arg0 ;
-(void)registerCacheDeleteSupport:(id)arg0 withLibraryServicesManager:(id)arg1 ;
-(void)unregisterCacheDeleteSupport:(id)arg0 withLibraryServicesManager:(id)arg1 ;


@end


#endif