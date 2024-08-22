// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPOWERBUDGET_H
#define MSPOWERBUDGET_H

@class NSString;
@protocol MSPowerBudgetDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSPBTimerContext.h"

@interface MSPowerBudget : NSObject

@property (weak, nonatomic) NSObject<MSPowerBudgetDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isFileTransferAllowed) BOOL fileTransferAllowed;
@property (retain, nonatomic) NSString *focusAlbumGUID; // ivar: _focusAlbumGUID
@property (retain, nonatomic) NSString *focusAssetCollectionGUID; // ivar: _focusAssetCollectionGUID
@property (readonly, nonatomic, getter=hasForegroundFocus) BOOL foregroundFocus;
@property (readonly, nonatomic) BOOL hasActiveTimers;
@property (nonatomic) CGFloat maxActiveTimeAfterGlobalResetSync; // ivar: _maxActiveTimeAfterGlobalResetSync
@property (nonatomic) CGFloat maxActiveTimeAfterLossOfForeground; // ivar: _maxActiveTimeAfterLossOfForeground
@property (nonatomic) CGFloat maxActiveTimeAfterPush; // ivar: _maxActiveTimeAfterPush
@property (retain, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext; // ivar: _workQueueGlobalResetSyncTimerContext
@property (nonatomic, setter=workQueueSetExternalPowered:) BOOL workQueueIsExternalPowered; // ivar: _workQueueIsExternalPowered
@property (nonatomic, setter=workQueueSetFileTransferAllowed:) BOOL workQueueIsFileTransferAllowed; // ivar: _workQueueIsFileTransferAllowed
@property (nonatomic, setter=workQueueSetForeground:) BOOL workQueueIsForeground; // ivar: _workQueueIsForeground
@property (retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext; // ivar: _workQueuePostForegroundTimerContext
@property (retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext; // ivar: _workQueuePushTimerContext


-(id)init;
-(void)_globalResetSyncTimerDidExpire:(id)arg0 ;
-(void)_postForegroundTimerDidExpire:(id)arg0 ;
-(void)didBeginExternalPower;
-(void)didBeginForegroundFocus;
-(void)didEndExternalPower;
-(void)didEndForegroundFocus;
-(void)didReceiveGlobalResetSync;
-(void)didReceivePushNotification;
-(void)setIsFileTransferAllowed:(BOOL)arg0 ;
-(void)shutDown;
-(void)workQueueSetExternalPowered:(BOOL)arg0 ;
-(void)workQueueSetFileTransferAllowed:(BOOL)arg0 ;
-(void)workQueueSetForeground:(BOOL)arg0 ;
-(void)workQueueSetGlobalResetSyncTimerDate:(id)arg0 ;
-(void)workQueueSetIsFileTransferAllowed:(BOOL)arg0 ;
-(void)workQueueSetPostForegroundTimerDate:(id)arg0 ;
-(void)workQueueSetPushTimerDate:(id)arg0 ;


@end


#endif