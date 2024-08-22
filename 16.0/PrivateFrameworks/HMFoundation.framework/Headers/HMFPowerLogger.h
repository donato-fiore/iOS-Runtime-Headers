// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFPOWERLOGGER_H
#define HMFPOWERLOGGER_H



#import "HMFObject.h"

@interface HMFPowerLogger : HMFObject



+(id)sharedPowerLogger;
-(id)linkTypeDescription:(NSInteger)arg0 ;
-(void)reportCharacteristicNotificationRegistrationEvent:(BOOL)arg0 clientIdentifier:(id)arg1 ;
-(void)reportConnection:(id)arg0 linkType:(NSInteger)arg1 ;
-(void)reportConnection:(id)arg0 linkType:(NSInteger)arg1 accessoryCategory:(id)arg2 ;
-(void)reportDisconnection:(id)arg0 linkType:(NSInteger)arg1 accessoryCategory:(id)arg2 ;
-(void)reportIncomingAdvertisementChange:(id)arg0 ;
-(void)reportIncomingAdvertisementChange:(id)arg0 accessoryCategory:(id)arg1 ;
-(void)reportIncomingCloudPush:(id)arg0 ;
-(void)reportIncomingIDSPush:(id)arg0 fromToken:(id)arg1 ;
-(void)reportIncomingIPEvent:(id)arg0 ;
-(void)reportIncomingIPEvent:(id)arg0 accessoryCategory:(id)arg1 ;
-(void)reportIncomingLoxyMessage:(id)arg0 ;
-(void)reportRemoteReachabilityRegistrationEvent:(BOOL)arg0 clientIdentifier:(id)arg1 ;
-(void)reportToPowerLogDestinationTable:(struct __CFString *)arg0 withEventDictionary:(id)arg1 ;
-(void)reportWakeEvent:(id)arg0 linkType:(NSInteger)arg1 accessoryCategory:(id)arg2 ;


@end


#endif