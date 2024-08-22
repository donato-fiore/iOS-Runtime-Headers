// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI22SESSIONAUDIOPLAYERVIEW_H
#define _TTC9SEYMOURUI22SESSIONAUDIOPLAYERVIEW_H

@class UIView;



@interface _TtC9SeymourUI22SessionAudioPlayerView : UIView {
    ? animatedBackgroundView;
    ? layout;
    ? actionButtonsView;
    ? artworkView;
    ? playbackControlsView;
    ? playbackMetadataView;
    ? playbackTimeControl;
    ? presenter;
    ? overlayView;
    ? volumeSlider;
    ? actionButtonsLayoutGuideHeightConstraint;
    ? artworkViewTopConstraint;
    ? artworkViewWidthConstraint;
    ? grabberTopConstraint;
    ? preferredMaximumArtworkSize;
    ? metadataLayoutGuideHeightConstraint;
    ? playbackControlsLayoutGuideHeightConstraint;
    ? playbackTimeControlWidthConstraint;
    ? volumeSliderBottomConstraint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)collapseButtonTapped:(id)arg0 ;
-(void)exitButtonTapped:(id)arg0 ;


@end


#endif