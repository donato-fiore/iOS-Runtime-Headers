// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVELINKOBSERVER_H
#define LIVELINKOBSERVER_H

@class NSDate, NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "TCPProgressProbe.h"

@interface LiveLinkObserver : NSObject {
    int notifyToken;
    TCPProgressProbe *_tcpProgressProbe;
    NSDate *_timeOfProbeStart;
    NSObject<OS_dispatch_source> *progressProbeTimer;
    NSUInteger _iter;
    BOOL _localFlowsDisabled;
    BOOL _localFlowsEnabled;
}


@property (readonly, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, nonatomic) BOOL premiumModeEnabled; // ivar: _premiumModeEnabled
@property (readonly, nonatomic) NSUInteger tcpProgressScore; // ivar: _tcpProgressScore


-(BOOL)attemptStartProgressProbe;
-(BOOL)disableLocalFlowsTracking;
-(BOOL)enableLocalFlowsTracking;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)startTracking;
-(BOOL)stopTracking;
-(NSUInteger)_assessProgressFromBaseline:(struct xtcpprogress_indicators *)arg0 toMetrics:(struct xtcpprogress_indicators *)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithInterfaceName:(id)arg0 ;
-(void)_captureProgressWithInterval:(NSUInteger)arg0 capWindowTo:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)disablePremiumMode;
-(void)enablePremiumMode;
-(void)postHasAdviceNotification:(BOOL)arg0 ;
-(void)startProgressProbeTimerWithInterval:(NSUInteger)arg0 capWindowTo:(NSUInteger)arg1 ;
-(void)stopProgressProbeTimer;


@end


#endif