// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTABBREVIATIONTAPGESTURERECOGNIZER_H
#define RTTABBREVIATIONTAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer;


#import "RTTUIAbbreviationView.h"

@interface RTTAbbreviationTapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) RTTUIAbbreviationView *abbrevationView; // ivar: _abbrevationView


-(void)ignoreTouch:(id)arg0 forEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif