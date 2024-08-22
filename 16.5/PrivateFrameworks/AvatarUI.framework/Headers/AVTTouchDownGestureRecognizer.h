// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTTOUCHDOWNGESTURERECOGNIZER_H
#define AVTTOUCHDOWNGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSString, NSHashTable;
@protocol UIGestureRecognizerDelegate;



@interface AVTTouchDownGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>



@property (nonatomic) BOOL allowsTouchesToPassThrough; // ivar: _allowsTouchesToPassThrough
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *recognizersRequiredToFail; // ivar: _recognizersRequiredToFail
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)init;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_configure;
-(void)requireGestureRecognizerToFail:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif