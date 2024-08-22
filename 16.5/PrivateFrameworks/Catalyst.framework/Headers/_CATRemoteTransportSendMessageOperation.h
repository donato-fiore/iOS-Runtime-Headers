// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CATREMOTETRANSPORTSENDMESSAGEOPERATION_H
#define _CATREMOTETRANSPORTSENDMESSAGEOPERATION_H



#import "CATOperation.h"
#import "CATMessage.h"
#import "CATRemoteTransport.h"

@interface _CATRemoteTransportSendMessageOperation : CATOperation

@property (retain, nonatomic) CATMessage *message; // ivar: _message
@property (weak, nonatomic) CATRemoteTransport *transport; // ivar: _transport


-(BOOL)isAsynchronous;
-(void)didEncodeData:(id)arg0 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didSendData;
-(void)main;


@end


#endif