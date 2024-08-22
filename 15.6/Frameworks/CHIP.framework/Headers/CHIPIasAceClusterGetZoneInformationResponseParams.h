// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPIASACECLUSTERGETZONEINFORMATIONRESPONSEPARAMS_H
#define CHIPIASACECLUSTERGETZONEINFORMATIONRESPONSEPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPIasAceClusterGetZoneInformationResponseParams : NSObject

@property (retain, nonatomic) NSNumber *ieeeAddress; // ivar: _ieeeAddress
@property (retain, nonatomic) NSNumber *zoneId; // ivar: _zoneId
@property (retain, nonatomic) NSString *zoneLabel; // ivar: _zoneLabel
@property (retain, nonatomic) NSNumber *zoneType; // ivar: _zoneType


-(id)init;


@end


#endif