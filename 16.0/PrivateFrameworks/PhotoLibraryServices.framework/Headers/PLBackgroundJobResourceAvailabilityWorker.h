// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBRESOURCEAVAILABILITYWORKER_H
#define PLBACKGROUNDJOBRESOURCEAVAILABILITYWORKER_H

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;


#import "PLBackgroundJobWorker.h"
#import "PLDeferredPhotoFinalizer.h"

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    os_unfair_lock_s _lock;
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
}




+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
-(BOOL)isInterruptible;
-(id)deferredPhotoFinalizer;
-(id)imageConversionClient;
-(id)initWithLibraryBundle:(id)arg0 ;
-(id)videoConversionClient;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif