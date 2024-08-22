// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTURETIMESYNCCLOCK_H
#define CMCONTINUITYCAPTURETIMESYNCCLOCK_H

@class TSgPTPClock, NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureTimeSyncClock : NSObject {
    TSgPTPClock *_ptpClock;
    NSObject<OS_dispatch_source> *_heartBeatTimer;
}


@property (retain, nonatomic) NSString *clockDeviceUID; // ivar: _clockDeviceUID
@property (nonatomic) NSUInteger clockIdentifier; // ivar: _clockIdentifier
@property (readonly, nonatomic, getter=isConnectedToPeer) BOOL connectedToPeer;
@property (nonatomic) NSUInteger grandMasterIdentifier; // ivar: _grandMasterIdentifier


+(void)initialize;
-(NSUInteger)domainTimeForMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteTimeForDomainTime:(NSUInteger)arg0 ;
-(id)initWithClockIdentifier:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)startEmittingHeartBeatSignposts;
-(void)stopEmittingHeartBeatSignposts;


@end


#endif