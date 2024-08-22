// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKERANIMOJIPROVIDERITEM_H
#define CNPHOTOPICKERANIMOJIPROVIDERITEM_H

@class NSData, AVTAvatarRecordImageProvider, UIImage, AVTStickerConfiguration, AVTRenderingScope;
@protocol AVTAvatarRecord;


#import "CNPhotoPickerProviderItem.h"
#import "CNPhotoPickerColorVariant.h"
#import "CNAvatarStickerGeneratorProvider.h"

@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem

@property (retain, nonatomic) NSData *_generatedImageData; // ivar: __generatedImageData
@property (retain, nonatomic) NSData *_originalImageData; // ivar: __originalImageData
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) CNPhotoPickerColorVariant *backgroundColorVariant; // ivar: _backgroundColorVariant
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) AVTAvatarRecordImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) UIImage *loadingPlaceholderImage; // ivar: _loadingPlaceholderImage
@property (nonatomic) CGSize originalImageSize; // ivar: _originalImageSize
@property (retain, nonatomic) AVTStickerConfiguration *poseConfiguration; // ivar: _poseConfiguration
@property (retain, nonatomic) AVTRenderingScope *renderingScope; // ivar: _renderingScope
@property (retain, nonatomic) CNAvatarStickerGeneratorProvider *stickerGeneratorProvider; // ivar: _stickerGeneratorProvider
@property (retain, nonatomic) NSData *thumbnailImageData;


+(id)log;
-(BOOL)allowsMoveAndScale;
-(BOOL)allowsVariants;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldShowCaption;
-(NSUInteger)hash;
-(NSUInteger)imageType;
-(id)contactImageForMetadataStore;
-(id)copyWithColor:(id)arg0 ;
-(id)copyWithPoseConfiguration:(id)arg0 generatorProvider:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg0 ;
-(id)generateImageDataIfNeeded;
-(id)generateThumbnailImageDataIfNeeded;
-(id)imageData;
-(id)initWithAvatarRecord:(id)arg0 imageProvider:(id)arg1 renderingScope:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 ;
-(id)initWithOriginalImageData:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(id)initWithOriginalImageData:(id)arg0 cropRect:(struct CGRect )arg1 backgroundColorVariant:(id)arg2 ;
-(id)localizedVariantsTitle;
-(id)originalImageData;
-(id)renderAvatarWithBackgroundWithImage:(id)arg0 ;
-(id)renderAvatarWithBackgroundWithImageData:(id)arg0 ;
-(id)renderAvatarWithPoseWithSize:(CGFloat)arg0 ;
-(id)renderDefaultAvatarImage;
-(id)variantIdentifier;
-(struct CGAffineTransform )transformForMemojiMetadata;
-(void)applyVariantEffectToFullsizeImageWithCompletion:(id)arg0 ;
-(void)updateVisualIdentity:(id)arg0 ;


@end


#endif