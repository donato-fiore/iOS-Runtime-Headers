// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSTARTAUDIOCALLINTENTRESPONSE_H
#define _INPBSTARTAUDIOCALLINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBStartAudioCallIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBCallMetrics.h"

@interface _INPBStartAudioCallIntentResponse : PBCodable <_INPBStartAudioCallIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int audioRoute; // ivar: _audioRoute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAudioRoute;
@property (readonly, nonatomic) BOOL hasMetrics;
@property (readonly, nonatomic) BOOL hasStatus;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBCallMetrics *metrics; // ivar: _metrics
@property (copy, nonatomic) NSString *status; // ivar: _status
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *targetContacts; // ivar: _targetContacts
@property (readonly, nonatomic) NSUInteger targetContactsCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioRouteAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)targetContactsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAudioRoute:(id)arg0 ;
-(void)addTargetContacts:(id)arg0 ;
-(void)clearTargetContacts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif