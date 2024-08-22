// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSHOWMAPPOINTREQUEST_H
#define STSHOWMAPPOINTREQUEST_H

@class AFSiriRequest, NSData, NSString, NSDate;



@interface STShowMapPointRequest : AFSiriRequest {
    NSData *_placeData;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}


@property (nonatomic) BOOL isCurrentLocation; // ivar: _isCurrentLocation


+(BOOL)supportsSecureCoding;
-(id)_initWithPlaceData:(id)arg0 extSessionGuid:(id)arg1 extSessionGuidCreatedTimestamp:(id)arg2 ;
-(id)createResponse;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)initWithCoder:(id)arg0 ;
-(id)mapPointData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif