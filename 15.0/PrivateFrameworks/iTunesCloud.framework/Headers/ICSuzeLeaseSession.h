// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSUZELEASESESSION_H
#define ICSUZELEASESESSION_H

@class NSDate, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source, ICSuzeLeaseSessionDelegate;

#import <Foundation/Foundation.h>

#import "ICFPLeaseSyncSession.h"
#import "ICSuzeLeaseSessionConfiguration.h"

@interface ICSuzeLeaseSession : NSObject {
    NSInteger _automaticRefreshCount;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _isRunning;
    NSDate *_leaseExpirationDate;
    NSObject<OS_dispatch_source> *_leaseRenewTimer;
    ICFPLeaseSyncSession *_leaseSyncSession;
    NSOperationQueue *_operationQueue;
}


@property (readonly, copy, nonatomic) ICSuzeLeaseSessionConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<ICSuzeLeaseSessionDelegate> *delegate; // ivar: _delegate


-(id)_newSuzeLeaseRequestWithType:(NSInteger)arg0 clientData:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_renewLeaseTimerAction;
-(void)_updateRenewalTimer;
-(void)_updateRenewalTimerWithResponse:(id)arg0 ;
-(void)beginAutomaticallyRefreshingLease;
-(void)dealloc;
-(void)endAutomaticallyRefreshingLease;
-(void)startLeaseSessionWithCompletionHandler:(id)arg0 ;
-(void)stopLeaseSessionWithCompletionHandler:(id)arg0 ;


@end


#endif