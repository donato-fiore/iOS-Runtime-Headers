// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRYCHANGEDEVENT_H
#define MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRYCHANGEDEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "MTRAccessControlClusterAccessControlEntry.h"

@interface MTRAccessControlClusterAccessControlEntryChangedEvent : NSObject

@property (retain, nonatomic) NSNumber *adminFabricIndex; // ivar: _adminFabricIndex
@property (retain, nonatomic) NSNumber *adminNodeID; // ivar: _adminNodeID
@property (retain, nonatomic) NSNumber *adminPasscodeID; // ivar: _adminPasscodeID
@property (retain, nonatomic) NSNumber *changeType; // ivar: _changeType
@property (retain, nonatomic) MTRAccessControlClusterAccessControlEntry *latestValue; // ivar: _latestValue


-(id)description;
-(id)init;


@end


#endif