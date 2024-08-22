// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHARTTITLELABEL_H
#define CHARTTITLELABEL_H

@class UIView;


#import "LabelSequenceView.h"
#import "Stock.h"

@interface ChartTitleLabel : UIView {
    LabelSequenceView *_leftView;
    LabelSequenceView *_rightView;
    CGFloat _width;
    Stock *_stock;
    Stock *_deferredStock;
}




-(id)init;
-(void)_stockWillBeRemoved:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareStringsForDeferredStockIfNeeded;
-(void)prepareStringsWithStock:(id)arg0 width:(CGFloat)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLabelsHidden:(BOOL)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;


@end


#endif