// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT18DETECTEDPERSONVIEW_H
#define _TTC16MAGNIFIERSUPPORT18DETECTEDPERSONVIEW_H

@class UIView;



@interface _TtC16MagnifierSupport18DetectedPersonView : UIView {
    ? isDepthHidden;
    ? edgeInsets;
    ? isCenterDetectionEnabled;
    ? noDetectionMessage;
    ? kTargetPositionArrayMaxSize;
    ? kFirstPointDepth;
    ? kDimmingFactor;
    ? kDepthLabelViewOpacity;
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
    ? _rotationSubscription;
}




-(BOOL)accessibilityActivate;
-(id)_accessibilitySupplementaryFooterViews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(unsigned int)_accessibilityMediaAnalysisOptions;
-(void)accessibilityElementDidBecomeFocused;
-(void)updateTargetAnimation;


@end


#endif