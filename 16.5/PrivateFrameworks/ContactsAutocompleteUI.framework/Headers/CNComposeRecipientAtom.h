// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCOMPOSERECIPIENTATOM_H
#define CNCOMPOSERECIPIENTATOM_H

@class UITextInputTraits;
@protocol CNComposeRecipientAtomDelegate;


#import "CNAtomView.h"
#import "CNComposeRecipient.h"

@interface CNComposeRecipientAtom : CNAtomView {
    UITextInputTraits *_traits;
    BOOL _wasSelectedWhenTouchesBegan;
    BOOL _touchesWereCancelled;
    BOOL _touchBeganWithShiftDown;
}


@property (weak, nonatomic) NSObject<CNComposeRecipientAtomDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNComposeRecipient *recipient; // ivar: _recipient


-(id)initWithFrame:(struct CGRect )arg0 recipient:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 recipient:(id)arg1 presentationOptions:(NSUInteger)arg2 ;
-(id)keyCommands;
-(id)menuConfigurationForChevronButton;
-(void)handleFirstTap;
-(void)handleTouchAndHold;
-(void)moveLeft:(id)arg0 ;
-(void)moveRight:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif