// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INBOATTRIP_H
#define INBOATTRIP_H

@class CLPlacemark, NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"

@interface INBoatTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CLPlacemark *arrivalBoatTerminalLocation; // ivar: _arrivalBoatTerminalLocation
@property (readonly, copy, nonatomic) NSString *boatName; // ivar: _boatName
@property (readonly, copy, nonatomic) NSString *boatNumber; // ivar: _boatNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CLPlacemark *departureBoatTerminalLocation; // ivar: _departureBoatTerminalLocation
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
-(id)initWithProvider:(id)arg0 boatName:(id)arg1 boatNumber:(id)arg2 tripDuration:(id)arg3 departureBoatTerminalLocation:(id)arg4 arrivalBoatTerminalLocation:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif