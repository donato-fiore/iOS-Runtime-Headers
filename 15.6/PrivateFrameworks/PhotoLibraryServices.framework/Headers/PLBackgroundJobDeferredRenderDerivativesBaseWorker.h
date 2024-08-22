// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBACKGROUNDJOBDEFERREDRENDERDERIVATIVESBASEWORKER_H
#define PLBACKGROUNDJOBDEFERREDRENDERDERIVATIVESBASEWORKER_H

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;


#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}




+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(id)workerWithLibraryBundle:(id)arg0 ;
-(BOOL)isInterruptible;
-(id)_predicateToFetchDeferredAssets;
-(id)imageConversionClient;
-(id)videoConversionClient;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif