// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKERMONOGRAMPROVIDERITEM_H
#define CNPHOTOPICKERMONOGRAMPROVIDERITEM_H

@class UIColor, NSString, NSData;
@protocol CNVisualIdentityPickerTextEditableProviderItem, CNAvatarImageRenderingScope;


#import "CNPhotoPickerProviderItem.h"
#import "CNAvatarImageRenderer.h"
#import "CNVisualIdentity.h"

@interface CNPhotoPickerMonogramProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem>



@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // ivar: _avatarRenderer
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL hasUnknownColor; // ivar: _hasUnknownColor
@property (nonatomic) BOOL isContactImage; // ivar: _isContactImage
@property (nonatomic) BOOL isVariantOptionItem; // ivar: _isVariantOptionItem
@property (readonly, nonatomic) NSString *itemText;
@property (retain, nonatomic) NSData *monogramData; // ivar: _monogramData
@property (retain, nonatomic) NSString *monogramText; // ivar: _monogramText
@property (retain, nonatomic) NSObject<CNAvatarImageRenderingScope> *renderingScope; // ivar: _renderingScope
@property (retain, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


-(BOOL)allowsEditing;
-(BOOL)allowsMoveAndScale;
-(BOOL)allowsVariants;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGrayMonogramItem;
-(BOOL)shouldShowCaption;
-(NSUInteger)hash;
-(NSUInteger)imageType;
-(id)contactImageForMetadataStore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createColorVariantItems;
-(id)createColorVariantItemsExcludingSelf;
-(id)createVariantsItemsWithVariantsManager:(id)arg0 ;
-(id)generateThumbnailImageDataIfNeeded;
-(id)imageData;
-(id)initWithImageData:(id)arg0 thumbnailImageData:(id)arg1 fullscreenImageData:(id)arg2 cropRect:(struct CGRect )arg3 renderingScope:(id)arg4 avatarRenderer:(id)arg5 isVariantOptionItem:(BOOL)arg6 ;
-(id)localizedVariantsTitle;
-(id)monogramVariantItemForColor:(id)arg0 ;
-(id)thumbnailImageData;
-(id)updatedProviderItemWithText:(id)arg0 ;
-(id)variantIdentifier;
-(void)renderMonogramData;
-(void)updateVisualIdentity:(id)arg0 ;
-(void)updateWithMonogramData:(id)arg0 ;


@end


#endif