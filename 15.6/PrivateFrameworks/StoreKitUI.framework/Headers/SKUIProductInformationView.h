// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTINFORMATIONVIEW_H
#define SKUIPRODUCTINFORMATIONVIEW_H

@class UIView, NSMutableArray, UILabel, NSArray, NSString;


#import "SKUIColorScheme.h"

@interface SKUIProductInformationView : UIView {
    NSMutableArray *_imageValues;
    NSMutableArray *_keyLabels;
    UIView *_separatorView;
    UILabel *_titleLabel;
    NSMutableArray *_valueLabels;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic) BOOL hidesSeparatorView;
@property (retain, nonatomic) NSArray *informationLines; // ivar: _informationLines
@property (retain, nonatomic) NSString *title;


-(CGFloat)_keyWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif