// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCROLLVIEWKNOBLONGPRESSGESTURERECOGNIZER_H
#define UISCROLLVIEWKNOBLONGPRESSGESTURERECOGNIZER_H



#import "UILongPressGestureRecognizer.h"

@interface UIScrollViewKnobLongPressGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic) BOOL forPointer; // ivar: _forPointer


-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif