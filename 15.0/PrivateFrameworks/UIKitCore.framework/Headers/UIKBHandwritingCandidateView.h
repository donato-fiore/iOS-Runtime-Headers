// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBHANDWRITINGCANDIDATEVIEW_H
#define UIKBHANDWRITINGCANDIDATEVIEW_H



#import "UIKBCandidateView.h"

@interface UIKBHandwritingCandidateView : UIKBCandidateView



+(CGFloat)shadowYForBounds:(struct CGRect )arg0 shadowHeight:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(void)updateCandidateKey;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;


@end


#endif