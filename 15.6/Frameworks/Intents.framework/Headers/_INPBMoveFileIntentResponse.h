// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBMOVEFILEINTENTRESPONSE_H
#define _INPBMOVEFILEINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBMoveFileIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBMoveFileIntentResponse : PBCodable <_INPBMoveFileIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _entityTypes;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *destinationName; // ivar: _destinationName
@property (copy, nonatomic) NSArray *entityNames; // ivar: _entityNames
@property (readonly, nonatomic) NSUInteger entityNamesCount;
@property (readonly, nonatomic) *int entityTypes;
@property (readonly, nonatomic) NSUInteger entityTypesCount;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) BOOL hasOverwrite;
@property (readonly, nonatomic) BOOL hasSourceName;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL overwrite; // ivar: _overwrite
@property (retain, nonatomic) _INPBString *sourceName; // ivar: _sourceName
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)entityNameType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityNameAtIndex:(NSUInteger)arg0 ;
-(id)entityTypesAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsEntityTypes:(id)arg0 ;
-(int)entityTypeAtIndex:(NSUInteger)arg0 ;
-(void)addEntityName:(id)arg0 ;
-(void)addEntityType:(int)arg0 ;
-(void)clearEntityNames;
-(void)clearEntityTypes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif