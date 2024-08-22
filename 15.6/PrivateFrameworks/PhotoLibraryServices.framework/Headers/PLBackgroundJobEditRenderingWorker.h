// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBACKGROUNDJOBEDITRENDERINGWORKER_H
#define PLBACKGROUNDJOBEDITRENDERINGWORKER_H

@class PAImageConversionServiceClient, PAVideoConversionServiceClient, NSProgress;


#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    NSProgress *_progressForCurrentAsset;
}




+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(id)workerWithLibrary:(id)arg0 ;
-(BOOL)isInterruptible;
-(id)_predicateToFetchDeferredAdjustmentNeededAssets;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)dealloc;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif