// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFWEBFORMACCESSORYVIEWWRAPPER_H
#define SFWEBFORMACCESSORYVIEWWRAPPER_H

@class UIView;



@interface SFWebFormAccessoryViewWrapper : UIView {
    UIView *_webFormAccessoryView;
}


@property (nonatomic) CGFloat bottomBarHeight; // ivar: _bottomBarHeight


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWebFormAccessoryView:(id)arg0 bottomBarHeight:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif