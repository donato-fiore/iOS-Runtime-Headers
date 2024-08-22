// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMPINGTEST_H
#define IMPINGTEST_H

@class NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface IMPingTest : NSObject {
    NSString *_address;
    BOOL _usesWifi;
    id *_collector;
    BOOL _isRunning;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSObject<OS_dispatch_source> *_socketReadSource;
}


@property (readonly, nonatomic) CGFloat secondsToRun; // ivar: _secondsToRun


-(BOOL)writeResultsToFile:(id)arg0 error:(*id)arg1 ;
-(CGFloat)longTimeInterval;
-(id)initWithAddress:(id)arg0 wifi:(BOOL)arg1 ;
-(id)pingStats;
-(id)pingStats:(CGFloat)arg0 ;
-(int)_setupAndPerformPing:(CGFloat)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_doPingWithSocket:(int)arg0 address:(struct sockaddr_in )arg1 timeToRunTestInSeconds:(CGFloat)arg2 pingTimeout:(CGFloat)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_setupReadSource:(int)arg0 address:(struct sockaddr_in )arg1 icmID:(unsigned short)arg2 queue:(id)arg3 completionHander:(id)arg4 ;
-(void)dealloc;
-(void)startWithTimeout:(CGFloat)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)stop;


@end


#endif