// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMPREVIEWUIIMAGEPROVIDER_H
#define PXCMMPREVIEWUIIMAGEPROVIDER_H

@class NSString;
@protocol PXUIImageProvider;

#import <Foundation/Foundation.h>


@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *underlyingAssetImageProvider; // ivar: _underlyingAssetImageProvider


-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(id)_underlyingAssetsFromPreviewAssets:(id)arg0 ;
-(id)init;
-(id)initWithUnderlyingAssetImageProvider:(id)arg0 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif