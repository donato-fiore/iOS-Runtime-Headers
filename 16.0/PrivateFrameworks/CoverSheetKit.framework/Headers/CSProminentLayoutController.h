// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPROMINENTLAYOUTCONTROLLER_H
#define CSPROMINENTLAYOUTCONTROLLER_H

@protocol UITraitEnvironment;

#import <Foundation/Foundation.h>


@interface CSProminentLayoutController : NSObject

@property (weak, nonatomic) NSObject<UITraitEnvironment> *traitEnvironment; // ivar: _traitEnvironment


+(CGFloat)_landscapeReductionFactor;
+(CGFloat)fontSizeForElementType:(NSUInteger)arg0 isLandscapeVariant:(BOOL)arg1 ;
+(CGFloat)fontWeightForElementType:(NSUInteger)arg0 ;
+(CGFloat)fontWeightForElementType:(NSUInteger)arg0 familyName:(id)arg1 ;
+(CGFloat)leadingLandscapeLayoutInset;
+(CGFloat)leadingPortraitLayoutInset;
+(CGFloat)reticlePortraitLayoutInset;
+(CGFloat)subtitleElementFontSize;
+(CGFloat)timeElementFontSize;
+(CGFloat)timeTightBoundingHeight;
+(struct CGRect )boundsForElements:(NSUInteger)arg0 ;
+(struct CGRect )boundsForElements:(NSUInteger)arg0 variant:(NSUInteger)arg1 ;
+(struct CGRect )editingBoundsForElements:(NSUInteger)arg0 ;
+(struct CGRect )editingFrameForElements:(NSUInteger)arg0 ;
+(struct CGRect )frameForElements:(NSUInteger)arg0 ;
+(struct CGRect )frameForElements:(NSUInteger)arg0 variant:(NSUInteger)arg1 ;
+(struct CGRect )tightBoundsForElements:(NSUInteger)arg0 ;
+(struct CGRect )tightFrameForElements:(NSUInteger)arg0 ;
-(BOOL)_isPortraitForBoundingRect:(struct CGRect )arg0 ;
-(BOOL)shouldCenterElementsInBoundingRect:(struct CGRect )arg0 ;
-(CGFloat)_safeAreaTopInset:(NSUInteger)arg0 ;
-(CGFloat)complicationElementBoundingHeight;
-(CGFloat)complicationElementBoundingTopY;
-(CGFloat)complicationElementEditingOffset;
-(CGFloat)leadingLandscapeLayoutInset;
-(CGFloat)leadingPortraitLayoutInset;
-(CGFloat)reticlePortraitLayoutInset;
-(CGFloat)reticleSpacing;
-(CGFloat)subtitleElementBoundingHeight;
-(CGFloat)subtitleElementBoundingTopY;
-(CGFloat)subtitleElementBoundingTopYMultiplierLandscapePhone;
-(CGFloat)subtitleElementEditingOffset;
-(CGFloat)timeElementBoundingHeight;
-(CGFloat)timeElementBoundingTopY;
-(CGFloat)timeElementReticleInset;
-(id)initWithTraitEnvironment:(id)arg0 ;
-(struct CGRect )_frameForElement:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )_frameForElement:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 variant:(NSUInteger)arg2 ;
-(struct CGRect )boundsForElements:(NSUInteger)arg0 variant:(NSUInteger)arg1 withBoundingRect:(struct CGRect )arg2 ;
-(struct CGRect )boundsForElements:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )complicationRowElementEditingReticleFrameWithBoundingRect:(struct CGRect )arg0 ;
-(struct CGRect )editingBoundsForElements:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )editingFrameForElements:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )editingNormalizedBoundsForElements:(NSUInteger)arg0 inBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )editingNormalizedFrameForElements:(NSUInteger)arg0 inBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )editingReticleFrameForElement:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )elementHorizontalFrameInBoundingRect:(struct CGRect )arg0 ;
-(struct CGRect )frameForElements:(NSUInteger)arg0 variant:(NSUInteger)arg1 withBoundingRect:(struct CGRect )arg2 ;
-(struct CGRect )frameForElements:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )normalizedBoundsForElements:(NSUInteger)arg0 inBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )normalizedBoundsForElements:(NSUInteger)arg0 variant:(NSUInteger)arg1 inBoundingRect:(struct CGRect )arg2 ;
-(struct CGRect )normalizedFrameForElements:(NSUInteger)arg0 inBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )normalizedFrameForElements:(NSUInteger)arg0 variant:(NSUInteger)arg1 inBoundingRect:(struct CGRect )arg2 ;
-(struct CGRect )subtitleElementEditingReticleFrameWithBoundingRect:(struct CGRect )arg0 ;
-(struct CGRect )tightBoundsForElements:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )tightFrameForElements:(NSUInteger)arg0 withBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )tightNormalizedBoundsForElements:(NSUInteger)arg0 inBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )tightNormalizedFrameForElements:(NSUInteger)arg0 inBoundingRect:(struct CGRect )arg1 ;
-(struct CGRect )timeElementEditingReticleFrameWithBoundingRect:(struct CGRect )arg0 ;


@end


#endif