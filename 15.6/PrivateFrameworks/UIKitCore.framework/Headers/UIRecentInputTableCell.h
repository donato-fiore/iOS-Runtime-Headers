// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIRECENTINPUTTABLECELL_H
#define UIRECENTINPUTTABLECELL_H



#import "UITableViewCell.h"
#import "_UIFloatingContentView.h"
#import "UILabel.h"
#import "UITextInputTraits.h"

@interface UIRecentInputTableCell : UITableViewCell

@property (nonatomic) NSInteger blurEffectStyle; // ivar: _blurEffectStyle
@property (readonly, nonatomic) _UIFloatingContentView *floatingContentView;
@property (retain, nonatomic) UILabel *floatingLabel; // ivar: _floatingLabel
@property (retain, nonatomic) UITextInputTraits *textInputTraits; // ivar: _textInputTraits


+(id)backgroundColorForBlurEffectStyle:(NSInteger)arg0 ;
+(id)focusedTextColorForBlurEffectStyle:(NSInteger)arg0 ;
+(id)unfocusedTextColorForBlurEffectStyle:(NSInteger)arg0 ;
-(BOOL)_tvIsDarkMode;
-(void)_updateAppearance;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setInputText:(id)arg0 withBlurStyle:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif