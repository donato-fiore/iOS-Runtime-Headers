// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITVIDEOCONTENTPROVIDER_H
#define PXPHOTOKITVIDEOCONTENTPROVIDER_H

@class PHFetchResult, PHAsset, NSString;
@protocol PXPhotoLibraryUIChangeObserver;


#import "PXDisplayAssetVideoContentProvider.h"
#import "PXPhotoKitUIMediaProvider.h"

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver>

 {
    PHFetchResult *_fetchResult;
}


@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (readonly) Class superclass;


-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 deliveryStrategies:(id)arg2 audioSession:(id)arg3 requestURLOnly:(BOOL)arg4 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;


@end


#endif