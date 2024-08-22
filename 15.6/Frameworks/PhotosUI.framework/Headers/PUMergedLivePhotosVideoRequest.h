// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUMERGEDLIVEPHOTOSVIDEOREQUEST_H
#define PUMERGEDLIVEPHOTOSVIDEOREQUEST_H

@class PXObservable, NSError, NSString;
@protocol PXChangeObserver, OS_dispatch_queue;


#import "PUCompositeVideoGenerator.h"
#import "PUMergedLivePhotosVideo.h"
#import "PUAssetReference.h"
#import "PUAssetsDataSource.h"

@interface PUMergedLivePhotosVideoRequest : PXObservable <PXChangeObserver>

 {
    NSUInteger _requestLogID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    PUCompositeVideoGenerator *_workQueue_generator;
    NSInteger _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_mergedVideo;
    NSError *_stateQueue_error;
}


@property (readonly, nonatomic) PUAssetReference *assetReference; // ivar: _assetReference
@property (readonly, nonatomic) PUAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(id)_workQueue_fetchMergeableAssets;
-(id)init;
-(id)initWithAssetReference:(id)arg0 dataSource:(id)arg1 ;
-(id)mutableChangeObject;
-(void)_workQueue_finishWithMergedVideo:(id)arg0 error:(id)arg1 ;
-(void)_workQueue_generateVideoUsingAssets:(id)arg0 ;
-(void)_workQueue_handleGeneratorDidChangeState;
-(void)_workQueue_start;
-(void)cancel;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)start;


@end


#endif