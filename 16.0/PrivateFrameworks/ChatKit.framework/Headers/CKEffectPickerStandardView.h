// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKEFFECTPICKERSTANDARDVIEW_H
#define CKEFFECTPICKERSTANDARDVIEW_H



#import "CKEffectPickerView.h"

@interface CKEffectPickerStandardView : CKEffectPickerView



-(CGFloat)marginBetweenPickerDotButtons;
-(CGFloat)offsetYForLabelAtIndex:(NSInteger)arg0 withInitialY:(CGFloat)arg1 ;
-(struct CGRect )_updateBalloonViewOrigin:(struct CGRect )arg0 forButtonFrame:(struct CGRect )arg1 ;
-(void)_updateRoundedContainerView;
-(void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect )arg0 ;
-(void)setCloseButtonYPosition:(CGFloat)arg0 ;


@end


#endif