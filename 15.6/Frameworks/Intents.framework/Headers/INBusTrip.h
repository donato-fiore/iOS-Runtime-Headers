// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INBUSTRIP_H
#define INBUSTRIP_H

@class CLPlacemark, NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"

@interface INBusTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CLPlacemark *arrivalBusStopLocation; // ivar: _arrivalBusStopLocation
@property (readonly, copy, nonatomic) NSString *arrivalPlatform; // ivar: _arrivalPlatform
@property (readonly, copy, nonatomic) NSString *busName; // ivar: _busName
@property (readonly, copy, nonatomic) NSString *busNumber; // ivar: _busNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CLPlacemark *departureBusStopLocation; // ivar: _departureBusStopLocation
@property (readonly, copy, nonatomic) NSString *departurePlatform; // ivar: _departurePlatform
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *provider; // ivar: _provider
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INDateComponentsRange *tripDuration; // ivar: _tripDuration


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProvider:(id)arg0 busName:(id)arg1 busNumber:(id)arg2 tripDuration:(id)arg3 departureBusStopLocation:(id)arg4 departurePlatform:(id)arg5 arrivalBusStopLocation:(id)arg6 arrivalPlatform:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif