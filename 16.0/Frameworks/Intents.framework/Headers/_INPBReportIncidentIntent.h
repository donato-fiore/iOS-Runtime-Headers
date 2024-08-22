// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBREPORTINCIDENTINTENT_H
#define _INPBREPORTINCIDENTINTENT_H

@class PBCodable, NSString;
@protocol _INPBReportIncidentIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBSupportedTrafficIncidentType.h"
#import "_INPBIntentMetadata.h"
#import "_INPBLocation.h"

@interface _INPBReportIncidentIntent : PBCodable <_INPBReportIncidentIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBString *additionalDetails; // ivar: _additionalDetails
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAdditionalDetails;
@property (readonly, nonatomic) BOOL hasIncidentType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasIsClear;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBSupportedTrafficIncidentType *incidentType; // ivar: _incidentType
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) BOOL isClear; // ivar: _isClear
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBLocation *userLocation; // ivar: _userLocation


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