// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYPACINGCONTROLLER_H
#define PXSTORYPACINGCONTROLLER_H

@class NSString;
@protocol PXStoryPacingTimeSourceDelegate, PXStoryMutablePacingController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider, PXStoryPacingCueSource, PXStoryPacingTimeSource;


#import "PXStoryController.h"
#import "PXStoryModel.h"
#import "_PXStoryPacingControllerChangeOrigin.h"
#import "_PXStoryPacingControllerDecisionHistory.h"

@interface PXStoryPacingController : PXStoryController <PXStoryPacingTimeSourceDelegate, PXStoryMutablePacingController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider>



@property (nonatomic) BOOL canChangePlaybackTime; // ivar: _canChangePlaybackTime
@property (readonly, weak, nonatomic) NSObject<PXStoryPacingCueSource> *cueSource; // ivar: _cueSource
@property (readonly, nonatomic) ? currentPacingDecision; // ivar: _currentPacingDecision
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) _PXStoryPacingControllerChangeOrigin *modelChangeOrigin; // ivar: _modelChangeOrigin
@property (retain, nonatomic) _PXStoryPacingControllerDecisionHistory *pacingDecisionHistory; // ivar: _pacingDecisionHistory
@property (retain, nonatomic) NSString *reasonPreventingPlaybackTimeChange; // ivar: _reasonPreventingPlaybackTimeChange
@property (nonatomic) ? targetEndTime; // ivar: _targetEndTime
@property (retain, nonatomic) NSString *targetEndUpdateReason; // ivar: _targetEndUpdateReason
@property (readonly, nonatomic) NSObject<PXStoryPacingTimeSource> *timeSource; // ivar: _timeSource
@property (nonatomic) NSInteger timelineVersion; // ivar: _timelineVersion


-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithModel:(id)arg0 timeSource:(id)arg1 cueSource:(id)arg2 ;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_handleTimelineDidChange;
-(void)_invalidateCanChangePlaybackTime;
-(void)_invalidateCurrentPacingDecision;
-(void)_invalidateTargetEndTimeWithReason:(id)arg0 ;
-(void)_updateCanChangePlaybackTime;
-(void)_updateTargetEndTime;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)timeSource:(id)arg0 didIncrementByTime:(struct ? )arg1 ;


@end


#endif