// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPDETAILSCRUBCONTROLLER_H
#define MPDETAILSCRUBCONTROLLER_H

@class UISelectionFeedbackGenerator, UIControl<MPDetailedScrubbing>;
@protocol MPDetailScrubControllerDelegate;

#import <Foundation/Foundation.h>


@interface MPDetailScrubController : NSObject {
    BOOL _didBeginTracking;
    BOOL _needsCommit;
    float _accumulatedDelta;
    CGPoint _previousLocationInView;
    CGPoint _beginLocationInView;
    CGPoint _lastCommittedLocationInView;
    float _currentValue;
    UISelectionFeedbackGenerator *_feedbackGenerator;
}


@property (readonly, nonatomic) NSInteger currentScrubSpeed; // ivar: _currentScrubSpeed
@property (weak, nonatomic) NSObject<MPDetailScrubControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL detailedScrubbingEnabled; // ivar: _detailedScrubbingEnabled
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL durationAllowsForDetailedScrubbing;
@property (readonly, nonatomic) BOOL isTracking; // ivar: _isTracking
@property (weak, nonatomic) UIControl<MPDetailedScrubbing> *scrubbingControl; // ivar: _scrubbingControl
@property (nonatomic) CGFloat scrubbingVerticalRange; // ivar: _scrubbingVerticalRange


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(float)_minimumScale;
-(float)_scaleForIdealValueForVerticalPosition:(CGFloat)arg0 ;
-(float)scaleForVerticalPosition:(CGFloat)arg0 ;
-(id)init;
-(id)initWithScrubbingControl:(id)arg0 ;
-(void)_beginScrubbing;
-(void)_commitValue:(float)arg0 ;
-(void)_endScrubbing;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;


@end


#endif