// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCURRENTTIMECHEVRONBUTTON_H
#define HKCURRENTTIMECHEVRONBUTTON_H

@class UIButton;



@interface HKCurrentTimeChevronButton : UIButton

@property (nonatomic) NSInteger chevronDirection; // ivar: _chevronDirection


-(id)initWithChevronDirection:(NSInteger)arg0 ;
-(struct CGRect )_squareRectWithDimension:(CGFloat)arg0 chevronDirection:(NSInteger)arg1 ;
-(struct CGRect )backgroundRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(void)_updateButtonAppearence;


@end


#endif