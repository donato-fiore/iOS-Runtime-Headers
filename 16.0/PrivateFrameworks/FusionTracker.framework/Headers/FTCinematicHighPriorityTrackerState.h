// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTCINEMATICHIGHPRIORITYTRACKERSTATE_H
#define FTCINEMATICHIGHPRIORITYTRACKERSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FTCinematicHighPriorityTrackerState : NSObject {
    ? _tracker;
    ? _frame;
    BOOL _isTapToTrack;
    BOOL _finalized;
}


@property (nonatomic) NSInteger op; // ivar: _op
@property (retain, nonatomic) NSMutableDictionary *sessionStorage; // ivar: _sessionStorage
@property (nonatomic) CGRect targetRect; // ivar: _targetRect


-(BOOL)_unsafeMeanFillAndScaleSourceBuffer:(struct __CVBuffer *)arg0 destinationBuffer:(struct __CVBuffer *)arg1 sourceRect:(struct CGRect )arg2 meanPixel:(id)arg3 scaler;
-(BOOL)_updateHighPriorityTrackWithRect:(struct Rect<double> )arg0 confidence:(CGFloat)arg1 isTapToTrack:(BOOL)arg2 ;
-(BOOL)_validatePostProcessingInvocation;
-(BOOL)completed;
-(BOOL)postProcessExemplarOutputs:(id)arg0 forTargetRect:(struct CGRect )arg1 ;
-(BOOL)postProcessInstanceOutputs:(id)arg0 ;
-(BOOL)preProcessExemplarInputFromSourceBuffer:(struct __CVBuffer *)arg0 toDestinationBuffer:(struct __CVBuffer *)arg1 forTargetRect:(struct CGRect )arg2 meanPixel:(id)arg3 scaler;
-(BOOL)preProcessInstanceInputFromSourceBuffer:(struct __CVBuffer *)arg0 toDestinationBuffer:(struct __CVBuffer *)arg1 meanPixel:(id)arg2 scaler;
-(id)initWithTracker:(struct shared_ptr<ft::CinematicTracker> )arg0 frame:(struct shared_ptr<ft::Frame> )arg1 ;
-(struct CGRect )exemplarInputRoiForTargetRect:(struct CGRect )arg0 ;
-(struct CGRect )instanceInputRoi;
-(void)_setup;
-(void)_setupOp;
-(void)_setupSessionStorage;
-(void)abort;


@end


#endif