// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSNOTIFICATIONSERVICE_H
#define BCSNOTIFICATIONSERVICE_H

@class NSXPCConnection;
@protocol BCSNotificationServiceProtocol;

#import <Foundation/Foundation.h>

#import "BCSNFCReader.h"

@interface BCSNotificationService : NSObject <BCSNotificationServiceProtocol>

 {
    BCSNFCReader *_nfcReader;
    NSXPCConnection *_connection;
}




-(id)initWithConnection:(id)arg0 ;
-(void)_cancelNotificationsForCodeType:(NSInteger)arg0 ;
-(void)_didReceiveNotificationResponse:(id)arg0 ;
-(void)cancelNotificationsForCodeType:(NSInteger)arg0 ;
-(void)didReceiveNotificationResponse:(id)arg0 ;
-(void)notifyParsedCodeWithData:(id)arg0 codePayload:(id)arg1 shouldReplacePreviousNotifications:(BOOL)arg2 reply:(id)arg3 ;
-(void)startNFCReaderWithDelegate:(id)arg0 ;
-(void)stopNFCReader;


@end


#endif