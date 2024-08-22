// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPUSHNOTIFICATIONCONTROLLER_H
#define MAPUSHNOTIFICATIONCONTROLLER_H

@class NSXPCConnection, NSLock;
@protocol MAServiceClientProtocol;

#import <Foundation/Foundation.h>


@interface MAPushNotificationController : NSObject <MAServiceClientProtocol>



@property (retain) NSXPCConnection *serviceConnection; // ivar: _serviceConnection
@property (retain, nonatomic) NSLock *serviceConnectionLock; // ivar: _serviceConnectionLock


+(id)sharedInstance;
-(id)asyncProxy;
-(id)init;
-(id)pushJobDescriptions;
-(id)subscribedChannelIDs;
-(id)synchronousProxy;
-(void)addSyntheticJobWithType:(id)arg0 assetSpecifier:(id)arg1 matchingAssetVersion:(id)arg2 triggerInterval:(NSInteger)arg3 ;
-(void)asyncSubscribeToChannelWithIdentifier:(id)arg0 ;
-(void)asyncUnsubscribeToChannelWithIdentifier:(id)arg0 ;
-(void)didReceivePushNotificationWithInfo:(id)arg0 ;
-(void)subscribeToChannelWithIdentifier:(id)arg0 ;
-(void)subscribedChannelIDsWithCompletion:(id)arg0 ;
-(void)triggerNotificationWithPayload:(id)arg0 ;
-(void)unsubscribeFromAllChannels;
-(void)unsubscribeToChannelWithIdentifier:(id)arg0 ;


@end


#endif