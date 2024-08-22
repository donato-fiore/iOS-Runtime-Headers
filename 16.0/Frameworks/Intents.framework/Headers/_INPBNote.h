// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBNOTE_H
#define _INPBNOTE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBNote, NSSecureCoding, NSCopying;


#import "_INPBDateTime.h"
#import "_INPBDataString.h"

@interface _INPBNote : PBCodable <_INPBNote, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSArray *contents; // ivar: _contents
@property (readonly, nonatomic) NSUInteger contentsCount;
@property (retain, nonatomic) _INPBDateTime *createdDateTime; // ivar: _createdDateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDataString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime; // ivar: _modifiedDateTime
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDataString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(Class)contentType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)contentAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addContent:(id)arg0 ;
-(void)clearContents;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif