// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBBLURREDKEYVIEW_H
#define UIKBBLURREDKEYVIEW_H



#import "UIKBContainerKeyView.h"
#import "UIKBBackdropView.h"

@interface UIKBBlurredKeyView : UIKBContainerKeyView {
    UIKBBackdropView *_backdropView;
}




-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(void)layoutSubviews;
-(void)setRenderConfig:(id)arg0 ;


@end


#endif