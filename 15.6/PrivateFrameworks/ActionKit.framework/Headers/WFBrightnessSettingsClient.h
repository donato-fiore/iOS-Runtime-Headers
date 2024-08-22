// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFBRIGHTNESSSETTINGSCLIENT_H
#define WFBRIGHTNESSSETTINGSCLIENT_H

@class NSString;
@protocol WFDecimalValueSetting;


#import "WFSettingsClient.h"

@interface WFBrightnessSettingsClient : WFSettingsClient <WFDecimalValueSetting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(void)getValueWithCompletionHandler:(id)arg0 ;
-(void)setValue:(float)arg0 completionHandler:(id)arg1 ;


@end


#endif