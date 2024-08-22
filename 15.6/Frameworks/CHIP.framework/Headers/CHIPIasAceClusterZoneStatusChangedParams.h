// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPIASACECLUSTERZONESTATUSCHANGEDPARAMS_H
#define CHIPIASACECLUSTERZONESTATUSCHANGEDPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPIasAceClusterZoneStatusChangedParams : NSObject

@property (retain, nonatomic) NSNumber *audibleNotification; // ivar: _audibleNotification
@property (retain, nonatomic) NSNumber *zoneId; // ivar: _zoneId
@property (retain, nonatomic) NSString *zoneLabel; // ivar: _zoneLabel
@property (retain, nonatomic) NSNumber *zoneStatus; // ivar: _zoneStatus


-(id)init;


@end


#endif