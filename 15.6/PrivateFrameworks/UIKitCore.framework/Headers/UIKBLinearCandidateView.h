// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBLINEARCANDIDATEVIEW_H
#define UIKBLINEARCANDIDATEVIEW_H



#import "UIKBHandwritingCandidateView.h"

@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView



-(NSUInteger)focusableVariantCount;
-(void)refreshSelectedCandidate;
-(void)updateCandidateKey;


@end


#endif