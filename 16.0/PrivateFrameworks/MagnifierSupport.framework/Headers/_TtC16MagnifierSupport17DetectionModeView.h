// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT17DETECTIONMODEVIEW_H
#define _TTC16MAGNIFIERSUPPORT17DETECTIONMODEVIEW_H

@class UIView;



@interface _TtC16MagnifierSupport17DetectionModeView : UIView {
    ? delegate;
    ? kRecordButtonSize;
    ? kRecordButtonMargin;
    ? kTapToRadarButtonMargin;
    ? kTapToRadarButtonSize;
    ? kRestartButtonSize;
    ? kDebugButtonsBottom;
    ? kSafeAreaBottom;
    ? _recordButton;
    ? _tapToRadarButton;
    ? _restartButton;
    ? edgeInsets;
    ? _rotationSubscription;
    ? buttonMap;
    ? buttonColumn;
    ? captionLabel;
    ? detectionLabel;
    ? detectionMarqueeLabel;
    ? kDetectionFont;
    ? detectionControls;
}




-(id)_accessibilitySupplementaryFooterViews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapRecordButton:(id)arg0 ;
-(void)didTapRestartButton:(id)arg0 ;
-(void)didTapTapToRadarButton:(id)arg0 ;


@end


#endif