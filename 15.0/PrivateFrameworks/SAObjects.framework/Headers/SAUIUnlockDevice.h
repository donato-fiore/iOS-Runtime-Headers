// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIUNLOCKDEVICE_H
#define SAUIUNLOCKDEVICE_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *cancellationCommands;
@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;


+(id)unlockDevice;
+(id)unlockDeviceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif