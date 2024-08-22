// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CATXPCTRANSPORTSENDMESSAGEOPERATION_H
#define _CATXPCTRANSPORTSENDMESSAGEOPERATION_H



#import "CATOperation.h"
#import "CATMessage.h"
#import "CATXPCTransport.h"

@interface _CATXPCTransportSendMessageOperation : CATOperation

@property (retain, nonatomic) CATMessage *message; // ivar: _message
@property (weak, nonatomic) CATXPCTransport *transport; // ivar: _transport


-(BOOL)isAsynchronous;
-(void)didFailWithError:(id)arg0 ;
-(void)didProcessMessage;
-(void)main;


@end


#endif