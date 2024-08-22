// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHFOCUSPROXYVIEW_H
#define SBHFOCUSPROXYVIEW_H

@class UIView, UIView<SBHFocusProxyable>;



@interface SBHFocusProxyView : UIView

@property (readonly, nonatomic) CGFloat padding; // ivar: _padding
@property (readonly, weak, nonatomic) UIView<SBHFocusProxyable> *proxyableView; // ivar: _proxyableView


-(BOOL)canBecomeFocused;
-(id)initWithProxyableView:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif