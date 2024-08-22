// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKOXYGENSATURATIONOVERRIDETAPGESTURERECOGNIZER_H
#define _HKOXYGENSATURATIONOVERRIDETAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;



@interface _HKOxygenSaturationOverrideTapGestureRecognizer : UITapGestureRecognizer <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif