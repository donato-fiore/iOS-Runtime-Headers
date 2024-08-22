// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPERSONALHOTSPOTSETTINGSCLIENT_H
#define WFPERSONALHOTSPOTSETTINGSCLIENT_H

@class NSString;
@protocol WFBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFPersonalHotspotSettingsClient : WFSettingsClient <WFBooleanStateSetting>



@property (nonatomic) *NETRBClient client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithClient:(struct NETRBClient *)arg0 ;
-(void)dealloc;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif