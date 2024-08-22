// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGLIFTGESTURERECOGNIZER_H
#define _UIDRAGLIFTGESTURERECOGNIZER_H



#import "UILongPressGestureRecognizer.h"

@interface _UIDragLiftGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic, getter=_isForPointer) BOOL isForPointer; // ivar: _isForPointer


-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif