// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGSETBOOLRESPONSE_H
#define SASETTINGSETBOOLRESPONSE_H



#import "SASettingSetValueResponse.h"

@interface SASettingSetBoolResponse : SASettingSetValueResponse



+(id)setBoolResponse;
+(id)setBoolResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif