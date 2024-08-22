// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEPROGRESSMANAGER_H
#define PXPEOPLEPROGRESSMANAGER_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "PXPeopleProgressDataSource.h"

@interface PXPeopleProgressManager : NSObject

@property (retain, nonatomic) PXPeopleProgressDataSource *dataSource; // ivar: _dataSource
@property (readonly) BOOL featureUnlocked;
@property (nonatomic, getter=isMonitoringProgress) BOOL monitoringProgress; // ivar: _monitoringProgress
@property (readonly) BOOL processingComplete; // ivar: _processingComplete
@property (nonatomic) NSUInteger processingStatus; // ivar: _processingStatus
@property CGFloat progress; // ivar: _progress
@property (readonly) BOOL shouldUseInterstitial;
@property (readonly) BOOL shouldUseProgressFooter;
@property (retain, nonatomic) NSTimer *statusTimer; // ivar: _statusTimer
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval


+(BOOL)hasSubstantialProcessingRemainingUsingMinAssetCount:(BOOL)arg0 pendingAssetCount:(NSUInteger)arg1 totalAssetCount:(NSUInteger)arg2 ;
+(BOOL)hasSubstantialProcessingRemainingUsingMinAssetCount:(BOOL)arg0 prioritizedProcessedCount:(NSUInteger)arg1 prioritizedTotalAllowedCount:(NSUInteger)arg2 pendingAssetCount:(NSUInteger)arg3 totalAssetCount:(NSUInteger)arg4 ;
-(BOOL)_progressComplete:(CGFloat)arg0 ;
-(BOOL)hasSubstantialProcessingRemainingUsingMinAssetCount:(BOOL)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)_scheduleNextUpdate;
-(void)_updateStatusForProgress:(CGFloat)arg0 processCount:(NSUInteger)arg1 ;
-(void)updateProgressWithForce:(BOOL)arg0 ;


@end


#endif