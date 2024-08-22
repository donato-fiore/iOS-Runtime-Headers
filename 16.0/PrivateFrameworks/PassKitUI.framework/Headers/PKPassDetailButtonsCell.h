// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSDETAILBUTTONSCELL_H
#define PKPASSDETAILBUTTONSCELL_H



#import "PKTableViewCell.h"
#import "PKPaymentPassActionWidgetView.h"

@interface PKPassDetailButtonsCell : PKTableViewCell {
    PKPaymentPassActionWidgetView *_widgetView;
}




-(BOOL)hasEnabledWidgets;
-(id)initWithReuseIdentifier:(id)arg0 widgetViewStyle:(NSUInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setAccount:(id)arg0 ;
-(void)setCurrentUser:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPaymentPass:(id)arg0 ;
-(void)setPeerPaymentAccount:(id)arg0 ;


@end


#endif