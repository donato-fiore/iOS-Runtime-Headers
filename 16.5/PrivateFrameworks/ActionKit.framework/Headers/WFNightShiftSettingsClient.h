// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFNIGHTSHIFTSETTINGSCLIENT_H
#define WFNIGHTSHIFTSETTINGSCLIENT_H

@class CBBlueLightClient;


#import "WFSettingsClient.h"

@interface WFNightShiftSettingsClient : WFSettingsClient

@property (readonly, nonatomic) CBBlueLightClient *blueLightClient; // ivar: _blueLightClient


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithBlueLightClient:(id)arg0 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif