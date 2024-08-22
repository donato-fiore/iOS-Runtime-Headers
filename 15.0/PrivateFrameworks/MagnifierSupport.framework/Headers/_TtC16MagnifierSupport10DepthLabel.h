// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16MAGNIFIERSUPPORT10DEPTHLABEL_H
#define _TTC16MAGNIFIERSUPPORT10DEPTHLABEL_H

@class UILabel, NSAttributedString;



@interface _TtC16MagnifierSupport10DepthLabel : UILabel {
    ? kBottomInset;
    ? kDigitFont;
    ? kUnitFont;
    ? kSpaceFont;
    ? _textHeight;
    ? _rightInset;
    ? _topInset;
    ? _bottomInset;
}


@property (nonatomic, retain) NSAttributedString *attributedText;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)rotateIfPossibleTo:(NSInteger)arg0 ;


@end


#endif