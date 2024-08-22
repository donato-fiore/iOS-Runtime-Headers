// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI9STOCKVIEW_H
#define _TTC8STOCKSUI9STOCKVIEW_H

@class UIView;



@interface _TtC8StocksUI9StockView : UIView {
    ? symbolLabel;
    ? companyLabel;
    ? companyLabelLong;
    ? exchangeLabel;
    ? priceLabel;
    ? priceChangeButton;
    ? sparklineView;
    ? axElement;
    ? isSelected;
    ? revision;
    ? isEditing;
    ? makeAccessibilityCustomActions;
    ? accessibilityPriceString;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif