// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCONNECTIONHEALTHMONITOR_H
#define VCCONNECTIONHEALTHMONITOR_H

@protocol OS_dispatch_queue, VCConnectionHealthMonitorDelegate;

#import <Foundation/Foundation.h>


@interface VCConnectionHealthMonitor : NSObject {
    unsigned char _lastReportedIndex;
    ConnectionStatsHistory _statsHistory;
    _opaque_pthread_rwlock_t _peerStateRWLock;
    ConnectionStatsHistory _peerStatsHistory;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _opaque_pthread_rwlock_t _stateRWLock;
    ConnectionStats _currentReceivingStats;
    ConnectionStats _tempReceivingStats;
    BOOL _firstPacketReceived;
    ConnectionStatsSequenceNumberData _secondaryConnReceivedSequenceNumberStats;
}


@property NSObject<VCConnectionHealthMonitorDelegate> *delegate; // ivar: _delegate
@property CGFloat primaryConnHealthAllowedDelay; // ivar: _primaryConnHealthAllowedDelay
@property BOOL usingServerBasedLinks; // ivar: _usingServerBasedLinks


-(BOOL)isHistoryImproved:(char *)arg0 currentIndex:(int)arg1 ;
-(BOOL)isHistoryValid:(char *)arg0 ;
-(BOOL)isPrimaryConnectionImprovedFromHistory:(struct ConnectionStatsHistory *)arg0 withIndex:(int)arg1 remoteStatsHistory:(struct ConnectionStatsHistory *)arg2 ;
-(id)init;
-(unsigned int)generateStatsBlob;
-(void)dealloc;
-(void)processPeerStatsBlob:(unsigned int)arg0 ;
-(void)reportConnectionHealthWithStatsHistory:(struct ConnectionStatsHistory *)arg0 index:(int)arg1 isPeerStats:(BOOL)arg2 ;
-(void)resetConnectionStats:(BOOL)arg0 ;
-(void)resetHistory:(struct ConnectionStatsHistory *)arg0 ;
-(void)updateRatiosForHistory:(struct ConnectionStatsHistory *)arg0 withIndex:(int)arg1 ;
-(void)updateReceiveStats;
-(void)updateStatsHistory;


@end


#endif