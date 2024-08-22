// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBALERTITEMWINDOW_H
#define SBALERTITEMWINDOW_H



#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"
#import "SBAlertLayoutPresentationVerifier.h"

@interface SBAlertItemWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

@property (weak, nonatomic) SBAlertLayoutPresentationVerifier *alertLayoutPresentationVerifier; // ivar: _alertLayoutPresentationVerifier


+(id)_traitsArbiterOrientationActuationRole;
-(BOOL)_canBecomeKeyWindow;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)initWithRole:(id)arg0 debugName:(id)arg1 alertLayoutPresentationVerifier:(id)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;


@end


#endif