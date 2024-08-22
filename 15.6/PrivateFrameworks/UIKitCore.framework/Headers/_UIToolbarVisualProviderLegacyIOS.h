// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITOOLBARVISUALPROVIDERLEGACYIOS_H
#define _UITOOLBARVISUALPROVIDERLEGACYIOS_H

@class UIToolbarVisualProvider;


#import "_UIBarBackground.h"
#import "_UIBarBackgroundLayoutLegacy.h"
#import "UIView.h"

@interface _UIToolbarVisualProviderLegacyIOS : UIToolbarVisualProvider {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
}




-(BOOL)toolbarIsSmall;
-(CGFloat)_edgeMarginForBorderedItem:(BOOL)arg0 isText:(BOOL)arg1 ;
-(id)_currentCustomBackground;
-(id)_positionToolbarButtons:(id)arg0 ignoringItem:(id)arg1 resetFontScaleAdjustment:(BOOL)arg2 actuallyRepositionButtons:(BOOL)arg3 ;
-(id)_repositionedItemsFromItems:(id)arg0 withBarButtonFrames:(*id)arg1 withHitRects:(*id)arg2 buttonIndexes:(*id)arg3 textButtonIndexes:(*id)arg4 ;
-(id)currentBackgroundView;
-(struct CGRect )backgroundFrame;
-(struct CGSize )defaultSizeForOrientation:(NSInteger)arg0 ;
-(void)_createViewsForItems:(id)arg0 ;
-(void)customViewChangedForButtonItem:(id)arg0 ;
-(void)drawBackgroundViewInRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg0 ;
-(void)setCustomBackgroundView:(id)arg0 ;
-(void)updateBackgroundGroupName;
-(void)updateBarBackground;
-(void)updateBarBackgroundSize;
-(void)updateBarForStyle:(NSInteger)arg0 ;
-(void)updateItemsForNewFrame:(id)arg0 ;
-(void)updateWithItems:(id)arg0 fromOldItems:(id)arg1 animate:(BOOL)arg2 ;


@end


#endif