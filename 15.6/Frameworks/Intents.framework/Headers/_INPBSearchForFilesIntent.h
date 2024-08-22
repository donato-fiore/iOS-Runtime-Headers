// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSEARCHFORFILESINTENT_H
#define _INPBSEARCHFORFILESINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSearchForFilesIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBSearchForFilesIntent : PBCodable <_INPBSearchForFilesIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBString *appId; // ivar: _appId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *entityName; // ivar: _entityName
@property (nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic) BOOL hasAppId;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasScope;
@property (readonly, nonatomic) BOOL hasScopeEntityName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (readonly, nonatomic) NSUInteger propertiesCount;
@property (nonatomic) int scope; // ivar: _scope
@property (retain, nonatomic) _INPBString *scopeEntityName; // ivar: _scopeEntityName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesAtIndex:(NSUInteger)arg0 ;
-(id)scopeAsString:(int)arg0 ;
-(int)StringAsEntityType:(id)arg0 ;
-(int)StringAsScope:(id)arg0 ;
-(void)addProperties:(id)arg0 ;
-(void)clearProperties;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif