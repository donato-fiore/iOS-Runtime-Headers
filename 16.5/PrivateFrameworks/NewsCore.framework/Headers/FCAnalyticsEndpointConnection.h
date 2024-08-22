// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCANALYTICSENDPOINTCONNECTION_H
#define FCANALYTICSENDPOINTCONNECTION_H


#import <Foundation/Foundation.h>

#import "FCEndpointConnection.h"
#import "FCAsyncSerialQueue.h"

@interface FCAnalyticsEndpointConnection : NSObject

@property (retain, nonatomic) FCEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue; // ivar: _serialQueue


-(id)initWithEndpointConnection:(id)arg0 ;
-(void)uploadEnvelopeBatch:(id)arg0 withURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 completion:(id)arg3 ;
-(void)uploadEnvelopeBatch:(id)arg0 withURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 priority:(float)arg3 callbackQueue:(id)arg4 completion:(id)arg5 ;


@end


#endif