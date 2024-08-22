// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUICANDIDATELABEL_H
#define TUICANDIDATELABEL_H

@class UIView, UIFont, NSString, UIColor;



@interface TUICandidateLabel : UIView

@property (nonatomic) BOOL adjustsFontSizeToFitWidth; // ivar: _adjustsFontSizeToFitWidth
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


+(CGFloat)lineWidthForText:(id)arg0 font:(id)arg1 layoutOrientation:(NSInteger)arg2 ;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct __CTLine *)createLineFromAttributedText:(id)arg0 ;
-(void)commonInit;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif