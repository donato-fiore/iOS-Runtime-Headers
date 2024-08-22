// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDNANOSYNCRESTORESESSION_H
#define HDNANOSYNCRESTORESESSION_H

@class NSMutableArray, _HKExpiringCompletionTimer, NSCalendar, NSUUID, NSDate;

#import <Foundation/Foundation.h>

#import "HDNanoSyncStore.h"

@interface HDNanoSyncRestoreSession : NSObject {
    NSMutableArray *_completionHandlers;
    _HKExpiringCompletionTimer *_timer;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore; // ivar: _nanoSyncStore
@property (nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithSyncStore:(id)arg0 sessionUUID:(id)arg1 ;
-(void)addCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)scheduleTimeoutWithInterval:(CGFloat)arg0 handler:(id)arg1 ;


@end


#endif