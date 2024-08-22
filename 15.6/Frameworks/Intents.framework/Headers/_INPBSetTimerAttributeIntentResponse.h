// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSETTIMERATTRIBUTEINTENTRESPONSE_H
#define _INPBSETTIMERATTRIBUTEINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBSetTimerAttributeIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBTimer.h"

@interface _INPBSetTimerAttributeIntentResponse : PBCodable <_INPBSetTimerAttributeIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUpdatedTimer;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTimer *updatedTimer; // ivar: _updatedTimer


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