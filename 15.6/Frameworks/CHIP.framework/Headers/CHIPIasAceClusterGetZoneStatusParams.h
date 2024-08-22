// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPIASACECLUSTERGETZONESTATUSPARAMS_H
#define CHIPIASACECLUSTERGETZONESTATUSPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPIasAceClusterGetZoneStatusParams : NSObject

@property (retain, nonatomic) NSNumber *maxNumberOfZoneIds; // ivar: _maxNumberOfZoneIds
@property (retain, nonatomic) NSNumber *startingZoneId; // ivar: _startingZoneId
@property (retain, nonatomic) NSNumber *zoneStatusMask; // ivar: _zoneStatusMask
@property (retain, nonatomic) NSNumber *zoneStatusMaskFlag; // ivar: _zoneStatusMaskFlag


-(id)init;


@end


#endif