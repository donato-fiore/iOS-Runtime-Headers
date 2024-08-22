// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRYCHANGEDEVENT_H
#define MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRYCHANGEDEVENT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRAccessControlClusterAccessControlEntryStruct.h"

@interface MTRAccessControlClusterAccessControlEntryChangedEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *adminNodeID; // ivar: _adminNodeID
@property (copy, nonatomic) NSNumber *adminPasscodeID; // ivar: _adminPasscodeID
@property (copy, nonatomic) NSNumber *changeType; // ivar: _changeType
@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) MTRAccessControlClusterAccessControlEntryStruct *latestValue; // ivar: _latestValue


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif