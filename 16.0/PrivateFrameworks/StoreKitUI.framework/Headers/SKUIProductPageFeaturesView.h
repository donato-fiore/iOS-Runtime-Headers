// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPRODUCTPAGEFEATURESVIEW_H
#define SKUIPRODUCTPAGEFEATURESVIEW_H

@class UIView, NSMutableArray, UILabel, NSString;


#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"

@interface SKUIProductPageFeaturesView : UIView {
    UIView *_bottomBorderView;
    NSMutableArray *_featureViews;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) NSInteger features; // ivar: _features
@property (nonatomic) NSUInteger gameCenterFeatures; // ivar: _gameCenterFeatures
@property (copy, nonatomic) NSString *title;


-(id)_gameCenterStringWithFeatures:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif