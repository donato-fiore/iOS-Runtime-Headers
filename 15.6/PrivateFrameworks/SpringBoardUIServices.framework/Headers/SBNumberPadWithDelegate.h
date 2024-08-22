// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBNUMBERPADWITHDELEGATE_H
#define SBNUMBERPADWITHDELEGATE_H

@class TPNumberPad;
@protocol SBNumberPadDelegate;



@interface SBNumberPadWithDelegate : TPNumberPad

@property (weak, nonatomic) NSObject<SBNumberPadDelegate> *delegate; // ivar: _delegate


-(BOOL)touchAtPoint:(struct CGPoint )arg0 isCloseToButton:(id)arg1 ;
-(id)buttonForPoint:(struct CGPoint )arg0 forEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)buttonCancelled:(id)arg0 ;
-(void)buttonDown:(id)arg0 ;
-(void)buttonUp:(id)arg0 ;


@end


#endif