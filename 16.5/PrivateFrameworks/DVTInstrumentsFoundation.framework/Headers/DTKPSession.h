// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKPSESSION_H
#define DTKPSESSION_H

@protocol DTKPConfiguration, DTKPKtraceAggregator;

#import <Foundation/Foundation.h>


@interface DTKPSession : NSObject {
    unsigned int _sessionID;
    mutex _lock;
    unsigned int _state;
    id<DTKPConfiguration> *_config;
    id<DTKPKtraceAggregator> *_aggregator;
}


@property (nonatomic) unsigned char recordingPriority; // ivar: _recordingPriority
@property (readonly, nonatomic) unsigned int sessionID;


+(int)blessPid:(int)arg0 ;
+(void)initialize;
-(BOOL)isActive;
-(BOOL)isPaused;
-(BOOL)pause:(*id)arg0 ;
-(BOOL)resume:(*id)arg0 ;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)_lockKPerf;
-(id)init;
-(id)initWithConfig:(id)arg0 andAggregator:(id)arg1 ;
-(id)swapOutCurrentDatastream:(*id)arg0 ;
-(int)_unlockKperf;
-(void)dealloc;


@end


#endif