// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAPPPROXYTCPFLOW_H
#define NEAPPPROXYTCPFLOW_H

@class NWEndpoint;


#import "NEAppProxyFlow.h"

@interface NEAppProxyTCPFlow : NEAppProxyFlow

@property (readonly) NWEndpoint *remoteEndpoint; // ivar: _remoteEndpoint


-(id)description;
-(id)initWithNEFlow:(struct _NEFlow *)arg0 queue:(id)arg1 ;
-(void)readDataWithCompletionHandler:(id)arg0 ;
-(void)writeData:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif