// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBGETVISUALCODEINTENTRESPONSE_H
#define _INPBGETVISUALCODEINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBGetVisualCodeIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"

@interface _INPBGetVisualCodeIntentResponse : PBCodable <_INPBGetVisualCodeIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasVisualCodeImage;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBImageValue *visualCodeImage; // ivar: _visualCodeImage


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