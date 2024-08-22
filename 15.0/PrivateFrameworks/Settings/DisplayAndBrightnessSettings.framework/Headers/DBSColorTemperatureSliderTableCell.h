// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DBSCOLORTEMPERATURESLIDERTABLECELL_H
#define DBSCOLORTEMPERATURESLIDERTABLECELL_H

@class PSSliderTableCell, UILabel;



@interface DBSColorTemperatureSliderTableCell : PSSliderTableCell {
    UILabel *_coolerLabel;
    UILabel *_warmerLabel;
    CGFloat _horizontalMargin;
    CGFloat _verticalMargin;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif