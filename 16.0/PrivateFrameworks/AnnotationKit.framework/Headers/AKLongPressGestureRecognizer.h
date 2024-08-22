// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKLONGPRESSGESTURERECOGNIZER_H
#define AKLONGPRESSGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer, NSString;
@protocol AKPenDetectionGestureRecognizerProtocol;



@interface AKLongPressGestureRecognizer : UILongPressGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL penGestureDetected; // ivar: _penGestureDetected
@property (readonly) Class superclass;


-(void)_checkTouchesForStylus:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif