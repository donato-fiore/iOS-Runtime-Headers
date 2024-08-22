// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTRUETONESETTINGSCLIENT_H
#define WFTRUETONESETTINGSCLIENT_H

@class CBAdaptationClient, CBClient;


#import "WFSettingsClient.h"

@interface WFTrueToneSettingsClient : WFSettingsClient

@property (readonly, nonatomic) CBAdaptationClient *adaptationClient; // ivar: _adaptationClient
@property (readonly, nonatomic) CBClient *brightnessClient; // ivar: _brightnessClient


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithBrightnessClient:(id)arg0 adaptationClient:(id)arg1 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif