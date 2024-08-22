// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCASSISTANTMUTABLEREMOTECONTROLDESTINATION_H
#define MPCASSISTANTMUTABLEREMOTECONTROLDESTINATION_H

@class NSString, NSArray;


#import "MPCAssistantRemoteControlDestination.h"

@interface MPCAssistantMutableRemoteControlDestination : MPCAssistantRemoteControlDestination

@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSArray *hashedOutputDeviceUIDs;
@property (nonatomic) *void origin;
@property (nonatomic) BOOL originatingDeviceControl;
@property (copy, nonatomic) NSString *originatingOutputDeviceUID;
@property (copy, nonatomic) NSArray *outputDeviceUIDs;
@property (copy, nonatomic) NSString *outputGroupID;
@property (copy, nonatomic) NSArray *outputGroups;
@property (copy, nonatomic) NSString *playerID;
@property (nonatomic) BOOL singleGroup;




@end


#endif