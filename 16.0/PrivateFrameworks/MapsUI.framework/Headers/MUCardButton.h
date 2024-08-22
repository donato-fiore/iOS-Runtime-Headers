// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUCARDBUTTON_H
#define MUCARDBUTTON_H

@class UIView, UIButton, UIMenu, NSString;



@interface MUCardButton : UIView {
    UIButton *_actionButton;
    BOOL _isHovering;
}


@property (nonatomic) BOOL blurBackground; // ivar: _blurBackground
@property (nonatomic) BOOL drawBackground; // ivar: _drawBackground
@property (retain, nonatomic) UIMenu *menu;
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (readonly, nonatomic) UIButton *underlyingButton;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupButton;
-(void)_setupConstraints;
-(void)_setupDefaults;
-(void)_updateButtonAppearance;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;


@end


#endif