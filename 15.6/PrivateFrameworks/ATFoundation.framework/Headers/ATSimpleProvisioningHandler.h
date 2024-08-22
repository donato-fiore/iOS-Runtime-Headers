// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSIMPLEPROVISIONINGHANDLER_H
#define ATSIMPLEPROVISIONINGHANDLER_H



#import "ATProvisioningHandler.h"

@interface ATSimpleProvisioningHandler : ATProvisioningHandler



-(id)_paramsForRequest:(id)arg0 ;
-(void)_processProvisioningRequest:(id)arg0 withParams:(id)arg1 onMessageLink:(id)arg2 withCompletion:(id)arg3 ;
-(void)_processProvisioningResponse:(id)arg0 withParams:(id)arg1 onMessageLink:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif