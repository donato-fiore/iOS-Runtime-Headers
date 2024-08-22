// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPROXYSCROLLVIEW_H
#define SKUIPROXYSCROLLVIEW_H

@class UIScrollView;
@protocol SKUIProxyScrollViewDelegate;



@interface SKUIProxyScrollView : UIScrollView

@property (nonatomic) NSObject<SKUIProxyScrollViewDelegate> *delegate;


-(void)didMoveToWindow;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif