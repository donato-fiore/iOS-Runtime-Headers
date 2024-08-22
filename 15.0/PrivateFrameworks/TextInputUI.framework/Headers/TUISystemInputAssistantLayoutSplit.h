// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUISYSTEMINPUTASSISTANTLAYOUTSPLIT_H
#define TUISYSTEMINPUTASSISTANTLAYOUTSPLIT_H



#import "TUISystemInputAssistantLayout.h"

@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout

@property (nonatomic) CGFloat leftSplitWidth; // ivar: _leftSplitWidth
@property (nonatomic) CGFloat rightSplitWidth; // ivar: _rightSplitWidth


-(BOOL)usesUnifiedButtonBar;
-(id)init;
-(void)configureButtonBarsInViewSet:(id)arg0 forApplicationAssistantItem:(id)arg1 withSystemAssistantItem:(id)arg2 withAssistantView:(id)arg3 ;
-(void)layoutViewSet:(id)arg0 inBounds:(struct CGRect )arg1 forAssistantView:(id)arg2 ;


@end


#endif