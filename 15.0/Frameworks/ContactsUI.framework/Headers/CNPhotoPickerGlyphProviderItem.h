// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERGLYPHPROVIDERITEM_H
#define CNPHOTOPICKERGLYPHPROVIDERITEM_H

@class NSString, UIView, UIColor;


#import "CNPhotoPickerProviderItem.h"

@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem

@property (nonatomic) NSUInteger addItemType; // ivar: _addItemType
@property (retain, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName
@property (retain, nonatomic) UIView *symbolImageView; // ivar: _symbolImageView
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)thumbnailViewForImage:(id)arg0 ;
-(NSInteger)scaleForImageNamed:(id)arg0 ;
-(NSUInteger)imageType;
-(id)backgroundColorWithTintColor:(id)arg0 ;
-(id)imageForImageNamed:(id)arg0 withTintColor:(id)arg1 ;
-(id)initWithSymbolImageNamed:(id)arg0 ;
-(id)initWithSymbolImageNamed:(id)arg0 withAddItemType:(NSUInteger)arg1 ;
-(void)setupSymbolImageView;
-(void)thumbnailViewWithCompletion:(id)arg0 ;
-(void)updateTintColorIfNeeded:(id)arg0 ;


@end


#endif