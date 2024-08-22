// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBAPPENDTONOTEINTENTRESPONSE_H
#define _INPBAPPENDTONOTEINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBAppendToNoteIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBNote.h"

@interface _INPBAppendToNoteIntentResponse : PBCodable <_INPBAppendToNoteIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasNote;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBNote *note; // ivar: _note
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