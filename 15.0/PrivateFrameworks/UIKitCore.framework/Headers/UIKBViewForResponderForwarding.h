// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBVIEWFORRESPONDERFORWARDING_H
#define UIKBVIEWFORRESPONDERFORWARDING_H



#import "UIView.h"

@interface UIKBViewForResponderForwarding : UIView

@property (retain, nonatomic) UIView *responderForForwarding; // ivar: _responderForForwarding


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif