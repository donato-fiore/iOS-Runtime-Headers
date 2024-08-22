// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROTWOLABELBUTTON_H
#define MIROTWOLABELBUTTON_H

@class UIButton, NSParagraphStyle, UIFont, NSString;



@interface MiroTwoLabelButton : UIButton

@property (retain, nonatomic) NSParagraphStyle *defaultParagraphStyle; // ivar: _defaultParagraphStyle
@property (retain, nonatomic) UIFont *primaryLabelFont;
@property (retain, nonatomic) NSString *primaryLabelText; // ivar: _primaryLabelText
@property (retain, nonatomic) UIFont *secondaryLabelFont; // ivar: _secondaryLabelFont
@property (retain, nonatomic) NSString *secondaryLabelText; // ivar: _secondaryLabelText
@property (nonatomic) BOOL titleIsDirty; // ivar: _titleIsDirty


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_syncButtonState;
-(void)_updateAttributedTitle;
-(void)awakeFromNib;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif