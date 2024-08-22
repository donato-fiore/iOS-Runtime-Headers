// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCHROMEBUTTONSPEC_H
#define PXSTORYCHROMEBUTTONSPEC_H

@class UIColor, NSDictionary;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollection.h"

@interface PXStoryChromeButtonSpec : NSObject

@property (readonly, nonatomic) CGSize badgeImageSize; // ivar: _badgeImageSize
@property (readonly, nonatomic) NSInteger badgeSystemImageWeight; // ivar: _badgeSystemImageWeight
@property (readonly, nonatomic) NSInteger blurEffectStyle; // ivar: _blurEffectStyle
@property (readonly, nonatomic) CGSize defaultImageSize; // ivar: _defaultImageSize
@property (readonly, nonatomic) UIColor *defaultTintColor; // ivar: _defaultTintColor
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly, nonatomic) NSInteger highlightedBlurEffectStyle; // ivar: _highlightedBlurEffectStyle
@property (readonly, nonatomic) NSDictionary *labelAttributes; // ivar: _labelAttributes
@property (readonly, nonatomic) UIEdgeInsets labelPadding; // ivar: _labelPadding
@property (readonly, nonatomic) CGFloat roundedRectCornerRadius; // ivar: _roundedRectCornerRadius
@property (readonly, nonatomic) NSInteger systemImageScale; // ivar: _systemImageScale
@property (readonly, nonatomic) CGFloat systemImageSizeWithBackground; // ivar: _systemImageSizeWithBackground
@property (readonly, nonatomic) CGFloat systemImageSizeWithoutBackground; // ivar: _systemImageSizeWithoutBackground
@property (readonly, nonatomic) NSInteger systemImageWeightWithBackground; // ivar: _systemImageWeightWithBackground
@property (readonly, nonatomic) NSInteger systemImageWeightWithoutBackground; // ivar: _systemImageWeightWithoutBackground
@property (readonly, nonatomic) NSInteger textOnlyBlurEffectStyle; // ivar: _textOnlyBlurEffectStyle


-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 ;


@end


#endif