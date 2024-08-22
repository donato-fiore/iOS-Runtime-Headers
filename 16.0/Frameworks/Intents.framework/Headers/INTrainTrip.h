// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTRAINTRIP_H
#define INTRAINTRIP_H

@class NSString, CLPlacemark;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"

@interface INTrainTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *arrivalPlatform; // ivar: _arrivalPlatform
@property (readonly, copy, nonatomic) CLPlacemark *arrivalStationLocation; // ivar: _arrivalStationLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *departurePlatform; // ivar: _departurePlatform
@property (readonly, copy, nonatomic) CLPlacemark *departureStationLocation; // ivar: _departureStationLocation
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *provider; // ivar: _provider
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *trainName; // ivar: _trainName
@property (readonly, copy, nonatomic) NSString *trainNumber; // ivar: _trainNumber
@property (readonly, copy, nonatomic) INDateComponentsRange *tripDuration; // ivar: _tripDuration


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProvider:(id)arg0 trainName:(id)arg1 trainNumber:(id)arg2 tripDuration:(id)arg3 departureStationLocation:(id)arg4 departurePlatform:(id)arg5 arrivalStationLocation:(id)arg6 arrivalPlatform:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif