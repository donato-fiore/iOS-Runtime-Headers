// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSERVICEAGENTIMPL_H
#define IMSERVICEAGENTIMPL_H



#import "IMServiceAgent.h"

@interface IMServiceAgentImpl : IMServiceAgent



+(id)imageNameForStatus:(NSUInteger)arg0 ;
+(id)imageURLForStatus:(NSUInteger)arg0 ;
+(id)notificationCenter;
+(id)sharedAgent;
+(void)_determineStatusImageAppearance;
+(void)_statusImageAppearanceChanged:(id)arg0 ;
+(void)forgetStatusImageAppearance;
+(void)initialize;
-(NSUInteger)vcCapabilities;
-(id)init;
-(id)myAvailableMessages;
-(id)myAwayMessages;
-(id)notificationCenter;
-(id)serviceWithName:(id)arg0 ;
-(void)_customMessagesChanged:(id)arg0 ;
-(void)_daemonConnected:(id)arg0 ;
-(void)_daemonDisconnected:(id)arg0 ;
-(void)_statusImageAppearanceChanged:(id)arg0 ;
-(void)dealloc;
-(void)launchIfNecessary;
-(void)setMyAvailableMessages:(id)arg0 ;
-(void)setMyAwayMessages:(id)arg0 ;
-(void)setMyStatus:(NSUInteger)arg0 message:(id)arg1 ;
-(void)setupComplete;
-(void)vcCapabilitiesChanged:(NSUInteger)arg0 ;


@end


#endif