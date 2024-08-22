// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPIASACECLUSTERGETZONESTATUSRESPONSEPARAMS_H
#define CHIPIASACECLUSTERGETZONESTATUSRESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPIasAceClusterGetZoneStatusResponseParams : NSObject

@property (retain, nonatomic) NSNumber *numberOfZones; // ivar: _numberOfZones
@property (retain, nonatomic) NSNumber *zoneStatusComplete; // ivar: _zoneStatusComplete
@property (retain, nonatomic) NSArray *zoneStatusResult; // ivar: _zoneStatusResult


-(id)init;


@end


#endif