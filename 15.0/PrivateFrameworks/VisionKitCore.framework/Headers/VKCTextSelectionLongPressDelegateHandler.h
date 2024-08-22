// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCTEXTSELECTIONLONGPRESSDELEGATEHANDLER_H
#define VKCTEXTSELECTIONLONGPRESSDELEGATEHANDLER_H

@class NSString, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate, VKCTextSelectionLongPressHandlerDelegate;

#import <Foundation/Foundation.h>


@interface VKCTextSelectionLongPressDelegateHandler : NSObject <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCTextSelectionLongPressHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;


@end


#endif