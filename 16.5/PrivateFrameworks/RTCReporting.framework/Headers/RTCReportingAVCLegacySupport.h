// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTCREPORTINGAVCLEGACYSUPPORT_H
#define RTCREPORTINGAVCLEGACYSUPPORT_H

@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface RTCReportingAVCLegacySupport : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQ;
    NSObject<OS_os_log> *_logger;
}


@property (readonly, nonatomic) id *awdAdaptor; // ivar: _awdAdaptor


-(id)init;
-(void)dealloc;
-(void)invokeAWDAdaptorForPayload:(id)arg0 category:(unsigned short)arg1 type:(unsigned short)arg2 ;
-(void)sendPowerLogEventForClient:(id)arg0 serviceName:(id)arg1 payload:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 eventNumber:(NSUInteger)arg5 ;


@end


#endif