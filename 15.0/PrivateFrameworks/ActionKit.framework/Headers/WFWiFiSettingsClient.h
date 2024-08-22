// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWIFISETTINGSCLIENT_H
#define WFWIFISETTINGSCLIENT_H

@class NSString, CWFInterface;
@protocol WFBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFWiFiSettingsClient : WFSettingsClient <WFBooleanStateSetting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CWFInterface *interface; // ivar: _interface
@property (readonly) Class superclass;


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)BSSID;
-(id)initWithInterface:(id)arg0 ;
-(id)networkName;
-(void)dealloc;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif