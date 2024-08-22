// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UILISTCONTENTCONFIGURATION_H
#define UILISTCONTENTCONFIGURATION_H

@class NSAttributedString, NSString;
@protocol UIContentConfiguration, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UIListContentImageProperties.h"
#import "UIListContentTextProperties.h"

@interface UIListContentConfiguration : NSObject <UIContentConfiguration, NSSecureCoding>

 {
    ? _configurationFlags;
    BOOL _prefersSideBySideTextAndSecondaryText;
    NSUInteger _axesPreservingSuperviewLayoutMargins;
    CGFloat _imageToTextPadding;
    CGFloat _textToSecondaryTextHorizontalPadding;
    CGFloat _textToSecondaryTextVerticalPadding;
    NSInteger _defaultStyle;
    NSDirectionalEdgeInsets _directionalLayoutMargins;
}


@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSUInteger axesPreservingSuperviewLayoutMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIListContentImageProperties *imageProperties; // ivar: _imageProperties
@property (nonatomic) CGFloat imageToTextPadding;
@property (nonatomic) BOOL prefersSideBySideTextAndSecondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties; // ivar: _secondaryTextProperties
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIListContentTextProperties *textProperties; // ivar: _textProperties
@property (nonatomic) CGFloat textToSecondaryTextHorizontalPadding;
@property (nonatomic) CGFloat textToSecondaryTextVerticalPadding;


+(BOOL)supportsSecureCoding;
+(id)_interactiveInsetGroupedHeaderConfiguration;
+(id)_prominentInsetGroupedHeaderConfiguration;
+(id)accompaniedSidebarCellConfiguration;
+(id)accompaniedSidebarSubtitleCellConfiguration;
+(id)cellConfiguration;
+(id)extraProminentInsetGroupedHeaderConfiguration;
+(id)groupedFooterConfiguration;
+(id)groupedHeaderConfiguration;
+(id)plainFooterConfiguration;
+(id)plainHeaderConfiguration;
+(id)prominentInsetGroupedHeaderConfiguration;
+(id)sidebarCellConfiguration;
+(id)sidebarHeaderConfiguration;
+(id)sidebarSubtitleCellConfiguration;
+(id)subtitleCellConfiguration;
+(id)valueCellConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeContentView;
-(id)updatedConfigurationForState:(id)arg0 ;
-(void)_setSwiftBridgingImageProperties:(id)arg0 ;
-(void)_setSwiftBridgingSecondaryTextProperties:(id)arg0 ;
-(void)_setSwiftBridgingTextProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif