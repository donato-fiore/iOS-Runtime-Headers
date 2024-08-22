// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTCREPORTINGAGGREGATIONOBJECT_H
#define RTCREPORTINGAGGREGATIONOBJECT_H

@protocol ClientSessionReplyInterface;

#import <Foundation/Foundation.h>


@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface>

 {
    id *_aggregationBlock;
}




-(id)initWithAggregationBlock:(id)arg0 ;
-(void)dealloc;
-(void)sendMessageToClient:(id)arg0 timestamp:(CGFloat)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 payload:(id)arg4 ;


@end


#endif