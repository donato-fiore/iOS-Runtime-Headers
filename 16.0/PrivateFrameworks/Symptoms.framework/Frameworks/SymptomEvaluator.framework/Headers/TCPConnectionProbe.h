// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCPCONNECTIONPROBE_H
#define TCPCONNECTIONPROBE_H

@class NSDate;
@protocol OS_nw_connection;


#import "TestProbe.h"

@interface TCPConnectionProbe : TestProbe {
    NSObject<OS_nw_connection> *_connection;
    BOOL _connected;
    BOOL _shouldSendReply;
    NSDate *_startTime;
    CGFloat _elapsedTime;
}




-(void)cancelTest:(id)arg0 ;
-(void)testConection:(id)arg0 port:(NSUInteger)arg1 timeout:(CGFloat)arg2 interfaceName:(id)arg3 reply:(id)arg4 ;


@end


#endif