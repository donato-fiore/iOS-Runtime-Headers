// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBUTTONCONFIGURATION_H
#define _UIBUTTONCONFIGURATION_H

@class NSAttributedString, NSString;
@protocol _UIButtonConfigurationShim, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"
#import "UIBackgroundConfiguration.h"
#import "UIImage.h"
#import "UIColor.h"
#import "UIImageSymbolConfiguration.h"

@interface _UIButtonConfiguration : NSObject <_UIButtonConfigurationShim, NSCopying, NSSecureCoding>

 {
    id *_baseAttributesTransformer;
    UITraitCollection *_traitCollection;
    NSInteger _role;
    BOOL _hasCustomizedImageTintColorTransformer;
}


@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle; // ivar: _attributedSubtitle
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, nonatomic) UIBackgroundConfiguration *background;
@property (readonly, nonatomic) UIBackgroundConfiguration *background; // ivar: _background
@property (nonatomic) NSDirectionalEdgeInsets backgroundToContentInsets; // ivar: _backgroundToContentInsets
@property (readonly, nonatomic) NSInteger buttonSize;
@property (nonatomic) NSInteger buttonSize; // ivar: _buttonSize
@property (readonly, nonatomic) NSDirectionalEdgeInsets contentInsets;
@property (readonly, nonatomic) NSInteger cornerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSUInteger imageEdge; // ivar: _imageEdge
@property (readonly, nonatomic) CGFloat imagePadding;
@property (readonly, nonatomic) NSUInteger imagePlacement;
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (copy, nonatomic) id *imageTintColorTransformer; // ivar: _imageTintColorTransformer
@property (nonatomic, setter=_setImageTintColorTransformerIdentifier:) NSInteger imageTintColorTransformerIdentifier; // ivar: _imageTintColorTransformerIdentifier
@property (nonatomic) CGFloat imageToTitlePadding; // ivar: _imageToTitlePadding
@property (readonly, nonatomic) NSInteger macIdiomStyle;
@property (nonatomic) NSInteger macIdiomStyle; // ivar: _macIdiomStyle
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage; // ivar: _preferredSymbolConfigurationForImage
@property (readonly, nonatomic) BOOL showsActivityIndicator;
@property (nonatomic) BOOL showsBusyIndicator; // ivar: _showsBusyIndicator
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSInteger subtitleLineBreakMode;
@property (copy, nonatomic) id *subtitleTextAttributesTransformer; // ivar: _subtitleTextAttributesTransformer
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger titleAlignment;
@property (readonly, nonatomic) NSInteger titleLineBreakMode;
@property (readonly, nonatomic) CGFloat titlePadding;
@property (copy, nonatomic) id *titleTextAttributesTransformer; // ivar: _titleTextAttributesTransformer


+(BOOL)supportsSecureCoding;
+(id)configurationWithStyle:(NSInteger)arg0 ;
+(id)filledButtonConfiguration;
+(id)grayButtonConfiguration;
+(id)plainButtonConfiguration;
+(id)tintedButtonConfiguration;
-(BOOL)_hasMultilineTitle;
-(BOOL)_hasObscuringBackground;
-(BOOL)_hasOversizedTitle;
-(BOOL)_hasSymbolImage;
-(BOOL)_isRoundButton;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_resolvedActivityIndicatorSize;
-(CGFloat)_resolvedImageReservation;
-(NSInteger)_resolvedMacIdiomStyle;
-(NSInteger)_resolvedTitleAlignment;
-(id)_apiValue;
-(id)_resolvedActivityIndicatorColor;
-(id)_resolvedImage;
-(id)_resolvedImageColor;
-(id)_resolvedSymbolConfiguration;
-(id)_resolvedTitle;
-(id)_spiValue;
-(id)_traitCollection;
-(id)_updateFromButton:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)updatedConfigurationForState:(id)arg0 ;
-(void)_updateMetadataFromButton:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif