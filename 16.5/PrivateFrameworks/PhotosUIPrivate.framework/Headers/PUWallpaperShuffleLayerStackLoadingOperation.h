// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERSHUFFLELAYERSTACKLOADINGOPERATION_H
#define PUWALLPAPERSHUFFLELAYERSTACKLOADINGOPERATION_H

@class PXAsyncOperation, NSURL, PFPosterEditConfiguration, NSError, PFParallaxLayerStack, PIParallaxCompoundLayerStackRequest, NSString, PIParallaxStyle, PFPosterMedia;
@protocol PISegmentationItem;



@interface PUWallpaperShuffleLayerStackLoadingOperation : PXAsyncOperation

@property (readonly, nonatomic) NSURL *assetDirectory; // ivar: _assetDirectory
@property (readonly, nonatomic) PFPosterEditConfiguration *editConfiguration; // ivar: _editConfiguration
@property (retain) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isPreloading; // ivar: _isPreloading
@property (retain) PFParallaxLayerStack *layerStack; // ivar: _layerStack
@property (retain, nonatomic) PIParallaxCompoundLayerStackRequest *layerStackRequest; // ivar: _layerStackRequest
@property (readonly, copy, nonatomic) NSString *operationType; // ivar: _operationType
@property (readonly, nonatomic) PIParallaxStyle *persistedStyle; // ivar: _persistedStyle
@property (readonly, nonatomic) PFPosterMedia *posterMedia; // ivar: _posterMedia
@property (retain) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem
@property (readonly, nonatomic) PIParallaxStyle *style; // ivar: _style


-(BOOL)_canLoadLayerStackFromDirectory;
-(BOOL)_loadLayerStackFromDirectory;
-(BOOL)px_shouldWaitForCancel;
-(BOOL)tryLoadLayerStackFromDirectory;
-(id)initWithPosterMedia:(id)arg0 editConfiguration:(id)arg1 assetDirectory:(id)arg2 style:(id)arg3 persistedStyle:(id)arg4 isPreloading:(BOOL)arg5 ;
-(void)_handleLayerStackResponse:(id)arg0 ;
-(void)cancel;
-(void)px_finishIfPossible;
-(void)px_start;


@end


#endif