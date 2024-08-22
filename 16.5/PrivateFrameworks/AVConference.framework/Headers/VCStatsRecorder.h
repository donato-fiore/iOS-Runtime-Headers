// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSTATSRECORDER_H
#define VCSTATSRECORDER_H


#import <Foundation/Foundation.h>


@interface VCStatsRecorder : NSObject {
    _opaque_pthread_rwlock_t _stateRWLock;
    ? _localStats;
    unsigned short _currentLocalStatsIndex;
    unsigned int _uplinkServerStatsByteUsed;
}




-(id)init;
-(int)serverStatsSizeInByteForUplink:(BOOL)arg0 connection:(id)arg1 ;
-(struct ? )getMostRecentLocalStats;
-(void)dealloc;
-(void)getLocalStats:(unsigned short)arg0 localSessionStats:(struct ? *)arg1 ;
-(void)updateSessionStats:(unsigned short)arg0 connection:(id)arg1 totalPacketSent:(unsigned int)arg2 totalPacketReceived:(unsigned int)arg3 ;


@end


#endif