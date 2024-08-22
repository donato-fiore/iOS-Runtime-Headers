// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOETATRAFFICUPDATEREQUESTER_H
#define GEOETATRAFFICUPDATEREQUESTER_H


#import <Foundation/Foundation.h>


@interface GEOETATrafficUpdateRequester : NSObject



-(void)cancelRequest:(id)arg0 ;
// -(void)sendConditionalETATrafficUpdateRequest:(id)arg0 timeWindowDuration:(CGFloat)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 willSendRequestHandler:(id)arg4 finishedHandler:(unk)arg5  ;
-(void)sendETATrafficUpdateRequest:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 finishedHandler:(id)arg3 ;


@end


#endif