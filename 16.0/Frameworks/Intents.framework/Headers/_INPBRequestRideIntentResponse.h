// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBREQUESTRIDEINTENTRESPONSE_H
#define _INPBREQUESTRIDEINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBRequestRideIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBRideStatus.h"

@interface _INPBRequestRideIntentResponse : PBCodable <_INPBRequestRideIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRideStatus;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBRideStatus *rideStatus; // ivar: _rideStatus
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif