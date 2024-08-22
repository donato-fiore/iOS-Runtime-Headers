// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMODERNCOMPOSERECIPIENTATOM_H
#define MFMODERNCOMPOSERECIPIENTATOM_H

@class UITextInputTraits;
@protocol MFComposeRecipientAtomDelegate;


#import "MFModernAtomView.h"
#import "MFComposeRecipient.h"

@interface MFModernComposeRecipientAtom : MFModernAtomView {
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    BOOL _wasSelectedWhenTouchesBegan;
    BOOL _touchesWereCancelled;
}


@property (weak, nonatomic) NSObject<MFComposeRecipientAtomDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) MFComposeRecipient *recipient;


-(id)initWithFrame:(struct CGRect )arg0 recipient:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 recipient:(id)arg1 presentationOptions:(NSUInteger)arg2 ;
-(id)keyCommands;
-(void)handleTouchAndHold;
-(void)moveLeft:(id)arg0 ;
-(void)moveRight:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif