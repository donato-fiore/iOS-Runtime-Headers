// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFSMTPDELIVERY_H
#define MFSMTPDELIVERY_H



#import "MFMailDelivery.h"
#import "MFSMTPConnection.h"

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}




+(id)log;
-(Class)deliveryClass;
-(id)deliverMessageData:(id)arg0 toRecipients:(id)arg1 ;
-(void)_openConnection;
-(void)setAccount:(id)arg0 ;


@end


#endif