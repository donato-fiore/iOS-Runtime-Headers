// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCREENEDGEPANRECOGNIZER_H
#define _UISCREENEDGEPANRECOGNIZER_H

@protocol _UIScreenEdgePanRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"
#import "_UIScreenEdgePanRecognizerSettings.h"

@interface _UIScreenEdgePanRecognizer : NSObject {
    BOOL _hasDoneInitialBackProjectionTest;
    CGPoint _initialTouchLocation;
    CGFloat _initialTouchTimestamp;
    NSInteger _initialInterfaceOrientation;
    NSUInteger _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    CGFloat _lastTouchTimestamp;
    NSInteger _lastTouchModifier;
    NSInteger _type;
}


@property (readonly, nonatomic) CGPoint _lastTouchLocation; // ivar: _lastTouchLocation
@property NSObject<_UIScreenEdgePanRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasRecordedData; // ivar: _hasRecordedData
@property (nonatomic) BOOL recognizeAlongEdge; // ivar: _recognizeAlongEdge
@property (readonly, nonatomic) NSUInteger recognizedRegion; // ivar: _recognizedRegion
@property (nonatomic) BOOL requiresFlatThumb; // ivar: _requiresFlatThumb
@property (nonatomic) CGRect screenBounds; // ivar: _screenBounds
@property (retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings; // ivar: _settings
@property (nonatomic) BOOL shouldUseGrapeFlags; // ivar: _shouldUseGrapeFlags
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSUInteger targetEdges; // ivar: _targetEdges
@property (readonly, nonatomic) BOOL useGrapeFlags;


-(NSInteger)_type;
-(NSUInteger)touchedEdgesForInterfaceOrientation:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 settings:(id)arg1 ;
-(void)_idleTimerElapsed:(id)arg0 ;
-(void)_incorporateIncrementalSampleAtLocation:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 modifier:(NSInteger)arg2 region:(NSUInteger)arg3 interfaceOrientation:(NSInteger)arg4 forceState:(NSInteger)arg5 ;
-(void)_incorporateInitialTouchAtLocation:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 modifier:(NSInteger)arg2 region:(NSUInteger)arg3 interfaceOrientation:(NSInteger)arg4 forceState:(NSInteger)arg5 ;
-(void)_longPressTimerElapsed:(id)arg0 ;
-(void)dealloc;
-(void)incorporateTouchSampleAtLocation:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 modifier:(NSInteger)arg2 region:(NSUInteger)arg3 interfaceOrientation:(NSInteger)arg4 forceState:(NSInteger)arg5 ;
-(void)reset;


@end


#endif