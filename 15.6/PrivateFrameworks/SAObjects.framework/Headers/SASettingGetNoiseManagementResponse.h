// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGGETNOISEMANAGEMENTRESPONSE_H
#define SASETTINGGETNOISEMANAGEMENTRESPONSE_H



#import "SASettingGetValueResponse.h"

@interface SASettingGetNoiseManagementResponse : SASettingGetValueResponse



+(id)getNoiseManagementResponse;
+(id)getNoiseManagementResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif