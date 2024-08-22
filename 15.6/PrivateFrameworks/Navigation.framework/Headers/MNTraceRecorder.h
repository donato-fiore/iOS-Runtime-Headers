// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRACERECORDER_H
#define MNTRACERECORDER_H

@class NSString, NSDate, NSMapTable;
@protocol MNLocationRecorder;

#import <Foundation/Foundation.h>

#import "MNTracePreparedStatement.h"
#import "MNTrace.h"

@interface MNTraceRecorder : NSObject <MNLocationRecorder>

 {
    NSString *_tracePath;
    NSDate *_recordingCompassHeadingLastDate;
    BOOL _corrupted;
    BOOL _closed;
    BOOL _created;
    MNTracePreparedStatement *_recordEnvironmentInfoStatement;
    MNTracePreparedStatement *_recordDebugSettingStatement;
    MNTracePreparedStatement *_recordAudioSettingStatement;
    MNTracePreparedStatement *_recordStylesheetStatement;
    MNTracePreparedStatement *_recordLocationStatement;
    MNTracePreparedStatement *_recordLocationErrorStatement;
    MNTracePreparedStatement *_recordMatchInfoStatement;
    MNTracePreparedStatement *_recordDirectionsStatement;
    MNTracePreparedStatement *_recordETAUStatement;
    MNTracePreparedStatement *_recordRealtimeTransitUpdateRequest;
    MNTracePreparedStatement *_recordRealtimeTransitUpdateResponse;
    MNTracePreparedStatement *_recordRealtimeTransitUpdateResponseError;
    MNTracePreparedStatement *_recordVehicleSpeed;
    MNTracePreparedStatement *_recordVehicleHeading;
    MNTracePreparedStatement *_recordMotionData;
    MNTracePreparedStatement *_recordCompassHeading;
    MNTracePreparedStatement *_recordVirtualGarageVehicleState;
    MNTracePreparedStatement *_recordNavigationEvent;
    MNTracePreparedStatement *_updateNavigationEventLocationID;
    NSUInteger _routeRequestCount;
    NSUInteger _etaTrafficUpdateCount;
    NSMapTable *_eventsPendingLocationReference;
    id *_errorHandler;
    BOOL _lastPauseSpokenAudio;
    NSInteger _lastVoiceGuidanceSetting;
    NSUInteger _lastLaneEventHash;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *recordingStartTime; // ivar: _recordingStartTime
@property (readonly) Class superclass;
@property (copy, nonatomic) id *timeSinceRecordingBeganHandler; // ivar: _timeSinceRecordingBeganHandler
@property (readonly, nonatomic) MNTrace *trace; // ivar: _trace


-(BOOL)_isTracePathValid:(id)arg0 ;
-(CGFloat)timeSinceRecordingBegan;
-(id)init;
-(void)_closeTraceDB;
-(void)_dispatchWrite:(id)arg0 ;
-(void)_executeStatementForQuery:(id)arg0 handler:(id)arg1 ;
-(void)_initializeTraceDB;
-(void)_logError:(id)arg0 resultCode:(int)arg1 ;
-(void)_logSqliteErrorWithResult:(int)arg0 file:(char *)arg1 line:(int)arg2 ;
-(void)_prepareStatements;
-(void)_recordLocationEvent:(NSInteger)arg0 recordingTimestamp:(CGFloat)arg1 coordinate:(struct CLLocationCoordinate2D )arg2 rawCoordinate:(struct CLLocationCoordinate2D )arg3 timestamp:(CGFloat)arg4 horizontalAccuracy:(CGFloat)arg5 verticalAccuracy:(CGFloat)arg6 altitude:(CGFloat)arg7 speed:(CGFloat)arg8 speedAccuracy:(CGFloat)arg9 course:(CGFloat)arg10 rawCourse:(CGFloat)arg11 type:(int)arg12 courseAccuracy:(CGFloat)arg13 correctedCoordinate:(struct CLLocationCoordinate2D )arg14 correctedCourse:(CGFloat)arg15 matchType:(int)arg16 activeTransportType:(int)arg17 matchInfo:(id)arg18 correctedLocation:(id)arg19 speedLimit:(int)arg20 shieldText:(id)arg21 shieldType:(int)arg22 ;
-(void)_recordLocationEvent:(NSInteger)arg0 recordingTimestamp:(CGFloat)arg1 location:(id)arg2 correctedLocation:(id)arg3 ;
-(void)_recordLocationMatchInfoOnWriteQueue:(id)arg0 forLocationID:(int)arg1 ;
-(void)_updateForExistingTrace;
-(void)_updateNavigationEventsWithLocationReference:(id)arg0 ;
-(void)beginTransaction;
-(void)endTransaction;
-(void)recordAudioSetting:(BOOL)arg0 voiceGuidance:(NSInteger)arg1 ;
-(void)recordCompassHeading:(CGFloat)arg0 magneticHeading:(CGFloat)arg1 accuracy:(CGFloat)arg2 timestamp:(id)arg3 ;
-(void)recordDebugSetting:(id)arg0 settingValue:(id)arg1 ;
-(void)recordDirectionsRequest:(id)arg0 response:(id)arg1 error:(id)arg2 waypoints:(id)arg3 selectedRouteIndex:(NSUInteger)arg4 requestTimestamp:(CGFloat)arg5 responseTimestamp:(CGFloat)arg6 ;
-(void)recordETAURequest:(id)arg0 response:(id)arg1 error:(id)arg2 destinationName:(id)arg3 requestTimestamp:(CGFloat)arg4 responseTimestamp:(CGFloat)arg5 ;
-(void)recordEnvironmentInfo:(id)arg0 value:(id)arg1 ;
-(void)recordError:(id)arg0 ;
-(void)recordInitialCourse:(CGFloat)arg0 ;
-(void)recordLocation:(id)arg0 correctedLocation:(id)arg1 ;
-(void)recordLocation:(id)arg0 rawLocation:(id)arg1 ;
-(void)recordLocation:(id)arg0 rawLocation:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)recordLocation:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)recordLocationUpdatePause;
-(void)recordLocationUpdateResume;
-(void)recordMiscInfo:(id)arg0 value:(id)arg1 ;
-(void)recordMotionUpdate:(NSUInteger)arg0 exitType:(NSUInteger)arg1 confidence:(NSUInteger)arg2 ;
-(void)recordNavigationEvent:(NSInteger)arg0 forLocation:(id)arg1 description:(id)arg2 ;
-(void)recordSimulatedCoordinate:(struct CLLocationCoordinate2D )arg0 course:(CGFloat)arg1 altitude:(CGFloat)arg2 speed:(CGFloat)arg3 timestamp:(CGFloat)arg4 activeTransportType:(int)arg5 ;
-(void)recordStylesheet:(id)arg0 data:(id)arg1 ;
-(void)recordTransitUpdateError:(id)arg0 ;
-(void)recordTransitUpdateRequest:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(void)recordTransitUpdateResponse:(id)arg0 ;
-(void)recordVehicleHeading:(CGFloat)arg0 timestamp:(id)arg1 ;
-(void)recordVehicleSpeed:(CGFloat)arg0 timestamp:(id)arg1 ;
-(void)recordVirtualGarageVehicleState:(id)arg0 isDifferentVehicle:(BOOL)arg1 ;
-(void)resetLocationsForSimulation;
-(void)saveTraceSynchronously;
-(void)saveTraceWithCompletionHandler:(id)arg0 ;
-(void)setIsSimulation:(BOOL)arg0 ;
-(void)setRouteGenius:(BOOL)arg0 ;
-(void)startWritingTraceToPath:(id)arg0 withErrorHandler:(id)arg1 ;


@end


#endif