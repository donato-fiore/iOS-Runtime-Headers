// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPLEPUSHNOTIFICATIONHANDLER_H
#define APPLEPUSHNOTIFICATIONHANDLER_H

@class APSConnection, NSData, NSString;
@protocol APSConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ApplePushNotificationHandler : NSObject <APSConnectionDelegate>



@property (retain, nonatomic) APSConnection *apsConnection; // ivar: _apsConnection
@property (readonly, nonatomic) BOOL apsDevEnvironment; // ivar: _apsDevEnvironment
@property (readonly, nonatomic) BOOL apsEnabled; // ivar: _apsEnabled
@property (readonly, nonatomic) NSData *apsToken; // ivar: _apsToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(BOOL)apnsEnabled;
+(BOOL)shouldEnableAPNS;
+(NSUInteger)currentEnvironment;
+(id)apnsTokenString;
+(id)sharedInstance;
+(id)stringFromData:(id)arg0 ;
+(void)activate;
+(void)deactivate;
-(id)init;
-(void)_createApsConnection;
-(void)_parseAPSIncomingMessage:(id)arg0 ;
-(void)_parseUserInfo:(id)arg0 apnsIdentifier:(NSUInteger)arg1 ;
-(void)_shutdownApsConnection;
-(void)connection:(id)arg0 didChangeConnectedStatus:(BOOL)arg1 ;
-(void)connection:(id)arg0 didFailToSendOutgoingMessage:(id)arg1 error:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didSendOutgoingMessage:(id)arg1 ;
-(void)connectionDidReconnect:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif