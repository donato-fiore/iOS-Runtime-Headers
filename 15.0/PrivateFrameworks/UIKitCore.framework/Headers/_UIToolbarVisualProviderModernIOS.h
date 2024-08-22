// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITOOLBARVISUALPROVIDERMODERNIOS_H
#define _UITOOLBARVISUALPROVIDERMODERNIOS_H

@class UIToolbarVisualProvider, NSString;
@protocol _UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver;


#import "_UIBarBackground.h"
#import "_UIBarBackgroundLayout.h"
#import "UIView.h"
#import "_UIToolbarContentView.h"

@interface _UIToolbarVisualProviderModernIOS : UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver>

 {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    _UIToolbarContentView *_contentView;
    NSInteger _itemDistribution;
    BOOL _useModernAppearance;
    CGFloat _backgroundTransitionProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)toolbarIsSmall;
-(BOOL)useModernAppearance;
-(CGFloat)backgroundTransitionProgress;
-(NSInteger)itemDistribution;
-(id)_currentCustomBackground;
-(id)appearanceObserver;
-(id)currentBackgroundView;
-(id)traitCollectionForChild:(id)arg0 baseTraitCollection:(id)arg1 ;
-(struct CGRect )_backgroundFrame;
-(struct CGRect )backgroundFrame;
-(struct CGSize )defaultSizeForOrientation:(NSInteger)arg0 ;
-(void)_itemCustomViewDidChange:(id)arg0 fromView:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg0 ;
-(void)_itemDidChangeHiddenState:(id)arg0 ;
-(void)_itemDidChangeSelectionState:(id)arg0 ;
-(void)_itemDidChangeWidth:(id)arg0 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg0 ;
-(void)_setViewOwnersAndUpdateContentViewForItems:(id)arg0 withOldItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundLegacyForPosition:(NSInteger)arg0 ;
-(void)_updateBackgroundModern;
-(void)_updateContentView;
-(void)appearance:(id)arg0 categoriesChanged:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)prepare;
-(void)setBackgroundTransitionProgress:(CGFloat)arg0 ;
-(void)setCustomBackgroundView:(id)arg0 ;
-(void)setItemDistribution:(NSInteger)arg0 ;
-(void)setUseModernAppearance:(BOOL)arg0 ;
-(void)updateAppearance;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;
-(void)updateBarBackground;
-(void)updateBarBackgroundSize;
-(void)updateBarForStyle:(NSInteger)arg0 ;
-(void)updateWithItems:(id)arg0 fromOldItems:(id)arg1 animate:(BOOL)arg2 ;


@end


#endif