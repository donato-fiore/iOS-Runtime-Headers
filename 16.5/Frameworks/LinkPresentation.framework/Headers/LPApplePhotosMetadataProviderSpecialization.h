// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPAPPLEPHOTOSMETADATAPROVIDERSPECIALIZATION_H
#define LPAPPLEPHOTOSMETADATAPROVIDERSPECIALIZATION_H

@class PHPhotoLibrary, PHFetchResult, NSString;
@protocol PXPhotoLibraryUIChangeObserver;


#import "LPMetadataProviderSpecialization.h"
#import "LPApplePhotosMomentMetadata.h"

@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization <PXPhotoLibraryUIChangeObserver>

 {
    BOOL _cancelled;
    int _pendingImageRequest;
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_keyAssetFetch;
    PHFetchResult *_anyAssetFetch;
    LPApplePhotosMomentMetadata *_metadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(void)cancel;
-(void)completeWithMetadata:(id)arg0 ;
-(void)dealloc;
-(void)didFetchAsset:(id)arg0 ;
-(void)fail;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)start;


@end


#endif