// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGGETNOISEMANAGEMENT_H
#define SASETTINGGETNOISEMANAGEMENT_H



#import "SASettingGetValue.h"

@interface SASettingGetNoiseManagement : SASettingGetValue



+(id)getNoiseManagement;
+(id)getNoiseManagementWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif