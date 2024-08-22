// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGGETVOICEOVER_H
#define SASETTINGGETVOICEOVER_H



#import "SASettingGetBool.h"

@interface SASettingGetVoiceOver : SASettingGetBool



+(id)getVoiceOver;
+(id)getVoiceOverWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif