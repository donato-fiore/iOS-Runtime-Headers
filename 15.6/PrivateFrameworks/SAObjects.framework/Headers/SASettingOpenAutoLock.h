// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGOPENAUTOLOCK_H
#define SASETTINGOPENAUTOLOCK_H



#import "SASettingOpenSettings.h"

@interface SASettingOpenAutoLock : SASettingOpenSettings



+(id)openAutoLock;
+(id)openAutoLockWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif