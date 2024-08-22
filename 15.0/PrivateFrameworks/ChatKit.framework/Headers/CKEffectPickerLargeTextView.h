// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKEFFECTPICKERLARGETEXTVIEW_H
#define CKEFFECTPICKERLARGETEXTVIEW_H



#import "CKEffectPickerView.h"

@interface CKEffectPickerLargeTextView : CKEffectPickerView

@property (nonatomic) BOOL finishedInitializing; // ivar: _finishedInitializing


-(BOOL)shouldAnimatePreviousLabelForCancel:(id)arg0 ;
-(CGFloat)marginBetweenPickerDotButtons;
-(CGFloat)offsetYForLabelAtIndex:(NSInteger)arg0 withInitialY:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 sendButtonFrame:(struct CGRect )arg1 balloonViewOrigin:(struct CGPoint )arg2 composition:(id)arg3 color:(char)arg4 ;
-(struct CGRect )_updateBalloonViewOrigin:(struct CGRect )arg0 forButtonFrame:(struct CGRect )arg1 ;
-(void)_touchUpInsideDotButton:(id)arg0 ;
-(void)_updateRoundedContainerView;
-(void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect )arg0 ;
-(void)addEffect:(id)arg0 withDescriptiveText:(id)arg1 withIdentifier:(id)arg2 ;
-(void)cancelImpactSelection;
-(void)effectTypeDidChange:(id)arg0 ;
-(void)setCloseButtonYPosition:(CGFloat)arg0 ;


@end


#endif