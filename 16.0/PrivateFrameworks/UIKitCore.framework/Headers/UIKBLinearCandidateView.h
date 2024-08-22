// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBLINEARCANDIDATEVIEW_H
#define UIKBLINEARCANDIDATEVIEW_H



#import "UIKBHandwritingCandidateView.h"

@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView



-(NSUInteger)focusableVariantCount;
-(id)getConfiguration;
-(void)refreshSelectedCandidate;
-(void)refreshSelectedCandidateAnimated:(BOOL)arg0 ;
-(void)updateCandidateKey;


@end


#endif