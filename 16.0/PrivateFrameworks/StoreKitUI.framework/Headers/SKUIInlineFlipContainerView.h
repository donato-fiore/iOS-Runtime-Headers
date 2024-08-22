// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIINLINEFLIPCONTAINERVIEW_H
#define SKUIINLINEFLIPCONTAINERVIEW_H

@class UIView;



@interface SKUIInlineFlipContainerView : UIView {
    UIView *_backView;
    UIView *_frontView;
}




-(id)initWithFrontView:(id)arg0 backView:(id)arg1 ;
-(void)flipToBackViewWithDuration:(CGFloat)arg0 options:(NSUInteger)arg1 completionBlock:(id)arg2 ;


@end


#endif