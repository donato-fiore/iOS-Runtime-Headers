// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCREATENOTEINTENTRESPONSE_H
#define _INPBCREATENOTEINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBCreateNoteIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBNote.h"

@interface _INPBCreateNoteIntentResponse : PBCodable <_INPBCreateNoteIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBNote *createdNote; // ivar: _createdNote
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCreatedNote;
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