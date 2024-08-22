// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBGETVISUALCODEINTENT_H
#define _INPBGETVISUALCODEINTENT_H

@class PBCodable, NSString;
@protocol _INPBGetVisualCodeIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBGetVisualCodeIntent : PBCodable <_INPBGetVisualCodeIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasVisualCodeType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (nonatomic) int visualCodeType; // ivar: _visualCodeType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)visualCodeTypeAsString:(int)arg0 ;
-(int)StringAsVisualCodeType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif