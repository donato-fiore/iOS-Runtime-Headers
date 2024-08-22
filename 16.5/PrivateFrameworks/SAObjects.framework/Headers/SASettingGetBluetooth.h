// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGGETBLUETOOTH_H
#define SASETTINGGETBLUETOOTH_H



#import "SASettingGetBool.h"

@interface SASettingGetBluetooth : SASettingGetBool



+(id)getBluetooth;
+(id)getBluetoothWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif