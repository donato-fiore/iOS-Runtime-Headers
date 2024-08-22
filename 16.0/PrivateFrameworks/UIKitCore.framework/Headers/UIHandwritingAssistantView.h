// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIHANDWRITINGASSISTANTVIEW_H
#define UIHANDWRITINGASSISTANTVIEW_H

@class TUISystemInputAssistantView;


#import "UIKBKeyView.h"
#import "UIKBHandwritingCandidateView.h"
#import "UIKeyboardCandidatePocketShadow.h"

@interface UIHandwritingAssistantView : UIKBKeyView

@property (retain, nonatomic) UIKBHandwritingCandidateView *candidateView; // ivar: _candidateView
@property (retain, nonatomic) UIKeyboardCandidatePocketShadow *rightBorder; // ivar: _rightBorder
@property (retain, nonatomic) TUISystemInputAssistantView *systemInputAssistantView; // ivar: _systemInputAssistantView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)candidateList;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(struct CGRect )assistantFrameForKeyplane:(id)arg0 key:(id)arg1 ;
-(void)dimKeys:(id)arg0 ;
-(void)displayLayer:(id)arg0 ;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;


@end


#endif