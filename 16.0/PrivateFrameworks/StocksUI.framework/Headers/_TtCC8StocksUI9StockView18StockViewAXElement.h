// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC8STOCKSUI9STOCKVIEW18STOCKVIEWAXELEMENT_H
#define _TTCC8STOCKSUI9STOCKVIEW18STOCKVIEWAXELEMENT_H

@class UIAccessibilityElement, NSAttributedString, NSArray;



@interface _TtCC8StocksUI9StockView18StockViewAXElement : UIAccessibilityElement {
    ? stockView;
}


@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic) CGRect accessibilityFrame;
@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;


-(id)init;
-(id)initWithAccessibilityContainer:(id)arg0 ;


@end


#endif