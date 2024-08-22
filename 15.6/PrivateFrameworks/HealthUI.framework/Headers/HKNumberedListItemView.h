// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKNUMBEREDLISTITEMVIEW_H
#define HKNUMBEREDLISTITEMVIEW_H

@class UIView, UILabel;



@interface HKNumberedListItemView : UIView

@property (nonatomic) NSUInteger number; // ivar: _number
@property (retain, nonatomic) UILabel *numberLabel; // ivar: _numberLabel
@property (retain, nonatomic) UIView *numberLabelBackground; // ivar: _numberLabelBackground


+(id)createNumberedViewWithInteger:(NSUInteger)arg0 ;
+(struct CGSize )listItemSize;
-(id)initWithInteger:(NSUInteger)arg0 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;


@end


#endif