// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKTEXTVIEW_H
#define AKTEXTVIEW_H

@class UITextView;



@interface AKTextView : UITextView



-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isBlockedAction:(SEL)arg0 ;
-(id)textInputTraits;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;


@end


#endif