// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALIBRATIONVIEWCONTROLLER_H
#define CALIBRATIONVIEWCONTROLLER_H

@class UIViewController, CAShapeLayer, UILabel, UIButton, NSMutableArray;


#import "CompassBackgroundView.h"
#import "CalibrationBallView.h"

@interface CalibrationViewController : UIViewController {
    CompassBackgroundView *_compassBackgroundView;
    CAShapeLayer *_compassBackgroundViewMask;
    UILabel *_instructionLabel;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    CalibrationBallView *_ballView;
    CGPoint _compassOriginPoint;
    NSMutableArray *_calibrationConstraints;
    *float _ticsShowingArray;
    CGFloat _angleToRim;
    CGFloat _calibrationAngle;
    int _quantizationType;
    CGFloat _previousTimestamp;
    CGFloat _startTicAngle;
    BOOL _ignoreMotionUpdates;
    BOOL _shouldCompleteTics;
    CGFloat _previousHorizontalAngle;
    ? _previousGravity;
    NSUInteger _numCompleteTics;
    CGFloat _compassRadius;
}




-(BOOL)circleIsCompleted;
-(BOOL)prefersStatusBarHidden;
-(CGFloat)_correctedAngleForCurrentOrientation:(CGFloat)arg0 ;
-(CGFloat)completeCircle;
-(float)quantizedPercentage:(CGFloat)arg0 forAngle:(CGFloat)arg1 ;
-(id)init;
-(id)initWithOriginPoint:(struct CGPoint )arg0 ;
-(id)updatedMaskingPath;
-(void)_updateSizes;
-(void)addConstraints;
-(void)cancel;
-(void)dealloc;
-(void)hideAllTics;
-(void)reset;
-(void)setBallAngle:(CGFloat)arg0 tiltAngle:(CGFloat)arg1 ;
-(void)setMotion:(id)arg0 ;
-(void)showTicAtAngle:(CGFloat)arg0 withCredit:(CGFloat)arg1 ;
-(void)showTicsBetweenStartAngle:(CGFloat)arg0 endAngle:(CGFloat)arg1 withCredit:(CGFloat)arg2 ;
-(void)updateMaskingPath;
-(void)userDefaultsChanged:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif