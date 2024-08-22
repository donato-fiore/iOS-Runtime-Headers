// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSHAREFILEINTENT_H
#define _INPBSHAREFILEINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBShareFileIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBShareFileIntent : PBCodable <_INPBShareFileIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entityNames; // ivar: _entityNames
@property (readonly, nonatomic) NSUInteger entityNamesCount;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasShareMode;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSUInteger recipientsCount;
@property (nonatomic) int shareMode; // ivar: _shareMode
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)entityNameType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityNameAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)recipientsAtIndex:(NSUInteger)arg0 ;
-(id)shareModeAsString:(int)arg0 ;
-(int)StringAsShareMode:(id)arg0 ;
-(void)addEntityName:(id)arg0 ;
-(void)addRecipients:(id)arg0 ;
-(void)clearEntityNames;
-(void)clearRecipients;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif