// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSNOTIFICATIONSERVICECONNECTION_H
#define BCSNOTIFICATIONSERVICECONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface BCSNotificationServiceConnection : NSObject

@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection


-(void)cancelNotificationsForCodeType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didReceiveNotificationResponse:(id)arg0 ;
-(void)notifyParsedCodeWithData:(id)arg0 codePayload:(id)arg1 shouldReplacePreviousNotifications:(BOOL)arg2 withReply:(id)arg3 ;
-(void)startNFCReaderWithDelegate:(id)arg0 errorHandler:(id)arg1 ;
-(void)stopNFCReaderWithErrorHandler:(id)arg0 ;


@end


#endif