// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITLIVEPHOTOVIDEOCONTENTPROVIDER_H
#define PXPHOTOKITLIVEPHOTOVIDEOCONTENTPROVIDER_H

@class NSString;
@protocol PXSettingsKeyObserver;


#import "PXPhotoKitVideoContentProvider.h"
#import "PXPhotoKitLivePhotoVideoContentProviderSpec.h"
#import "PXVideoStabilizeOperation.h"

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver>

 {
    PXPhotoKitLivePhotoVideoContentProviderSpec *_spec;
    NSInteger _assetPlaybackStyle;
    PXVideoStabilizeOperation *_stabilizeOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXPhotoKitLivePhotoVideoContentProviderSpec *spec;
@property (readonly) Class superclass;


+(id)postProcessingOperationQueue;
-(BOOL)needsPostprocessing;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 deliveryStrategies:(id)arg2 audioSession:(id)arg3 requestURLOnly:(BOOL)arg4 ;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 deliveryStrategies:(id)arg2 audioSession:(id)arg3 spec:(id)arg4 ;
-(void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(id)arg0 ;
-(void)cancelLoading;
-(void)dealloc;
-(void)postprocessPlayerItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif