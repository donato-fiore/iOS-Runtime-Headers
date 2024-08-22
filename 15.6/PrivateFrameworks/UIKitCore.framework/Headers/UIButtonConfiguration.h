// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIBUTTONCONFIGURATION_H
#define UIBUTTONCONFIGURATION_H

@class NSAttributedString, NSString;
@protocol _UIButtonConfigurationShim, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIButtonConfigurationStyleBehaviors.h"
#import "UIColor.h"
#import "UIImageSymbolConfiguration.h"
#import "UIBackgroundConfiguration.h"
#import "UIImage.h"

@interface UIButtonConfiguration : NSObject <_UIButtonConfigurationShim, NSCopying, NSSecureCoding>

 {
    _UIButtonConfigurationStyleBehaviors *_behaviors;
    NSAttributedString *_resolvedTitle;
    NSAttributedString *_resolvedSubtitle;
    UIColor *_resolvedImageColor;
    UIImageSymbolConfiguration *_resolvedSymbolConfig;
    UIColor *_resolvedActivityIndicatorColor;
    CGFloat _resolvedActivityIndicatorSize;
    CGFloat _resolvedImageReservation;
    ? _flags;
}


@property (copy, nonatomic) id *activityIndicatorColorTransformer; // ivar: _activityIndicatorColorTransformer
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle; // ivar: _attributedSubtitle
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (nonatomic) BOOL automaticallyUpdateForSelection;
@property (readonly, nonatomic) UIBackgroundConfiguration *background;
@property (retain, nonatomic) UIBackgroundConfiguration *background; // ivar: _background
@property (retain, nonatomic) UIColor *baseBackgroundColor; // ivar: _baseBackgroundColor
@property (retain, nonatomic) UIColor *baseForegroundColor; // ivar: _baseForegroundColor
@property (readonly, nonatomic) NSInteger buttonSize;
@property (nonatomic) NSInteger buttonSize;
@property (readonly, nonatomic) NSDirectionalEdgeInsets contentInsets;
@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) NSInteger cornerStyle;
@property (nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) id *imageColorTransformer; // ivar: _imageColorTransformer
@property (readonly, nonatomic) CGFloat imagePadding;
@property (nonatomic) CGFloat imagePadding; // ivar: _imagePadding
@property (readonly, nonatomic) NSUInteger imagePlacement;
@property (nonatomic) NSUInteger imagePlacement; // ivar: _imagePlacement
@property (nonatomic) CGFloat imageReservation; // ivar: _imageReservation
@property (readonly, nonatomic) NSInteger macIdiomStyle;
@property (nonatomic) NSInteger macIdiomStyle;
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage;
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage; // ivar: _preferredSymbolConfigurationForImage
@property (readonly, nonatomic) BOOL showsActivityIndicator;
@property (nonatomic) BOOL showsActivityIndicator;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSInteger subtitleLineBreakMode;
@property (nonatomic) NSInteger subtitleLineBreakMode;
@property (copy, nonatomic) id *subtitleTextAttributesTransformer; // ivar: _subtitleTextAttributesTransformer
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger titleAlignment;
@property (nonatomic) NSInteger titleAlignment; // ivar: _titleAlignment
@property (readonly, nonatomic) NSInteger titleLineBreakMode;
@property (nonatomic) NSInteger titleLineBreakMode;
@property (readonly, nonatomic) CGFloat titlePadding;
@property (nonatomic) CGFloat titlePadding; // ivar: _titlePadding
@property (copy, nonatomic) id *titleTextAttributesTransformer; // ivar: _titleTextAttributesTransformer


+(BOOL)supportsSecureCoding;
+(id)borderedButtonConfiguration;
+(id)borderedProminentButtonConfiguration;
+(id)borderedTintedButtonConfiguration;
+(id)borderlessButtonConfiguration;
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
-(id)_initWithBehaviors:(id)arg0 ;
-(id)_resolvedActivityIndicatorColor;
-(id)_resolvedImage;
-(id)_resolvedImageColor;
-(id)_resolvedSymbolConfiguration;
-(id)_resolvedTitle;
-(id)_spiValue;
-(id)_updateFromButton:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)updatedConfigurationForButton:(id)arg0 ;
-(void)_copyValuesFromConfiguration:(id)arg0 ;
-(void)_resolveValuesWithButton:(id)arg0 ;
-(void)_setSwiftBridgingBackground:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaultContentInsets;


@end


#endif