// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUFOOTERCONTAINERVIEW_H
#define SUFOOTERCONTAINERVIEW_H

@class UIView;



@interface SUFooterContainerView : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (nonatomic, getter=isFooterVisible) BOOL footerVisible; // ivar: _footerVisible


-(void)layoutSubviews;


@end


#endif