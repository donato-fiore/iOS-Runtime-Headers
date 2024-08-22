// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGENOTIFICATIONCONTROLLER_H
#define IMMESSAGENOTIFICATIONCONTROLLER_H

@class NSString, IDSService;
@protocol IDSServiceDelegate;

#import <Foundation/Foundation.h>


@interface IMMessageNotificationController : NSObject <IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *messageNotificationControllerIDSService; // ivar: _messageNotificationControllerIDSService
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_deviceIsAudioAccessory:(id)arg0 ;
-(BOOL)_isCurrentDeviceAudioAccessory;
-(BOOL)audioAccessoryDeviceWithTokenURIExists:(id)arg0 ;
-(id)_copyIDForDevice:(id)arg0 ;
-(id)_copyIDSIdentifierOrDefault:(id)arg0 ;
-(id)init;
-(void)_executeCommandFromMessageRequest:(id)arg0 ;
-(void)_playTone;
-(void)_sendNotificationMessageRequest:(id)arg0 toTokenURI:(id)arg1 ;
-(void)dealloc;
-(void)sendNotificationMessageToTokenURI:(id)arg0 withCommmand:(NSInteger)arg1 ;
-(void)sendNotificationMessageToUniqueID:(id)arg0 withCommmand:(NSInteger)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif