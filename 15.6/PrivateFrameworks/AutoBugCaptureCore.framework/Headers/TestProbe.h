// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TESTPROBE_H
#define TESTPROBE_H

@class NSString, NSMutableArray, NSUUID;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TestProbe : NSObject

@property (retain, nonatomic) NSString *diagSessionUUID; // ivar: _diagSessionUUID
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicTimer; // ivar: _periodicTimer
@property (readonly, nonatomic) NSMutableArray *probeOutputFilePaths; // ivar: _probeOutputFilePaths
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (nonatomic) unsigned int status; // ivar: _status
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(*void)loadCoreUtils;
+(id)testProbeStatusString:(unsigned int)arg0 ;
+(void)autoBugCapturePath:(*id)arg0 autoBugCaptureUID:(*id)arg1 autoBugCaptureGID:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)startPeriodicTimer;
-(BOOL)startPeriodicTimerAt:(NSUInteger)arg0 repeatInterval:(NSUInteger)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)cancelTest:(id)arg0 ;
-(void)periodicTimerFired:(id)arg0 ;
-(void)removeProbeOutputFiles;
-(void)stopPeriodicTimer;
-(void)stopTest;


@end


#endif