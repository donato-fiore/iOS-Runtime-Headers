// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTARTNAVIGATIONREQUEST_H
#define STSTARTNAVIGATIONREQUEST_H

@class AFSiriRequest, STSiriLocation, NSDate, NSString;



@interface STStartNavigationRequest : AFSiriRequest {
    STSiriLocation *_startLocation;
    STSiriLocation *_destinationLocation;
    NSInteger _directionsType;
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)directionsType;
-(id)_initWithStartLocation:(id)arg0 destinationLocation:(id)arg1 directionsType:(NSInteger)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 extSessionGuid:(id)arg5 extSessionGuidCreatedTimestamp:(id)arg6 ;
-(id)arrivalDate;
-(id)createResponse;
-(id)departureDate;
-(id)destinationLocation;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)initWithCoder:(id)arg0 ;
-(id)startLocation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif