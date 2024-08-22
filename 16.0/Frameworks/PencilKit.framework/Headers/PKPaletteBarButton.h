// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEBARBUTTON_H
#define PKPALETTEBARBUTTON_H

@class UIBarButtonItem, UIView, NSString;
@protocol _UIBarButtonItemViewOwner;


#import "PKPaletteButton.h"

@interface PKPaletteBarButton : PKPaletteButton <_UIBarButtonItemViewOwner>



@property (readonly, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *menuProvider; // ivar: _menuProvider
@property (readonly) Class superclass;


+(id)_imageByApplyingDefaultImageSymbolConfigurationWithImage:(id)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithBarButtonItem:(id)arg0 ;
-(void)_checkCurrentBarButtonItemState;
-(void)_handleTouchUpInside:(id)arg0 event:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg0 fromView:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg0 ;
-(void)_itemDidChangeHiddenState:(id)arg0 ;
-(void)_itemDidChangeSelectionState:(id)arg0 ;
-(void)_itemDidChangeWidth:(id)arg0 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg0 ;
-(void)_updateForButtonItemChange;
-(void)_updateMenu;
-(void)layoutSubviews;
-(void)setScalingFactor:(CGFloat)arg0 ;
-(void)setTintColor:(id)arg0 ;


@end


#endif