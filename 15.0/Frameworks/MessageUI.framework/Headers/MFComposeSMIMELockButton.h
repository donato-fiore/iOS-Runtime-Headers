// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSESMIMELOCKBUTTON_H
#define MFCOMPOSESMIMELOCKBUTTON_H

@class UIButton, UIImageView;



@interface MFComposeSMIMELockButton : UIButton {
    UIImageView *_lockedImageView;
    UIImageView *_unlockedImageView;
}


@property (nonatomic) BOOL canEncrypt; // ivar: _canEncrypt
@property (nonatomic) UIEdgeInsets touchInsets; // ivar: touchInsets
@property (nonatomic) BOOL wantsEncryption; // ivar: _wantsEncryption


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_closeLock;
-(void)_openLock;
-(void)_updateButtonAppearance;
-(void)_updateButtonAppearanceAnimated:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif