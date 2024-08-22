// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEAPPPROXYUDPFLOW_H
#define NEAPPPROXYUDPFLOW_H

@class NWEndpoint;


#import "NEAppProxyFlow.h"

@interface NEAppProxyUDPFlow : NEAppProxyFlow

@property (readonly) NWEndpoint *localEndpoint; // ivar: _localEndpoint


-(id)description;
-(id)initWithNEFlow:(struct _NEFlow *)arg0 queue:(id)arg1 ;
-(void)openWithLocalEndpoint:(id)arg0 completionHandler:(id)arg1 ;
-(void)readDatagramsWithCompletionHandler:(id)arg0 ;
-(void)writeDatagrams:(id)arg0 sentByEndpoints:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif