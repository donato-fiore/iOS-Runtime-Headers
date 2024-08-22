// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABBARBUTTONLABEL_H
#define UITABBARBUTTONLABEL_H



#import "UILabel.h"
#import "_UITabBarItemAppearanceStorage.h"
#import "UITabBarButton.h"
#import "UIColor.h"

@interface UITabBarButtonLabel : UILabel {
    CGFloat _boundsWidth;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    BOOL _isSelected;
    BOOL _isHighlighted;
    BOOL _hasSeenIdiom;
}


@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // ivar: _appearanceGuideClass
@property (weak, nonatomic) UITabBarButton *tabBarButton; // ivar: _tabBarButton
@property (retain, nonatomic) UIColor *unselectedTintColor; // ivar: _unselectedTintColor


+(CGFloat)_fontPointSizeForIdiom:(NSInteger)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_shouldCeilSizeToViewScale;
-(NSInteger)_idiomForFontGivenIdiom:(NSInteger)arg0 ;
-(id)_fontForIdiom:(NSInteger)arg0 ;
-(id)_fontForIdiom:(NSInteger)arg0 forTabBarDisplayStyle:(NSInteger)arg1 ;
-(id)_titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTabBarDisplayStyle:(NSInteger)arg0 ;
-(void)_UIAppearance_setBadgeColor:(id)arg0 ;
-(void)_UIAppearance_setBadgeTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset )arg0 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(id)arg1 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_legacyApperance_updateTextColorsForState;
-(void)_setBadgeColor:(id)arg0 ;
-(void)_setBadgeTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setTitlePositionAdjustment:(struct UIOffset )arg0 ;
-(void)_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_updateForFontChangeWithIdiom:(NSInteger)arg0 ;
-(void)_updateLabelsVibrancy;
-(void)resizeToFitWidth:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTextColorsForState;


@end


#endif