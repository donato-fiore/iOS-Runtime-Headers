// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSETCLIMATESETTINGSINCARINTENTRESPONSE_H
#define _INPBSETCLIMATESETTINGSINCARINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBSetClimateSettingsInCarIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSetClimateSettingsInCarIntentResponse : PBCodable <_INPBSetClimateSettingsInCarIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
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