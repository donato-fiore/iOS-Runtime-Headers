// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHVEHICLEEVENTDELETE_H
#define SALOCALSEARCHVEHICLEEVENTDELETE_H

@class NSArray;


#import "SADomainCommand.h"

@interface SALocalSearchVehicleEventDelete : SADomainCommand

@property (copy, nonatomic) NSArray *eventIds;


+(id)vehicleEventDelete;
+(id)vehicleEventDeleteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif