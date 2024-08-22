// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKSTOREBUTTON_H
#define TLKSTOREBUTTON_H

@class UIButton, UIView, UIFont, NSString;


#import "TLKProminenceView.h"
#import "TLKLabel.h"
#import "TLKRichText.h"

@interface TLKStoreButton : UIButton

@property (retain) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat cornerRadius;
@property (copy, nonatomic) UIFont *font;
@property (retain) TLKProminenceView *highlightView; // ivar: _highlightView
@property BOOL isEmphasized; // ivar: _isEmphasized
@property (retain) TLKLabel *label; // ivar: _label
@property (copy, nonatomic) TLKRichText *richTitle; // ivar: _richTitle
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL useCompactMode; // ivar: _useCompactMode


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif