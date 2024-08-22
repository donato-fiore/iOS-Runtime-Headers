// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCREATENOTEINTENT_H
#define _INPBCREATENOTEINTENT_H

@class PBCodable, NSString;
@protocol _INPBCreateNoteIntent, NSSecureCoding, NSCopying;


#import "_INPBNoteContent.h"
#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBCreateNoteIntent : PBCodable <_INPBCreateNoteIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBNoteContent *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDataString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDataString *title; // ivar: _title


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