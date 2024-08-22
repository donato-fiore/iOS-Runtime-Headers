// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBUNDOINTERACTIONHUD_H
#define UIKBUNDOINTERACTIONHUD_H

@class NSDate;
@protocol UIInteractiveUndoHUDActionDelegate;


#import "UIView.h"
#import "UIKBUndoControl.h"
#import "UIVisualEffectView.h"
#import "UILabel.h"
#import "UIKBUndoStyling.h"

@interface UIKBUndoInteractionHUD : UIView

@property (retain, nonatomic) UIKBUndoControl *aCopyButtonView; // ivar: _aCopyButtonView
@property (retain, nonatomic) UIKBUndoControl *aCutButtonView; // ivar: _aCutButtonView
@property (retain, nonatomic) UIKBUndoControl *aPasteButtonView; // ivar: _aPasteButtonView
@property (weak, nonatomic) NSObject<UIInteractiveUndoHUDActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (retain, nonatomic) NSDate *appearanceDate; // ivar: _appearanceDate
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UILabel *instructionalLabel; // ivar: _instructionalLabel
@property (retain, nonatomic) UIKBUndoControl *leftButtonView; // ivar: _leftButtonView
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UIKBUndoControl *rightButtonView; // ivar: _rightButtonView
@property (retain, nonatomic) UIVisualEffectView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) UIKBUndoStyling *style; // ivar: _style


-(BOOL)availableOfControl:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)controlForType:(NSInteger)arg0 ;
-(id)createSeparatorView;
-(id)initWithKeyboardAppearance:(NSInteger)arg0 isRTL:(BOOL)arg1 mode:(NSInteger)arg2 sceneBounds:(struct CGRect )arg3 ;
-(void)controlActionDown:(id)arg0 ;
-(void)controlActionUpInside:(id)arg0 forEvent:(id)arg1 ;
-(void)controlActionUpOutside:(id)arg0 ;
-(void)performDelegateRedoAndUpdateHUDIfNeeded;
-(void)performDelegateUndoAndUpdateHUDIfNeeded;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateControlWithDirection:(NSInteger)arg0 travelProgress:(CGFloat)arg1 isRTL:(BOOL)arg2 ;
-(void)updateHUDControlState;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif