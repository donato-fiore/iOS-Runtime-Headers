// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGGETWIFI_H
#define SASETTINGGETWIFI_H



#import "SASettingGetBool.h"

@interface SASettingGetWiFi : SASettingGetBool



+(id)getWiFi;
+(id)getWiFiWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif