// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIASSISTANTBARROUNDEDBUTTONVIEW_H
#define UIASSISTANTBARROUNDEDBUTTONVIEW_H



#import "UIView.h"
#import "UIAssistantBarRoundedButtonViewButton.h"

@interface UIAssistantBarRoundedButtonView : UIView {
    UIView *_shadowView;
}


@property (readonly, nonatomic) UIAssistantBarRoundedButtonViewButton *button; // ivar: _button
@property (nonatomic) BOOL dropShadow; // ivar: _dropShadow


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif