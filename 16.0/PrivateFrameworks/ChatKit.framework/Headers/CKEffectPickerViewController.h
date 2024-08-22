// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKEFFECTPICKERVIEWCONTROLLER_H
#define CKEFFECTPICKERVIEWCONTROLLER_H

@class UIViewController, NSAttributedString;
@protocol CKEffectPickerViewDelegate, CKEffectPickerViewControllerProtocol, CKEffectPickerViewControllerDelegate;


#import "CKEffectPickerView.h"

@interface CKEffectPickerViewController : UIViewController <CKEffectPickerViewDelegate, CKEffectPickerViewControllerProtocol>



@property (nonatomic) CGPoint balloonViewOrigin; // ivar: _balloonViewOrigin
@property (weak, nonatomic) NSObject<CKEffectPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CKEffectPickerView *pickerView; // ivar: _pickerView
@property (nonatomic) CGRect sendButtonFrame; // ivar: _sendButtonFrame
@property (copy, nonatomic) NSAttributedString *text; // ivar: _text


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithComposition:(id)arg0 sendButtonFrame:(struct CGRect )arg1 balloonViewOrigin:(struct CGPoint )arg2 color:(char)arg3 ;
-(void)effectPickerViewDidFinishAnimatingIn:(id)arg0 ;
-(void)effectSelectedWithIdentifier:(id)arg0 ;
-(void)handleTouchMoved:(struct CGPoint )arg0 ;
-(void)handleTouchUp:(struct CGPoint )arg0 ;
-(void)presentPicker;
-(void)setCloseButtonYPosition:(CGFloat)arg0 ;
-(void)setSemanticContentAttribute:(id)arg0 forceLTR:(BOOL)arg1 ;
-(void)setShowingInStandAloneWindow:(BOOL)arg0 ;
-(void)touchUpInsideCloseButton;
-(void)updateColor:(char)arg0 ;
-(void)updateHintTransition:(CGFloat)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif