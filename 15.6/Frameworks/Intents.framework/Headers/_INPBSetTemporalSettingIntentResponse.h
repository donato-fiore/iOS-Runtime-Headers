// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSETTEMPORALSETTINGINTENTRESPONSE_H
#define _INPBSETTEMPORALSETTINGINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBSetTemporalSettingIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRange.h"

@interface _INPBSetTemporalSettingIntentResponse : PBCodable <_INPBSetTemporalSettingIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *errorDetail; // ivar: _errorDetail
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (readonly, nonatomic) BOOL hasOldValue;
@property (readonly, nonatomic) BOOL hasUpdatedValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDateTimeRange *oldValue; // ivar: _oldValue
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDateTimeRange *updatedValue; // ivar: _updatedValue


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