// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGECOPYRIGHTVIEW_H
#define SKUIPRODUCTPAGECOPYRIGHTVIEW_H

@class UIView, UILabel, NSString;


#import "SKUIColorScheme.h"

@interface SKUIProductPageCopyrightView : UIView {
    UILabel *_copyrightLabel;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (retain, nonatomic) NSString *copyrightString;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif