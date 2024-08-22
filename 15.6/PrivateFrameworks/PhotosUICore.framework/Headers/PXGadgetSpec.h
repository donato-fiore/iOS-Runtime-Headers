// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGADGETSPEC_H
#define PXGADGETSPEC_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollection.h"

@interface PXGadgetSpec : NSObject

@property (readonly, nonatomic) UIEdgeInsets accessoryViewInset; // ivar: _accessoryViewInset
@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly, nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) UIEdgeInsets layoutInsets; // ivar: _layoutInsets
@property (readonly, nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (readonly, nonatomic) CGFloat layoutReferenceHeight; // ivar: _layoutReferenceHeight
@property (readonly, nonatomic) CGFloat layoutReferenceWidth; // ivar: _layoutReferenceWidth
@property (readonly, nonatomic) NSInteger layoutSizeClass; // ivar: _layoutSizeClass
@property (readonly, nonatomic) PXExtendedTraitCollection *rootExtendedTraitCollection;
@property (readonly, nonatomic) NSInteger scrollAxis; // ivar: _scrollAxis
@property (readonly, nonatomic) BOOL shouldInsetAllContent; // ivar: _shouldInsetAllContent
@property (readonly, nonatomic) BOOL shouldUseAccessibilityLayout; // ivar: _shouldUseAccessibilityLayout
@property (readonly, nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom


+(CGFloat)sectionHeaderHeightForStyle:(NSUInteger)arg0 dividerHidden:(BOOL)arg1 ;
+(CGFloat)sectionHeaderTitleBottomSpacingForStyle:(NSUInteger)arg0 ;
+(CGFloat)sectionHeaderTitleHeightForStyle:(NSUInteger)arg0 dividerHidden:(BOOL)arg1 ;
+(CGFloat)sectionHeaderTopSpacingForStyle:(NSUInteger)arg0 ;
+(id)horizontalContentInsetsInterpolator;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGadgetSpec:(id)arg0 ;
-(BOOL)shouldInsetContentForTraitCollection:(id)arg0 ;
-(CGFloat)columnSpacingForColumnSpan:(NSInteger)arg0 ;
-(CGFloat)columnWidthForColumnSpan:(NSInteger)arg0 ;
-(id)initWithTraitCollection:(id)arg0 scrollAxis:(NSInteger)arg1 ;
-(struct UIEdgeInsets )acccessoryViewInsetForTraitCollection:(id)arg0 ;


@end


#endif