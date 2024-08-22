// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFANNOUNCENOTIFICATIONSSETTINGSCLIENT_H
#define WFANNOUNCENOTIFICATIONSSETTINGSCLIENT_H

@class BBSettingsGateway;


#import "WFSettingsClient.h"

@interface WFAnnounceNotificationsSettingsClient : WFSettingsClient

@property (retain, nonatomic) BBSettingsGateway *settingsGateway; // ivar: _settingsGateway


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithGateway:(id)arg0 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif