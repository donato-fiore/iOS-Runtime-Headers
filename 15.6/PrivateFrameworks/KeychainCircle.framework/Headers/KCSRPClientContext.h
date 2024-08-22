// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KCSRPCLIENTCONTEXT_H
#define KCSRPCLIENTCONTEXT_H



#import "KCSRPContext.h"

@interface KCSRPClientContext : KCSRPContext



-(BOOL)verifyConfirmation:(id)arg0 error:(*id)arg1 ;
-(id)copyResposeToChallenge:(id)arg0 password:(id)arg1 salt:(id)arg2 error:(*id)arg3 ;
-(id)copyStart:(*id)arg0 ;


@end


#endif