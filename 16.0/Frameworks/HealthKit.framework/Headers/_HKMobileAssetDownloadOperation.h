// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKMOBILEASSETDOWNLOADOPERATION_H
#define _HKMOBILEASSETDOWNLOADOPERATION_H

@class MAAsset, MADownloadOptions;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _HKMobileAssetDownloadOperation : NSObject {
    MAAsset *_asset;
    MADownloadOptions *_downloadOptions;
    NSInteger _state;
    id *_completion;
    NSInteger _retryCount;
    NSInteger _maxNumberOfRetriesAllowed;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)description;
-(id)initWithAsset:(id)arg0 queue:(id)arg1 downloadOptions:(id)arg2 maxNumberOfRetriesAllowed:(NSInteger)arg3 completion:(id)arg4 ;
-(void)_queue_callCompletionWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_queue_downloadAsset;
-(void)_queue_run;
-(void)_queue_transitionToCompleted;
-(void)_queue_transitionToDownloadingAsset;
-(void)_queue_transitionToFailureWithDownloadResult:(NSInteger)arg0 ;
-(void)_queue_transitionToInitialized;
-(void)_queue_transitionToState:(NSInteger)arg0 ;
-(void)run;


@end


#endif