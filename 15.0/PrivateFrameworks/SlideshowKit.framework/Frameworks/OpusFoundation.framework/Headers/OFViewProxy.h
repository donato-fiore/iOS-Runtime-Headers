// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFVIEWPROXY_H
#define OFVIEWPROXY_H

@class UIView, NSMutableArray;


#import "OFUIViewController.h"

@interface OFViewProxy : UIView {
    NSMutableArray *_layoutSteps;
    *? _layoutInfo;
}


@property (nonatomic, getter=isMagicLayoutEnabled) BOOL magicLayoutEnabled; // ivar: _magicLayoutEnabled
@property (nonatomic) OFUIViewController *viewControllerProxy; // ivar: _viewControllerProxy


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addLayoutStep:(id)arg0 ;
-(void)addLayoutSteps:(id)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)layoutSubviews;
-(void)runMagicLayout;
-(void)setAnchorPoint:(struct CGPoint )arg0 ;


@end


#endif