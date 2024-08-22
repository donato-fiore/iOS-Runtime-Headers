// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKEREMOJIPROVIDERITEM_H
#define CNPHOTOPICKEREMOJIPROVIDERITEM_H

@class UIColor, NSData, NSString;
@protocol CNVisualIdentityPickerTextEditableProviderItem;


#import "CNPhotoPickerProviderItem.h"
#import "CNPhotoPickerColorVariant.h"

@interface CNPhotoPickerEmojiProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem>



@property (readonly, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) CNPhotoPickerColorVariant *backgroundColorVariant; // ivar: _backgroundColorVariant
@property (retain, nonatomic) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (readonly, nonatomic) NSString *itemText;
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation


+(id)addNewEmojiProviderItemWithSize:(struct CGSize )arg0 ;
+(id)suggestedEmojiItemsForString:(id)arg0 variantsManager:(id)arg1 size:(struct CGSize )arg2 locale:(id)arg3 ;
+(id)thumbnailViewForImage:(id)arg0 ;
-(BOOL)allowsMoveAndScale;
-(BOOL)allowsVariants;
-(NSUInteger)imageType;
-(id)contactImageForMetadataStore;
-(id)copyWithStringRepresentation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg0 ;
-(id)generateImageRepresentationForEmojiString:(id)arg0 ;
-(id)generateThumbnailImageDataIfNeeded;
-(id)imageData;
-(id)initWithStringRepresentation:(id)arg0 backgroundColorVariant:(id)arg1 size:(struct CGSize )arg2 ;
-(id)thumbnailImageData;
-(id)updatedProviderItemWithText:(id)arg0 ;
-(id)updatedProviderItemWithText:(id)arg0 backgroundColorVariant:(id)arg1 ;
-(void)updateVisualIdentity:(id)arg0 ;


@end


#endif