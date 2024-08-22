// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSTARHISTOGRAM_H
#define _TVSTARHISTOGRAM_H

@class UIView, UIColor, NSArray, UIImage;



@interface _TVStarHistogram : UIView

@property (retain, nonatomic) UIColor *barEmptyColor; // ivar: _barEmptyColor
@property (retain, nonatomic) UIColor *barFillColor; // ivar: _barFillColor
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (copy, nonatomic) NSArray *starBars; // ivar: _starBars
@property (retain, nonatomic) UIImage *starImage; // ivar: _starImage


+(id)_histogramViewWithElement:(id)arg0 existingView:(id)arg1 ;
+(id)histogramViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif