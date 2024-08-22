// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT18DETECTEDPERSONVIEW_H
#define _TTC16MAGNIFIERSUPPORT18DETECTEDPERSONVIEW_H

@class UIView;



@interface _TtC16MagnifierSupport18DetectedPersonView : UIView {
    ? isDepthHidden;
    ? edgeInsets;
    ? isCenterDetectionEnabled;
    ? noDetectionMessage;
    ? delegate;
    ? kTargetPositionArrayMaxSize;
    ? kFirstPointDepth;
    ? kDimmingFactor;
    ? kDepthLabelViewOpacity;
    ? kRecordButtonSize;
    ? kRecordButtonMargin;
    ? kTapToRadarButtonMargin;
    ? kTapToRadarButtonSize;
    ? kRestartButtonSize;
    ? kDebugButtonsBottom;
    ? kNoDetectionFont;
    ? kSafeAreaBottom;
    ? kSafeAreaTop;
    ? kSafeAreaLeft;
    ? kSafeAreaRight;
    ? _positionLabel;
    ? _dottedLineLabel;
    ? _depthLabelView;
    ? _depthLabel;
    ? _previousTargetPoint;
    ? _currentTargetPoint;
    ? _nextTargetPoint;
    ? _targetAnimationDisplayLink;
    ? _startTargetTime;
    ? kTargetAnimationDuration;
    ? _noDetectionLabel;
    ? _recordButton;
    ? _tapToRadarButton;
    ? _restartButton;
    ? _rotationSubscription;
}




-(BOOL)accessibilityActivate;
-(id)_accessibilitySupplementaryFooterViews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(unsigned int)_accessibilityMediaAnalysisOptions;
-(void)accessibilityElementDidBecomeFocused;
-(void)didTapRecordButton:(id)arg0 ;
-(void)didTapRestartButton:(id)arg0 ;
-(void)didTapTapToRadarButton:(id)arg0 ;
-(void)updateTargetAnimation;


@end


#endif