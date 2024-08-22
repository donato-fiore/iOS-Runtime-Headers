// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIRELATIONSHIPGESTURERECOGNIZER_H
#define _UIRELATIONSHIPGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"

@interface _UIRelationshipGestureRecognizer : UIGestureRecognizer

@property (nonatomic) BOOL succeedsOnTouchesEnded; // ivar: _succeedsOnTouchesEnded


-(void)_fail;
-(void)_succeed;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif