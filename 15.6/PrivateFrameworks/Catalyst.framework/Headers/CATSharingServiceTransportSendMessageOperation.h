// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATSHARINGSERVICETRANSPORTSENDMESSAGEOPERATION_H
#define CATSHARINGSERVICETRANSPORTSENDMESSAGEOPERATION_H

@protocol CATSharingConnection;


#import "CATOperation.h"
#import "CATMessage.h"

@interface CATSharingServiceTransportSendMessageOperation : CATOperation {
    id<CATSharingConnection> *mConnection;
    CATMessage *mMessage;
}




-(BOOL)isAsynchronous;
-(id)initWithConnection:(id)arg0 message:(id)arg1 ;
-(void)cancel;
-(void)didSendMessageWithError:(id)arg0 ;
-(void)main;
-(void)sendMessage;


@end


#endif