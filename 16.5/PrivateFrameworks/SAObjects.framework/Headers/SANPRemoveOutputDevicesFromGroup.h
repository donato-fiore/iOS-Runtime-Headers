// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SANPREMOVEOUTPUTDEVICESFROMGROUP_H
#define SANPREMOVEOUTPUTDEVICESFROMGROUP_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SANPRemoveOutputDevicesFromGroup : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;


+(id)removeOutputDevicesFromGroup;
+(id)removeOutputDevicesFromGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif