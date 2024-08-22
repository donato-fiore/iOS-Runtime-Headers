// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRADIOSPREFERENCESSETTINGSCLIENT_H
#define WFRADIOSPREFERENCESSETTINGSCLIENT_H

@class RadiosPreferences;


#import "WFSettingsClient.h"

@interface WFRadiosPreferencesSettingsClient : WFSettingsClient

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithRadiosPreferences:(id)arg0 ;


@end


#endif