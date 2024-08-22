// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCGEOFENCEINFO_H
#define MCGEOFENCEINFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MCGeofenceInfo : NSObject

@property (retain, nonatomic) NSString *geofenceId; // ivar: _geofenceId
@property (retain, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (retain, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (retain, nonatomic) NSNumber *radius; // ivar: _radius


-(id)description;


@end


#endif