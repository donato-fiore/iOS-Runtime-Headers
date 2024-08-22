// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOANALYSISSTATUSCONTROLLER_H
#define PXPHOTOANALYSISSTATUSCONTROLLER_H

@class NSError, NSDate, NSMutableArray, NSString;


#import "PXObservable.h"

@interface PXPhotoAnalysisStatusController : PXObservable {
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setDidReceiveGraphFractionCompleted:) BOOL _didReceiveGraphFractionCompleted; // ivar: __didReceiveGraphFractionCompleted
@property (retain, nonatomic, setter=_setGraphError:) NSError *_graphError; // ivar: __graphError
@property (nonatomic, getter=_isGraphReady, setter=_setGraphReady:) BOOL _graphReady; // ivar: __graphReady
@property (retain, nonatomic, setter=_setInitialUpdateDate:) NSDate *_initialUpdateDate; // ivar: __initialUpdateDate
@property (retain, nonatomic, setter=_setLastGraphBecameReadyDate:) NSDate *_lastGraphBecameReadyDate; // ivar: __lastGraphBecameReadyDate
@property (nonatomic, getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:) BOOL _requestingGraphFractionCompleted; // ivar: __requestingGraphFractionCompleted
@property (readonly, nonatomic) NSMutableArray *_retryBlocks; // ivar: __retryBlocks
@property (nonatomic, setter=_setGraphFractionCompleted:) CGFloat graphFractionCompleted; // ivar: _graphFractionCompleted
@property (nonatomic, setter=_setGraphStatus:) NSInteger graphStatus; // ivar: _graphStatus
@property (nonatomic, setter=_setHasBeenReadyForSomeTime:) BOOL hasBeenReadyForSomeTime; // ivar: _hasBeenReadyForSomeTime
@property (readonly, nonatomic) NSString *stateDescription;


+(id)sharedStatusController;
-(BOOL)_isWithinGracePeriod;
-(BOOL)_needsUpdate;
-(id)init;
-(id)mutableChangeObject;
-(void)_dequeueAndPerformBlocks:(id)arg0 ;
-(void)_handleGraphFractionCompletedReply:(id)arg0 error:(id)arg1 ;
-(void)_handleGraphReadyForSomeTimeForDate:(id)arg0 ;
-(void)_handleGraphReadyReplyWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleInitialGraceDelay;
-(void)_invalidateGraphStatus;
-(void)_requestGraphFractionCompleted;
-(void)_requestGraphReady;
-(void)_setNeedsUpdate;
-(void)_updateGraphStatusIfNeeded;
-(void)_updateIfNeeded;
-(void)didPerformChanges;
-(void)registerRetryBlock:(id)arg0 ;
-(void)update;


@end


#endif