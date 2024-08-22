// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APMESCALSIGNINGREQUESTOR_H
#define APMESCALSIGNINGREQUESTOR_H



#import "APXPCActionRequester.h"

@interface APMescalSigningRequestor : APXPCActionRequester



+(BOOL)canShareConnection;
+(id)machService;
-(id)init;
-(id)remoteObjectInterface;
-(id)signatureForData:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)signatureForData:(id)arg0 completion:(id)arg1 ;
-(void)signatureForData:(id)arg0 waitTime:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif