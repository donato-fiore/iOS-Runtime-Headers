// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TWOPARTTEXTLABEL_H
#define TWOPARTTEXTLABEL_H

@class UILabel, NSString;



@interface TwoPartTextLabel : UILabel {
    NSString *_secondTextPart;
    CGSize _part2Size;
    CGFloat _minPart2Width;
}


@property (nonatomic) BOOL strikethroughPart1; // ivar: _strikethroughPart1
@property (nonatomic) BOOL strikethroughPart2; // ivar: _strikethroughPart2


-(BOOL)hasTwoParts;
-(CGFloat)rightmostDisplayedPartWidth;
-(id)description;
-(struct CGSize )idealSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )textPart2Size;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setMinimumPart2Width:(CGFloat)arg0 ;
-(void)setTextPart1:(id)arg0 ;
-(void)setTextPart1:(id)arg0 part2:(id)arg1 ;


@end


#endif