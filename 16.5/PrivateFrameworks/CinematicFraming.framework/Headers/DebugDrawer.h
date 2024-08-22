// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEBUGDRAWER_H
#define DEBUGDRAWER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FrameUndistortionSession.h"
#import "CinematicFramingSessionOptions.h"

@interface DebugDrawer : NSObject {
    int _mode;
    FrameUndistortionSession *_undisortionSession;
    NSArray *_detectionsThisFrame;
    NSArray *_deadbandSubjects;
    NSArray *_tracksThisFrame;
    CGRect _cropRect;
    CGRect _displayRect;
    CGRect _targetRect;
    CGRect _deadband;
    CGRect _idealDeadband;
    ? _backProjectedViewportQuadrilateral;
    CGRect _subjectRect;
    ? _forwardProjectedSubjectQuadrilateral;
    float _forwardProjectedSubjectOccupancyFraction;
    ? _focusPoint;
}


@property (retain, nonatomic) CinematicFramingSessionOptions *options; // ivar: _options
@property (retain, nonatomic) FrameUndistortionSession *undistortionSession; // ivar: _undistortionSession


-(id)initWithUndistortionSession:(id)arg0 mode:(int)arg1 ;
-(void)dealloc;
-(void)drawDebugOnto:(struct __CVBuffer *)arg0 ;
-(void)drawRect:(struct CGRect )arg0 onto:(struct __CVBuffer *)arg1 color:(int)arg2 ;
-(void)registerBackProjectedViewportQuadrilateral:(struct ? )arg0 ;
-(void)registerCrop:(struct CGRect )arg0 ;
-(void)registerDeadband:(struct CGRect )arg0 ;
-(void)registerDeadbandSubjects:(id)arg0 ;
-(void)registerDetections:(id)arg0 ;
-(void)registerDisplayRect:(struct CGRect )arg0 ;
-(void)registerFocusPoint;
-(void)registerForwardProjectedSubjectOccupancyFraction:(float)arg0 ;
-(void)registerForwardProjectedSubjectQuadrilateral:(struct ? )arg0 ;
-(void)registerIdealDeadband:(struct CGRect )arg0 ;
-(void)registerSubjectRect:(struct CGRect )arg0 ;
-(void)registerTarget:(struct CGRect )arg0 ;
-(void)registerTracks:(id)arg0 ;


@end


#endif