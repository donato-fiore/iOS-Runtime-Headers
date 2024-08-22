// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKTOUCHACTIONGESTURERECOGNIZER_H
#define WKTOUCHACTIONGESTURERECOGNIZER_H

@class UIGestureRecognizer;
@protocol WKTouchActionGestureRecognizerDelegate;



@interface WKTouchActionGestureRecognizer : UIGestureRecognizer {
    HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>, WTF::HashTableTraits> _touchActionsByTouchIdentifier;
    id<WKTouchActionGestureRecognizerDelegate> *_touchActionDelegate;
}




-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTouchActionDelegate:(id)arg0 ;
-(void)_updateState;
-(void)clearTouchActionsForTouchIdentifier:(unsigned int)arg0 ;
-(void)setTouchActions:(struct OptionSet<WebCore::TouchAction> )arg0 forTouchIdentifier:(unsigned int)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif