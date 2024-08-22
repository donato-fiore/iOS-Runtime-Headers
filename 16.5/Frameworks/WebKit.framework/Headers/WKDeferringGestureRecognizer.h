// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKDEFERRINGGESTURERECOGNIZER_H
#define WKDEFERRINGGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface WKDeferringGestureRecognizer : UIGestureRecognizer {
    WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> _deferringGestureDelegate;
}


@property (nonatomic) BOOL immediatelyFailsAfterTouchEnd; // ivar: _immediatelyFailsAfterTouchEnd


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)shouldDeferGestureRecognizer:(id)arg0 ;
-(id)initWithDeferringGestureDelegate:(id)arg0 ;
-(void)endDeferral:(BOOL)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif