// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPIASZONECLUSTERZONESTATUSCHANGENOTIFICATIONPARAMS_H
#define CHIPIASZONECLUSTERZONESTATUSCHANGENOTIFICATIONPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPIasZoneClusterZoneStatusChangeNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *delay; // ivar: _delay
@property (retain, nonatomic) NSNumber *extendedStatus; // ivar: _extendedStatus
@property (retain, nonatomic) NSNumber *zoneId; // ivar: _zoneId
@property (retain, nonatomic) NSNumber *zoneStatus; // ivar: _zoneStatus


-(id)init;


@end


#endif