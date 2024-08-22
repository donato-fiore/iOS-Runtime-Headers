// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBNOTECONTENT_H
#define _INPBNOTECONTENT_H

@class PBCodable, NSString;
@protocol _INPBNoteContent, NSSecureCoding, NSCopying;


#import "_INPBImageNoteContent.h"
#import "_INPBTextNoteContent.h"

@interface _INPBNoteContent : PBCodable <_INPBNoteContent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBImageNoteContent *image; // ivar: _image
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTextNoteContent *text; // ivar: _text
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif