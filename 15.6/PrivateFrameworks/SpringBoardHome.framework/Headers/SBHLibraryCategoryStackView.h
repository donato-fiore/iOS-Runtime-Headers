// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYCATEGORYSTACKVIEW_H
#define SBHLIBRARYCATEGORYSTACKVIEW_H

@class UIView, NSMutableArray, NSString, NSArray;
@protocol SBHIconImageCacheObserver, BSDescriptionProviding;


#import "SBHLibraryIndicatorIconSettings.h"
#import "SBHIconImageCache.h"

@interface SBHLibraryCategoryStackView : UIView <SBHIconImageCacheObserver, BSDescriptionProviding>

 {
    NSMutableArray *_podBackgroundViews;
    NSMutableArray *_iconImageViews;
    SBHLibraryIndicatorIconSettings *_iconSettings;
    SBHIconImageCache *_iconImageCache;
}


@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (copy, nonatomic) NSString *backdropGroupNamespace; // ivar: _backdropGroupNamespace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (nonatomic, getter=isInnerIconImageInfoFrozen) BOOL innerIconImageInfoFrozen; // ivar: _innerIconImageInfoFrozen
@property (copy, nonatomic) NSArray *innerIcons; // ivar: _innerIcons
@property (nonatomic) NSUInteger numberOfCategories; // ivar: _numberOfCategories
@property (nonatomic, getter=isOverlapping) BOOL overlapping; // ivar: _overlapping
@property (readonly) Class superclass;


-(CGFloat)_innerIconEdgeSpacingFraction;
-(CGFloat)_innerIconInterSpacingFraction;
-(CGFloat)alphaForStackedViewAtIndex:(NSUInteger)arg0 ;
-(id)_scalingAnimationSettingsForStackedViewAtIndex:(NSUInteger)arg0 scale:(*CGFloat)arg1 ;
-(id)backgroundViewForIndex:(NSUInteger)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)matchingCategoryStackView;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )frameForStackedViewAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )visibleContentFrame;
-(struct SBIconImageInfo )_innerIconImageInfo;
-(void)_appendConfiguredPodBackgroundView;
-(void)_reconfigurePodBackgroundViews;
-(void)_removeLastPodBackgroundView;
-(void)_updateIconImageViewAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateIconImageViewsAnimated:(BOOL)arg0 ;
-(void)iconImageCache:(id)arg0 didUpdateImageForIcon:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif