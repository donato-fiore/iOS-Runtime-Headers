// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBUNSENDMESSAGESINTENT_H
#define _INPBUNSENDMESSAGESINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBUnsendMessagesIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBUnsendMessagesIntent : PBCodable <_INPBUnsendMessagesIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *messageIdentifiers; // ivar: _messageIdentifiers
@property (readonly, nonatomic) NSUInteger messageIdentifiersCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)messageIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addMessageIdentifiers:(id)arg0 ;
-(void)clearMessageIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif