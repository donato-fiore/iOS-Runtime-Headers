// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARCARPLAYRECORDINGTIMEITEMVIEW_H
#define UISTATUSBARCARPLAYRECORDINGTIMEITEMVIEW_H



#import "UIStatusBarCarPlayTimeItemView.h"
#import "_UIStatusBarRoundedCornerView.h"

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {
    _UIStatusBarRoundedCornerView *_pillView;
}




-(BOOL)allowsUserInteraction;
-(BOOL)canBecomeFocused;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)usesAdvancedActions;
-(CGFloat)extraRightPadding;
-(NSInteger)buttonType;
-(NSInteger)textStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_pillFrame;
-(void)_updatePillFrame;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)movedToSuperview:(id)arg0 ;
-(void)removeFromSuperview;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif