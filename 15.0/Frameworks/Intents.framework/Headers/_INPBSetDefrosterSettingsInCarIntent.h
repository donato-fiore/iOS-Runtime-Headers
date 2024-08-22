// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSETDEFROSTERSETTINGSINCARINTENT_H
#define _INPBSETDEFROSTERSETTINGSINCARINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetDefrosterSettingsInCarIntent, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <_INPBSetDefrosterSettingsInCarIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *carName; // ivar: _carName
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defroster; // ivar: _defroster
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enable; // ivar: _enable
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasDefroster;
@property (nonatomic) BOOL hasEnable;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defrosterAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsDefroster:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif