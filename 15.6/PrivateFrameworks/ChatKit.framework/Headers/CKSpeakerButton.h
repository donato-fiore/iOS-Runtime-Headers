// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSPEAKERBUTTON_H
#define CKSPEAKERBUTTON_H

@class UIButton;



@interface CKSpeakerButton : UIButton

@property (nonatomic) char orientation; // ivar: _orientation
@property (nonatomic) BOOL shouldShowText; // ivar: _shouldShowText
@property (nonatomic, getter=isSpeakerEnabled) BOOL speakerEnabled; // ivar: _speakerEnabled


+(id)speakerImageWithOrientation:(char)arg0 speakerEnabled:(BOOL)arg1 shouldShowText:(BOOL)arg2 ;
-(BOOL)__im_ff_systemImageAdoptionEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)hideSpeakerText;
-(void)touchUpInside:(id)arg0 ;
-(void)updateSpeakerImage;


@end


#endif