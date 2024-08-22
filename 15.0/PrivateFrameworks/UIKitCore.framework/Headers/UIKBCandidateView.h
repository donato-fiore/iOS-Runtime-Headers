// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBCANDIDATEVIEW_H
#define UIKBCANDIDATEVIEW_H



#import "UIKBKeyView.h"
#import "UIView.h"

@interface UIKBCandidateView : UIKBKeyView

@property (retain, nonatomic) UIView *candidateKey; // ivar: _candidateKey
@property (nonatomic) ? visualStyling; // ivar: _visualStyling


-(BOOL)isTenKey;
-(id)candidateList;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(void)clearCandidateKey;
-(void)dealloc;
-(void)displayLayer:(id)arg0 ;
-(void)updateCandidateKey;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;


@end


#endif