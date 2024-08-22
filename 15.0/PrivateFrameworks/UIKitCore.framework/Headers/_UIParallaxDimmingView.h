// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPARALLAXDIMMINGVIEW_H
#define _UIPARALLAXDIMMINGVIEW_H



#import "UIView.h"
#import "UIImageView.h"
#import "UIColor.h"

@interface _UIParallaxDimmingView : UIView {
    UIImageView *leftEdgeFade;
}


@property (retain, nonatomic) UIView *addingSubview; // ivar: _addingSubview
@property (nonatomic) BOOL backgroundIsDimmed; // ivar: _backgroundIsDimmed
@property (retain, nonatomic) UIColor *dimmingColor; // ivar: _dimmingColor


-(id)_basicAnimationWithKeyPath:(id)arg0 ;
-(id)defaultBorderColor;
-(id)initViewWrappingView:(id)arg0 withLeftBorder:(CGFloat)arg1 shouldReverseLayoutDirection:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 overrideDimmingColor:(id)arg1 ;
-(void)_updateLeftEdgeFade:(BOOL)arg0 ;
-(void)crossFade;
-(void)didMoveToWindow;


@end


#endif