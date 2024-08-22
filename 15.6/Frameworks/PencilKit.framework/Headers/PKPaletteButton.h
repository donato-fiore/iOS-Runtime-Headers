// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTEBUTTON_H
#define PKPALETTEBUTTON_H

@class UIControl, UIButton, NSString, UIMenu, NSHashTable;
@protocol PKPaletteViewSizeScaling, PKPaletteButtonDelegate;



@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling>



@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCompactLayout; // ivar: _useCompactLayout


+(BOOL)_preventsAppearanceProxyCustomization;
+(id)UCBButton;
+(id)ellipsisButton;
+(id)emojiKeyboardButton;
+(id)keyboardButton;
+(id)plusButton;
+(id)redoButton;
+(id)returnKeyButton;
+(id)undoButton;
-(BOOL)_wantsCustomBackgroundColor;
-(BOOL)_wantsCustomTintColor;
-(id)_backgroundColor;
-(id)_tintColorForCurrentState;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_notifyIntrinsicContentSizeDidChange;
-(void)_updateUI;
-(void)addIntrinsicContentSizeObserver:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeIntrinsicContentSizeObserver:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif