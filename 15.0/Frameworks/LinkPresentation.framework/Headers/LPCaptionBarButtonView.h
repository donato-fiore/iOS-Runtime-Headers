// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPCAPTIONBARBUTTONVIEW_H
#define LPCAPTIONBARBUTTONVIEW_H

@class UIButton;


#import "LPComponentView.h"
#import "LPCaptionButtonPresentationProperties.h"
#import "LPButtonStyle.h"

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    UIButton *_button;
    UIButton *_collapsedButton;
}


@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed


-(id)_createButton;
-(id)_createCollapsedButton;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 properties:(id)arg1 style:(id)arg2 ;
-(struct CGSize )collapsedSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)layoutComponentView;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif