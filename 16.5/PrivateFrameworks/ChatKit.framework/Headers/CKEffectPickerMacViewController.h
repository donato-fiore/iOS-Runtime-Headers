// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKEFFECTPICKERMACVIEWCONTROLLER_H
#define CKEFFECTPICKERMACVIEWCONTROLLER_H

@class UIViewController, UIView, UIButton, NSLayoutConstraint, UIVisualEffectView, UILabel, UIVibrancyEffect;
@protocol CKEffectPreviewCollectionViewControllerDelegate, CKEffectSelectionViewControllerDelegate, CKEffectPickerViewControllerProtocol, CKEffectPickerViewControllerDelegate;


#import "CKBalloonView.h"
#import "CKComposition.h"
#import "CKChatControllerDummyAnimator.h"
#import "CKEffectPreviewCollectionViewController.h"
#import "CKFullScreenEffectManager.h"
#import "CKEffectSelectionViewController.h"

@interface CKEffectPickerMacViewController : UIViewController <CKEffectPreviewCollectionViewControllerDelegate, CKEffectSelectionViewControllerDelegate, CKEffectPickerViewControllerProtocol>



@property (retain, nonatomic) UIView *balloonContainer; // ivar: _balloonContainer
@property (retain, nonatomic) CKBalloonView *balloonView; // ivar: _balloonView
@property (nonatomic) CGPoint balloonViewOrigin; // ivar: _balloonViewOrigin
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (nonatomic) char color; // ivar: _color
@property (retain, nonatomic) CKComposition *composition; // ivar: _composition
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<CKEffectPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator; // ivar: _dummyAnimator
@property (retain, nonatomic) CKEffectPreviewCollectionViewController *effectCollectionViewController; // ivar: _effectCollectionViewController
@property (retain, nonatomic) CKFullScreenEffectManager *fsem; // ivar: _fsem
@property (nonatomic) BOOL hasSelectedDefaultEffect; // ivar: _hasSelectedDefaultEffect
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) CKEffectSelectionViewController *selectionViewController; // ivar: _selectionViewController
@property (retain, nonatomic) UIButton *sendButton; // ivar: _sendButton
@property (nonatomic) BOOL showingInStandAloneWindow; // ivar: _showingInStandAloneWindow
@property (retain, nonatomic) UIVisualEffectView *titleContainerView; // ivar: _titleContainerView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIVibrancyEffect *titleVibrancyEffect; // ivar: _titleVibrancyEffect


-(BOOL)effectShouldDisplayOverBalloon:(id)arg0 ;
-(id)_defaultSendAnimationContextForAnimationPreview;
-(id)initWithComposition:(id)arg0 balloonViewOrigin:(struct CGPoint )arg1 color:(char)arg2 ;
-(id)keyCommands;
-(void)closeButtonPressed:(id)arg0 ;
-(void)effectCollectionViewController:(id)arg0 willDisplayEffect:(id)arg1 ;
-(void)effectSelectionViewController:(id)arg0 didSelectEffectWithIdentifier:(id)arg1 ;
-(void)handleTouchMoved:(struct CGPoint )arg0 ;
-(void)handleTouchUp:(struct CGPoint )arg0 ;
-(void)keyCommandReturn:(id)arg0 ;
-(void)presentPicker;
-(void)startAnimationPreviewForIdentifier:(id)arg0 ;
-(void)touchUpInsideSendButton:(id)arg0 ;
-(void)updateColor:(char)arg0 ;
-(void)updateHintTransition:(CGFloat)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif