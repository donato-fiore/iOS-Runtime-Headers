// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFLASHBUTTON_H
#define CAMFLASHBUTTON_H

@class UIImageView, NSString;
@protocol CAMAccessibilityHUDImageProvider;


#import "CAMExpandableMenuButton.h"

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>



@property (readonly, nonatomic) UIImageView *_glyphView; // ivar: __glyphView
@property (readonly, nonatomic) UIImageView *_warningIndicatorView; // ivar: __warningIndicatorView
@property (nonatomic) BOOL allowsAutomaticFlash; // ivar: _allowsAutomaticFlash
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger flashMode;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUnavailable) BOOL unavailable; // ivar: _unavailable


-(BOOL)shouldIgnoreMenuInteraction;
-(BOOL)wantsSelectedItemToBeVisible;
-(CGFloat)collapsedSelectedLabelHorizontalMargin;
-(CGFloat)padHeaderViewContentInsetLeft;
-(NSInteger)indexForMode:(NSInteger)arg0 ;
-(NSInteger)modeForIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfMenuItems;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg0 ;
-(id)headerView;
-(id)imageForAccessibilityHUD;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)titleForMenuItemAtIndex:(NSInteger)arg0 ;
-(void)_commonCAMFlashButtonInitialization;
-(void)_updateCurrentGlyphImage;
-(void)prepareHeaderViewForExpanding:(BOOL)arg0 ;
-(void)reloadData;


@end


#endif