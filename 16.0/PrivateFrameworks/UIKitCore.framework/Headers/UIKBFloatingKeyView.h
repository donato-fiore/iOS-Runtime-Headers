// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBFLOATINGKEYVIEW_H
#define UIKBFLOATINGKEYVIEW_H



#import "UIKBContainerKeyView.h"
#import "_UIFloatingContentView.h"

@interface UIKBFloatingKeyView : UIKBContainerKeyView {
    _UIFloatingContentView *_floatingContentView;
}


@property (readonly, nonatomic) _UIFloatingContentView *floatingContentView;


-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 renderTraits:(id)arg3 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;


@end


#endif