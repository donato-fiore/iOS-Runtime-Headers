// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCCACHEDRESPONSEENTRY_H
#define HMDXPCCACHEDRESPONSEENTRY_H

@class NSMutableArray, HMReportContext, HMFTimer, HMFMessageTransport;

#import <Foundation/Foundation.h>


@interface HMDXPCCachedResponseEntry : NSObject

@property (readonly) NSMutableArray *messages; // ivar: _messages
@property (readonly, copy) HMReportContext *reportContext; // ivar: _reportContext
@property (retain) HMFTimer *reportTimer; // ivar: _reportTimer
@property (retain) HMFTimer *retrievalTimer; // ivar: _retrievalTimer
@property (weak) HMFMessageTransport *transport; // ivar: _transport


-(id)initWithReportContext:(id)arg0 transport:(id)arg1 ;


@end


#endif