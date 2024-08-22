// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVTWOFINGERGESTURE_H
#define ASVTWOFINGERGESTURE_H

@class NSSet;
@protocol ASVTwoFingerGestureDelegate, ASVTouch;


#import "ASVGesture.h"
#import "ASVRubberBand.h"

@interface ASVTwoFingerGesture : ASVGesture {
    ? _initialFirstTouchLocation;
    ? _initialSecondTouchLocation;
    ? _initialMidPoint;
}


@property (nonatomic) float assetBaseScale; // ivar: _assetBaseScale
@property (nonatomic) float baseDistanceBetweenFingers; // ivar: _baseDistanceBetweenFingers
@property (weak, nonatomic) NSObject<ASVTwoFingerGestureDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<ASVTouch> *firstTouch; // ivar: _firstTouch
@property (nonatomic) float initialDistanceBetweenFingers; // ivar: _initialDistanceBetweenFingers
@property (nonatomic) float initialFingerAngle; // ivar: _initialFingerAngle
@property ? initialFirstTouchLocation;
@property ? initialMidPoint;
@property ? initialSecondTouchLocation;
@property (nonatomic) float lastAssetScale; // ivar: _lastAssetScale
@property (nonatomic) float lastFingerAngle; // ivar: _lastFingerAngle
@property (nonatomic) BOOL levitationThresholdPassed; // ivar: _levitationThresholdPassed
@property (nonatomic) float maxScale; // ivar: _maxScale
@property (nonatomic) float minScale; // ivar: _minScale
@property (nonatomic) BOOL panThresholdPassed; // ivar: _panThresholdPassed
@property (nonatomic) BOOL rotationThresholdPassed; // ivar: _rotationThresholdPassed
@property (retain, nonatomic) ASVRubberBand *rubberBand; // ivar: _rubberBand
@property (nonatomic) float scaleFactor; // ivar: _scaleFactor
@property (nonatomic) float scaleOvershoot; // ivar: _scaleOvershoot
@property (nonatomic) BOOL scaleThresholdPassed; // ivar: _scaleThresholdPassed
@property (retain, nonatomic) NSObject<ASVTouch> *secondTouch; // ivar: _secondTouch
@property (retain, nonatomic) NSSet *snapScalesSet; // ivar: _snapScalesSet


-(BOOL)scaleIsWithinSnapRange:(float)arg0 snapTarget:(float)arg1 ;
-(id)initWithFirstTouch:(id)arg0 secondTouch:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 ;
-(void)updatePanWithFirstTouchLocationsecondTouchLocationmidPoint;
-(void)updateRotationWithSpan;
-(void)updateScalingWithSpan;


@end


#endif