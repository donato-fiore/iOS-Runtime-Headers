// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTEXTVIEW_H
#define AKTEXTVIEW_H

@class UITextView;
@protocol AKTextViewKeyCommandDelegate;



@interface AKTextView : UITextView

@property (weak) NSObject<AKTextViewKeyCommandDelegate> *keyCommandDelegate; // ivar: _keyCommandDelegate
@property NSInteger maximumNumberOfCharacters; // ivar: _maximumNumberOfCharacters


-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isBlockedAction:(SEL)arg0 ;
-(id)keyCommands;
-(id)textInputTraits;
-(void)handleBackTabCommand:(id)arg0 ;
-(void)handleTabCommand:(id)arg0 ;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;


@end


#endif