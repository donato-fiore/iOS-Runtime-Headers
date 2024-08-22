// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSELECTIONITEM_H
#define _INPBSELECTIONITEM_H

@class PBCodable, NSString;
@protocol _INPBSelectionItem, NSSecureCoding, NSCopying;


#import "_INPBIntentSlotValue.h"

@interface _INPBSelectionItem : PBCodable <_INPBSelectionItem, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasVocabularyValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid
@property (retain, nonatomic) _INPBIntentSlotValue *value; // ivar: _value
@property (copy, nonatomic) NSString *vocabularyValue; // ivar: _vocabularyValue


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