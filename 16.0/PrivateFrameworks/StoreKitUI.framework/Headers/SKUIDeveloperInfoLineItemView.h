// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIDEVELOPERINFOLINEITEMVIEW_H
#define SKUIDEVELOPERINFOLINEITEMVIEW_H

@class UIView, UILabel;



@interface SKUIDeveloperInfoLineItemView : UIView {
    UILabel *_labelLabel;
    UIView *_separatorView;
    UILabel *_valueLabel;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset


-(id)initWithLabel:(id)arg0 value:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif