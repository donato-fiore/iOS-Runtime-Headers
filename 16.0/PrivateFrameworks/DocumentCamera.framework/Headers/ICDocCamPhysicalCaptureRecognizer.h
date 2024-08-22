// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMPHYSICALCAPTURERECOGNIZER_H
#define ICDOCCAMPHYSICALCAPTURERECOGNIZER_H

@class UIGestureRecognizer, NSArray;



@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer

@property (nonatomic) NSInteger activeButton; // ivar: _activeButton
@property (copy, nonatomic) NSArray *desiredButtons; // ivar: _desiredButtons
@property (nonatomic) NSInteger physicalButtonType; // ivar: _physicalButtonType
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(NSInteger)_captureButtonForPhysicalButtonType:(NSInteger)arg0 ;
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