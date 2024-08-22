// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10REALITYKIT34ENTITYTRANSLATIONGESTURERECOGNIZER_H
#define _TTC10REALITYKIT34ENTITYTRANSLATIONGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface _TtC10RealityKit34EntityTranslationGestureRecognizer : UIGestureRecognizer {
    ? entity;
    ? startingWorldLocation;
    ? lastWorldLocation;
    ? touchHeight;
    ? velocity;
    ? lastTranslation;
    ? lastFrameTime;
    ? startingScreenLocation;
    ? lastScreenLocation;
    ? hasBegun;
}




-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif