// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCESSCONTROLCLUSTERACCESSCONTROLENTRYCHANGEDEVENT_H
#define CHIPACCESSCONTROLCLUSTERACCESSCONTROLENTRYCHANGEDEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "CHIPAccessControlClusterAccessControlEntry.h"

@interface CHIPAccessControlClusterAccessControlEntryChangedEvent : NSObject

@property (retain, nonatomic) NSNumber *adminFabricIndex; // ivar: _adminFabricIndex
@property (retain, nonatomic) NSNumber *adminNodeID; // ivar: _adminNodeID
@property (retain, nonatomic) NSNumber *adminPasscodeID; // ivar: _adminPasscodeID
@property (retain, nonatomic) NSNumber *changeType; // ivar: _changeType
@property (retain, nonatomic) CHIPAccessControlClusterAccessControlEntry *latestValue; // ivar: _latestValue


-(id)init;


@end


#endif