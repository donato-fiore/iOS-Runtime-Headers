// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFEATURESPEC_H
#define PXFEATURESPEC_H

@class NSCache, NSArray, UIColor;

#import <Foundation/Foundation.h>

#import "PXLayoutMetricInterpolator.h"
#import "PXExtendedTraitCollection.h"

@interface PXFeatureSpec : NSObject

@property (readonly, nonatomic) PXLayoutMetricInterpolator *_horizontalContentGuideInsetsInterpolator; // ivar: __horizontalContentGuideInsetsInterpolator
@property (readonly, nonatomic) BOOL _shouldUseMiniMargins; // ivar: __shouldUseMiniMargins
@property (readonly, nonatomic) NSCache *_viewSpecCache; // ivar: __viewSpecCache
@property (readonly, nonatomic) CGFloat collectionTileImageCornerRadius;
@property (readonly, nonatomic) NSArray *collectionTileImageOverlaySpecs; // ivar: _collectionTileImageOverlaySpecs
@property (readonly, nonatomic) NSArray *collectionTileImageOverlaySpecsHighlighted; // ivar: _collectionTileImageOverlaySpecsHighlighted
@property (readonly, nonatomic) NSInteger contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) UIEdgeInsets curatedLibraryEdgeToEdgeContentDefaultPadding;
@property (readonly, nonatomic) UIColor *defaultBackgroundColor;
@property (readonly, nonatomic) CGFloat defaultCornerRadius;
@property (readonly, nonatomic) CGFloat defaultDarkenSourceOverAmount;
@property (readonly, nonatomic) UIColor *defaultPlaceholderColor;
@property (readonly, nonatomic) UIColor *defaultPlacesPlaceholderColor;
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (readonly, nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (readonly, nonatomic) CGSize layoutReferenceSize; // ivar: _layoutReferenceSize
@property (readonly, nonatomic) NSInteger localizedLeadingTextAlignment;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) PXExtendedTraitCollection *rootExtendedTraitCollection;
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) BOOL shouldInsetAllPhotoDetailsContent; // ivar: _shouldInsetAllPhotoDetailsContent
@property (readonly, nonatomic) NSInteger sizeClass; // ivar: _sizeClass
@property (readonly, nonatomic) NSInteger sizeSubclass; // ivar: _sizeSubclass
@property (readonly, nonatomic) CGFloat spacingBetweenMonthCards;
@property (readonly, nonatomic) CGFloat spacingBetweenYearCards;
@property (readonly, nonatomic) NSInteger userInterfaceFeature; // ivar: _userInterfaceFeature
@property (readonly, nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom
@property (readonly, nonatomic) NSInteger userInterfaceLevel; // ivar: _userInterfaceLevel
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (readonly, nonatomic) NSInteger windowOrientation; // ivar: _windowOrientation


-(NSInteger)_capitalizationStyleFromTextAttributes:(id)arg0 defaultCapitalizationStyle:(NSInteger)arg1 ;
-(id)_textAttributesForFontName:(id)arg0 fontSize:(CGFloat)arg1 lineHeight:(CGFloat)arg2 tracking:(CGFloat)arg3 stroke:(CGFloat)arg4 ;
-(id)collectionTileImageOverlayColor;
-(id)collectionTileImageOverlayColorHighlighted;
-(id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor )arg0 ;
-(id)fullscreenMiroViewSpec;
-(id)fullscreenMiroViewSpecWithBoundingSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor )arg0 ;
-(struct UIEdgeInsets )_fullscreenContentInsetsForWidth:(CGFloat)arg0 ;
-(struct UIEdgeInsets )contentGuideInsetsForScrollAxis:(NSInteger)arg0 ;
-(void)configureViewSpec:(id)arg0 ;


@end


#endif