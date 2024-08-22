// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCOLOREDBUTTON_H
#define HUCOLOREDBUTTON_H

@class UIButton;



@interface HUColoredButton : UIButton

@property (nonatomic) BOOL backgroundColorFollowsTintColor; // ivar: _backgroundColorFollowsTintColor
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat highlightedAlpha; // ivar: _highlightedAlpha
@property (nonatomic) CGFloat highlightedTextAlpha; // ivar: _highlightedTextAlpha


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 highlightedAlpha:(CGFloat)arg1 highlightedTextAlpha:(CGFloat)arg2 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif