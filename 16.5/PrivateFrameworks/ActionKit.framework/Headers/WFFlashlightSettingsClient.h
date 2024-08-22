// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFLASHLIGHTSETTINGSCLIENT_H
#define WFFLASHLIGHTSETTINGSCLIENT_H

@class AVFlashlight;


#import "WFSettingsClient.h"

@interface WFFlashlightSettingsClient : WFSettingsClient

@property (readonly, nonatomic) AVFlashlight *flashlight; // ivar: _flashlight


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithFlashlight:(id)arg0 ;
-(void)toggleWithBrightnessLevel:(float)arg0 completionHandler:(id)arg1 ;
-(void)turnOffWithCompletionHandler:(id)arg0 ;
-(void)turnOnWithBrightnessLevel:(float)arg0 completionHandler:(id)arg1 ;


@end


#endif