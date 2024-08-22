// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGSETBLUETOOTH_H
#define SASETTINGSETBLUETOOTH_H



#import "SASettingSetBool.h"

@interface SASettingSetBluetooth : SASettingSetBool



+(id)setBluetooth;
+(id)setBluetoothWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif