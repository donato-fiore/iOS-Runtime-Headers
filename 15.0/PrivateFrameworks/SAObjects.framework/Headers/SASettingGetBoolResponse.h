// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGGETBOOLRESPONSE_H
#define SASETTINGGETBOOLRESPONSE_H



#import "SASettingGetValueResponse.h"

@interface SASettingGetBoolResponse : SASettingGetValueResponse



+(id)getBoolResponse;
+(id)getBoolResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif