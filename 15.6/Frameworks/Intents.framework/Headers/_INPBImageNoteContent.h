// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBIMAGENOTECONTENT_H
#define _INPBIMAGENOTECONTENT_H

@class PBCodable, NSString;
@protocol _INPBImageNoteContent, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"

@interface _INPBImageNoteContent : PBCodable <_INPBImageNoteContent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBImageValue *image; // ivar: _image
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