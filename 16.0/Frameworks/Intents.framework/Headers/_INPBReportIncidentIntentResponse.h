// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBREPORTINCIDENTINTENTRESPONSE_H
#define _INPBREPORTINCIDENTINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBReportIncidentIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBLocation.h"

@interface _INPBReportIncidentIntentResponse : PBCodable <_INPBReportIncidentIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _transportTypes;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLocation *location; // ivar: _location
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedTypes; // ivar: _supportedTypes
@property (readonly, nonatomic) NSUInteger supportedTypesCount;
@property (readonly, nonatomic) *int transportTypes;
@property (readonly, nonatomic) NSUInteger transportTypesCount;


+(BOOL)supportsSecureCoding;
+(Class)supportedTypeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)supportedTypeAtIndex:(NSUInteger)arg0 ;
-(id)transportTypesAsString:(int)arg0 ;
-(int)StringAsTransportTypes:(id)arg0 ;
-(int)transportTypeAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedType:(id)arg0 ;
-(void)addTransportType:(int)arg0 ;
-(void)clearSupportedTypes;
-(void)clearTransportTypes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif