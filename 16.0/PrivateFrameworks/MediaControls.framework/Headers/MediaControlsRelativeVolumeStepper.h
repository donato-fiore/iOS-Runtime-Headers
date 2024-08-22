// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSRELATIVEVOLUMESTEPPER_H
#define MEDIACONTROLSRELATIVEVOLUMESTEPPER_H

@class UIView, MTMaterialView, MPButton, NSBundle, MTVisualStylingProvider, MPVolumeController;



@interface MediaControlsRelativeVolumeStepper : UIView

@property (retain, nonatomic) MTMaterialView *decreaseBackground; // ivar: _decreaseBackground
@property (retain, nonatomic) MPButton *decreaseButton; // ivar: _decreaseButton
@property (retain, nonatomic) MTMaterialView *increaseBackground; // ivar: _increaseBackground
@property (retain, nonatomic) MPButton *increaseButton; // ivar: _increaseButton
@property (retain, nonatomic) NSBundle *mediaControlsBundle; // ivar: _mediaControlsBundle
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider
@property (retain, nonatomic) MPVolumeController *volumeController; // ivar: _volumeController


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)decreaseButtonHoldBegan:(id)arg0 ;
-(void)decreaseButtonHoldReleased:(id)arg0 ;
-(void)decreaseTouchUpInside:(id)arg0 ;
-(void)increaseButtonHoldBegan:(id)arg0 ;
-(void)increaseButtonHoldReleased:(id)arg0 ;
-(void)increaseTouchUpInside:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif