// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPANGESTURERECOGNIZER_H
#define PDFPANGESTURERECOGNIZER_H

@class UIPanGestureRecognizer;



@interface PDFPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) BOOL didForcePress; // ivar: _didForcePress
@property (nonatomic) CGPoint locationOfFirstTouch; // ivar: _locationOfFirstTouch
@property (nonatomic) BOOL touchesDidHavePressure; // ivar: _touchesDidHavePressure


-(struct CGPoint )locationOfFirstTouchInView:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif