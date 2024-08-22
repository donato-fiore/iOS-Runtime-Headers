// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCPPROGRESSPROBE_H
#define TCPPROGRESSPROBE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TCPProgressProbe : NSObject {
    NSObject<OS_dispatch_queue> *lqueue;
    char * interfaceName;
    unsigned int state;
    NSUInteger _countPremiumModeClients;
}


@property (readonly, nonatomic) NSUInteger interfaceIndex; // ivar: _interfaceIndex
@property (nonatomic) BOOL localFlowTracking; // ivar: _localFlowTracking


+(id)probeForInterface:(id)arg0 ;
+(id)progressPrettyPrintUtility:(struct xtcpprogress_indicators *)arg0 ;
+(void)forceInvalidationFor:(id)arg0 periods:(NSUInteger)arg1 ;
+(void)initialize;
-(BOOL)interfaceMappingIsCurrent;
-(BOOL)manage:(unsigned int)arg0 outValue:(*unsigned int)arg1 ;
-(id)_initForInterface:(id)arg0 ;
-(id)description;
-(void)dealloc;
-(void)fetchMetricsForFlowsAged:(CGFloat)arg0 metrics:(struct xtcpprogress_indicators *)arg1 resultBlock:(id)arg2 ;


@end


#endif