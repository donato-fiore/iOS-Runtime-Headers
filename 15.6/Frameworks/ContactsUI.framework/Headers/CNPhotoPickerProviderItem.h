// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKERPROVIDERITEM_H
#define CNPHOTOPICKERPROVIDERITEM_H

@class UIImage, NSData, NSString, NSDate;
@protocol NSCopying, CNScheduler, CNPhotoPickerProviderItemDelegate;

#import <Foundation/Foundation.h>


@interface CNPhotoPickerProviderItem : NSObject <NSCopying>



@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (readonly, nonatomic) BOOL allowsMoveAndScale;
@property (readonly, nonatomic) BOOL allowsVariants;
@property (readonly, nonatomic) NSObject<CNScheduler> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (retain, nonatomic) UIImage *croppedFullSizeImage; // ivar: _croppedFullSizeImage
@property (weak, nonatomic) NSObject<CNPhotoPickerProviderItemDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSData *filteredImageData; // ivar: _filteredImageData
@property (retain, nonatomic) UIImage *fullSizeImage; // ivar: _fullSizeImage
@property (retain, nonatomic) NSData *fullscreenImageData; // ivar: _fullscreenImageData
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSString *imageFilterName; // ivar: _imageFilterName
@property (readonly, nonatomic) NSUInteger imageType;
@property (retain, nonatomic) UIImage *loadingPlaceholderImage; // ivar: _loadingPlaceholderImage
@property (retain, nonatomic) NSString *localizedVariantDisplayName; // ivar: _localizedVariantDisplayName
@property (readonly, nonatomic) NSString *localizedVariantsTitle;
@property (readonly, nonatomic) NSData *originalImageData;
@property (retain, nonatomic) NSString *recentsIdentifier; // ivar: _recentsIdentifier
@property (readonly, nonatomic) NSObject<CNScheduler> *renderingQueue; // ivar: _renderingQueue
@property (readonly, nonatomic) BOOL shouldShowCaption;
@property (retain, nonatomic) NSDate *sortDate; // ivar: _sortDate
@property (retain, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage
@property (retain, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData
@property (readonly, nonatomic) NSString *variantIdentifier;


+(id)thumbnailViewForImage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactImageForMetadataStore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg0 ;
-(id)generatePhotoFilterVariants;
-(id)generateThumbnailImageDataIfNeeded;
-(id)generateThumbnailImageDataWithData:(id)arg0 ;
-(id)initWithImageData:(id)arg0 thumbnailImageData:(id)arg1 fullscreenImageData:(id)arg2 cropRect:(struct CGRect )arg3 ;
-(id)initWithImageData:(id)arg0 thumbnailImageData:(id)arg1 fullscreenImageData:(id)arg2 imageFilterName:(id)arg3 cropRect:(struct CGRect )arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6 ;
-(id)rotateImageDataIfNeeded:(id)arg0 ;
-(void)applyVariantEffectToFullsizeImageWithCompletion:(id)arg0 ;
-(void)clearThumbnailImage;
-(void)fullSizeViewWithCompletion:(id)arg0 ;
-(void)generateAllImageDatasIfNeeded;
-(void)thumbnailViewWithCompletion:(id)arg0 ;
// -(void)thumbnailViewWithPlaceholderProvider:(id)arg0 completion:(unk)arg1  ;
-(void)updateContact:(id)arg0 ;
-(void)updateTintColorIfNeeded:(id)arg0 ;
-(void)updateVisualIdentity:(id)arg0 ;


@end


#endif