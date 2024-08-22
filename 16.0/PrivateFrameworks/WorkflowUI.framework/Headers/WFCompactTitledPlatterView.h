// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPACTTITLEDPLATTERVIEW_H
#define WFCOMPACTTITLEDPLATTERVIEW_H

@class PLPlatterView, WFIcon, NSString;
@protocol WFCompactTitledPlatterViewDelegate;


#import "WFCompactPlatterSashView.h"

@interface WFCompactTitledPlatterView : PLPlatterView

@property (weak, nonatomic) NSObject<WFCompactTitledPlatterViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WFIcon *icon;
@property (retain, nonatomic) WFCompactPlatterSashView *sashView; // ivar: _sashView
@property (retain, nonatomic) NSString *title;


-(struct CGRect )_mainContentFrame;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)configureSashViewIfNecessary;
-(void)layoutHeaderViews;
-(void)layoutSubviews;
-(void)setNeedsLayout;


@end


#endif