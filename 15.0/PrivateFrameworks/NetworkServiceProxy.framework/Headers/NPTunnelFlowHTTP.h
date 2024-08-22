// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTUNNELFLOWHTTP_H
#define NPTUNNELFLOWHTTP_H

@class NSNumber, NSMutableData, NSURL;


#import "NPTunnelFlow.h"

@interface NPTunnelFlowHTTP : NPTunnelFlow

@property (copy) id *postCompletionHandler; // ivar: _postCompletionHandler
@property BOOL receivedHeaders; // ivar: _receivedHeaders
@property (retain) NSNumber *responseContentLength; // ivar: _responseContentLength
@property (retain) NSMutableData *responseData; // ivar: _responseData
@property BOOL responseSuccess; // ivar: _responseSuccess
@property (retain) NSURL *url; // ivar: _url


-(BOOL)isClientFlowClosed;
-(id)initWithTunnel:(id)arg0 URL:(id)arg1 extraFlowProperties:(id)arg2 ;
-(void)closeClientFlowWithError:(int)arg0 ;
-(void)postData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)sendDataToClient:(id)arg0 fromTunnel:(BOOL)arg1 ;


@end


#endif