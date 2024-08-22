// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSAUTHORIZEMACHINEPROTOCOLHANDLER_H
#define AMSAUTHORIZEMACHINEPROTOCOLHANDLER_H



#import "AMSURLProtocolHandler.h"

@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler

@property (copy, nonatomic) id *reconfigureRequestHandler; // ivar: _reconfigureRequestHandler


-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif