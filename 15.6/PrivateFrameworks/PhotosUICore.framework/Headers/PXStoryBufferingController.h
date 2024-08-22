// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYBUFFERINGCONTROLLER_H
#define PXSTORYBUFFERINGCONTROLLER_H

@class NSIndexSet, NSMutableIndexSet, NSDictionary;


#import "PXStoryController.h"
#import "PXStoryModel.h"

@interface PXStoryBufferingController : PXStoryController {
    NSUInteger _activatedTime;
    ? _overallBufferingDuration;
    ? _lastNoncriticalBufferingDurationStore;
    ? _lastCriticalBufferingDurationStore;
    *? _bufferingDurationsPerReason;
}


@property (readonly, nonatomic) NSIndexSet *bufferingReasons;
@property (readonly, nonatomic) NSMutableIndexSet *bufferingReasonsStore; // ivar: _bufferingReasonsStore
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isBuffering; // ivar: _isBuffering
@property (readonly, nonatomic) CGFloat lastCriticalBufferingDuration;
@property (readonly, nonatomic) CGFloat lastNoncriticalBufferingDuration;
@property (weak, nonatomic) PXStoryModel *model; // ivar: _model
@property (copy, nonatomic) id *onBufferingEnd; // ivar: _onBufferingEnd
@property (nonatomic) NSInteger overallReadinessStatus; // ivar: _overallReadinessStatus
@property (readonly, nonatomic) CGFloat totalBufferingTimeInterval;
@property (readonly, nonatomic) NSDictionary *totalBufferingTimeIntervalsPerReason;


-(id)initWithModel:(id)arg0 ;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_accountForReason:(NSInteger)arg0 status:(NSInteger)arg1 ;
-(void)_invalidateModelProperties;
-(void)_invalidateOverallReadinessStatus;
-(void)_updateModelProperties;
-(void)_updateOverallReadinessStatus;
-(void)configureUpdater:(id)arg0 ;
-(void)dealloc;
-(void)handleModelChange:(NSUInteger)arg0 ;


@end


#endif