// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAIRPLANEMODESETTINGSCLIENT_H
#define WFAIRPLANEMODESETTINGSCLIENT_H

@class NSString;
@protocol WFBooleanStateSetting;


#import "WFRadiosPreferencesSettingsClient.h"

@interface WFAirplaneModeSettingsClient : WFRadiosPreferencesSettingsClient <WFBooleanStateSetting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif