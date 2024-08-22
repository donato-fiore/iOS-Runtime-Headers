// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXPHOTOKITADJUSTEDUIMEDIAREQUEST_H
#define _PXPHOTOKITADJUSTEDUIMEDIAREQUEST_H

@class PICompositionController, PLEditSource, PHImageManager, NSError;
@protocol PXPhotoKitAdjustedDisplayAsset, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXPhotoKitEditSourceLoader.h"

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject {
    PXPhotoKitEditSourceLoader *_editSourceLoader;
}


@property (readonly, nonatomic) NSObject<PXPhotoKitAdjustedDisplayAsset> *asset; // ivar: _asset
@property (retain, nonatomic) PICompositionController *baseCompositionController; // ivar: _baseCompositionController
@property (nonatomic) BOOL delayRenders; // ivar: _delayRenders
@property (retain, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (readonly, nonatomic) PHImageManager *imageManager; // ivar: _imageManager
@property (retain, nonatomic) NSError *loadError; // ivar: _loadError
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // ivar: _renderQueue
@property (nonatomic) BOOL useCachedRenders; // ivar: _useCachedRenders


-(id)initWithAsset:(id)arg0 renderQueue:(id)arg1 imageManager:(id)arg2 ;
-(void)_handleEditSourceLoadingFinished;
-(void)beginLoadingEditSource;
-(void)cancel;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;


@end


#endif