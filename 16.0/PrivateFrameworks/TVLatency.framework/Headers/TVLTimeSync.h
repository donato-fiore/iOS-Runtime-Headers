// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVLTIMESYNC_H
#define TVLTIMESYNC_H

@class NSData, TSgPTPClock, NSString, CUMessageSession;
@protocol TSClockClient, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface TVLTimeSync : NSObject <TSClockClient>



@property (nonatomic) unsigned int IPv4; // ivar: _IPv4
@property (copy, nonatomic) NSData *IPv6; // ivar: _IPv6
@property (retain, nonatomic) TSgPTPClock *clock; // ivar: _clock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMaster) BOOL master; // ivar: _master
@property (copy, nonatomic) NSString *networkInterfaceName; // ivar: _networkInterfaceName
@property (retain, nonatomic) CUMessageSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_semaphore> *waitForPTPLock; // ivar: _waitForPTPLock


+(void)invalidate;
+(void)timeSyncWithRemoteIPv4:(id)arg0 IPv6:(id)arg1 interface:(id)arg2 session:(id)arg3 master:(BOOL)arg4 completion:(id)arg5 ;
-(NSUInteger)convertToDomainTimeFromHostTime:(NSUInteger)arg0 grandmasterIdentity:(*NSUInteger)arg1 ;
-(NSUInteger)convertToHostTimeFromDomainTime:(NSUInteger)arg0 grandmasterIdentity:(*NSUInteger)arg1 ;
-(id)initWithRemoteIPv4:(id)arg0 IPv6:(id)arg1 interface:(id)arg2 ;
-(void)_clearWaitForPTPClock;
-(void)_startPTPWithSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)didChangeClockMasterForClock:(id)arg0 ;
-(void)didChangeLockStateTo:(int)arg0 forClock:(id)arg1 ;
-(void)invalidate;
-(void)negotiateGrandmasterIdentityAttempt:(NSInteger)arg0 withCompletion:(id)arg1 ;


@end


#endif