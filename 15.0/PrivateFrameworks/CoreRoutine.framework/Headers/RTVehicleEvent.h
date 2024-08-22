// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTVEHICLEEVENT_H
#define RTVEHICLEEVENT_H

@class NSDate, NSUUID, NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTLocation.h"
#import "RTMapItem.h"
#import "RTLocationOfInterest.h"

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL confirmed; // ivar: _confirmed
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) RTLocation *location; // ivar: _location
@property (nonatomic) BOOL locationFinalized; // ivar: _locationFinalized
@property (nonatomic) NSUInteger locationQuality; // ivar: _locationQuality
@property (retain, nonatomic) RTMapItem *mapItem; // ivar: _mapItem
@property (copy, nonatomic) RTLocationOfInterest *nearbyLocationOfInterest; // ivar: _nearbyLocationOfInterest
@property (copy, nonatomic) NSString *notes; // ivar: _notes
@property (retain, nonatomic) NSData *photo; // ivar: _photo
@property (nonatomic) BOOL userSetLocation; // ivar: _userSetLocation
@property (nonatomic) BOOL usualLocation; // ivar: _usualLocation
@property (copy, nonatomic) NSString *vehicleIdentifier; // ivar: _vehicleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 location:(id)arg1 vehicleIdentifier:(id)arg2 userSetLocation:(BOOL)arg3 notes:(id)arg4 identifier:(id)arg5 photo:(id)arg6 mapItem:(id)arg7 confirmed:(BOOL)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif