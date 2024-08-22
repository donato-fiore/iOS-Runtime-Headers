// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKACTIONMENUGESTURERECOGNIZERBUTTON_H
#define CKACTIONMENUGESTURERECOGNIZERBUTTON_H

@class UIButton, NSDate;
@protocol CKActionMenuGestureRecognizerButtonDelegate;

#import <Foundation/Foundation.h>

#import "CKActionMenuGestureRecognizer.h"

@interface CKActionMenuGestureRecognizerButton : NSObject

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (weak, nonatomic) NSObject<CKActionMenuGestureRecognizerButtonDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *gestureDidBeginDate; // ivar: _gestureDidBeginDate
@property (retain, nonatomic) CKActionMenuGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer


+(id)actionMenuGestureRecognizerButtonWithButton:(id)arg0 ;
-(id)initWithGestureRecognizer:(id)arg0 button:(id)arg1 ;
-(void)gestureRecognized:(id)arg0 ;
-(void)touchDownButton:(id)arg0 ;
-(void)touchUpInsideButton:(id)arg0 ;
-(void)touchUpOutsideButton:(id)arg0 ;


@end


#endif