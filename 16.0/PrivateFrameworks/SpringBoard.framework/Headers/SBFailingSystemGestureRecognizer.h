// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFAILINGSYSTEMGESTURERECOGNIZER_H
#define SBFAILINGSYSTEMGESTURERECOGNIZER_H

@class UIGestureRecognizer;
@protocol SBSystemGestureRecognizerDelegate;



@interface SBFailingSystemGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) NSObject<SBSystemGestureRecognizerDelegate> *delegate;


-(id)init;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif