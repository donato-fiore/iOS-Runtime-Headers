// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADPDEVICEPLAYSOUND_H
#define SADPDEVICEPLAYSOUND_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *devices;


+(id)devicePlaySound;
+(id)devicePlaySoundWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif