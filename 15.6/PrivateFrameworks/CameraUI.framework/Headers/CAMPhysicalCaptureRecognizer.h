// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPHYSICALCAPTURERECOGNIZER_H
#define CAMPHYSICALCAPTURERECOGNIZER_H

@class UIGestureRecognizer, NSSet, NSArray;



@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) NSSet *activeButtons; // ivar: _activeButtons
@property (copy, nonatomic) NSArray *desiredButtons; // ivar: _desiredButtons
@property (nonatomic) NSInteger lastActiveButton; // ivar: _lastActiveButton
@property (nonatomic) NSInteger pressType; // ivar: _pressType
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(NSInteger)_captureButtonForPressType:(NSInteger)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_updateApplicationButtonStatus;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif