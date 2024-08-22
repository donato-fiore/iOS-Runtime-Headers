// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CATIDSSERVICETRANSPORTSENDMESSAGEOPERATION_H
#define _CATIDSSERVICETRANSPORTSENDMESSAGEOPERATION_H



#import "CATOperation.h"
#import "CATIDSServiceTransport.h"
#import "CATIDSServiceConnection.h"
#import "CATMessage.h"

@interface _CATIDSServiceTransportSendMessageOperation : CATOperation {
    CATIDSServiceTransport *mTransport;
    CATIDSServiceConnection *mConnection;
    CATMessage *mMessage;
}




-(BOOL)isAsynchronous;
-(id)initWithConnection:(id)arg0 message:(id)arg1 ;
-(void)cancel;
-(void)didSendDataWithError:(id)arg0 ;
-(void)main;
-(void)sendData;


@end


#endif