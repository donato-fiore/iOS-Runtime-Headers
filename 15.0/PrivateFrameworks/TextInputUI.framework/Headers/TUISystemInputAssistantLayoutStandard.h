// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUISYSTEMINPUTASSISTANTLAYOUTSTANDARD_H
#define TUISYSTEMINPUTASSISTANTLAYOUTSTANDARD_H



#import "TUISystemInputAssistantLayout.h"

@interface TUISystemInputAssistantLayoutStandard : TUISystemInputAssistantLayout

@property (nonatomic) BOOL isSplit; // ivar: _isSplit
@property (nonatomic) CGFloat leftSplitWidth; // ivar: _leftSplitWidth
@property (nonatomic) CGFloat rightSplitWidth; // ivar: _rightSplitWidth


-(void)_layoutViewSet:(id)arg0 forFixedCenterViewWidth:(CGFloat)arg1 inBounds:(struct CGRect )arg2 forAssistantView:(id)arg3 ;
-(void)_layoutViewSet:(id)arg0 forFlexibleCenterViewInBounds:(struct CGRect )arg1 forAssistantView:(id)arg2 ;
-(void)configureButtonBarsInViewSet:(id)arg0 forApplicationAssistantItem:(id)arg1 withSystemAssistantItem:(id)arg2 withAssistantView:(id)arg3 ;
-(void)layoutViewSet:(id)arg0 inBounds:(struct CGRect )arg1 forAssistantView:(id)arg2 ;


@end


#endif