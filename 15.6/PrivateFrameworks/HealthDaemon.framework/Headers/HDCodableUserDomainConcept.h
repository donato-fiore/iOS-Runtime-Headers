// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEUSERDOMAINCONCEPT_H
#define HDCODABLEUSERDOMAINCONCEPT_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "HDCodableUserDomainConceptTypeIdentifier.h"

@interface HDCodableUserDomainConcept : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSMutableArray *codings; // ivar: _codings
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) BOOL hasBuild;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasDeleted;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) BOOL hasPatchVersion;
@property (readonly, nonatomic) BOOL hasTypeData;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) HDCodableUserDomainConceptTypeIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *links; // ivar: _links
@property (nonatomic) int majorVersion; // ivar: _majorVersion
@property (nonatomic) int minorVersion; // ivar: _minorVersion
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (nonatomic) int patchVersion; // ivar: _patchVersion
@property (retain, nonatomic) NSMutableArray *properties; // ivar: _properties
@property (retain, nonatomic) NSData *typeData; // ivar: _typeData
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)codingsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)linksAtIndex:(NSUInteger)arg0 ;
-(id)propertiesAtIndex:(NSUInteger)arg0 ;
-(void)addCodings:(id)arg0 ;
-(void)addLinks:(id)arg0 ;
-(void)addProperties:(id)arg0 ;
-(void)clearCodings;
-(void)clearLinks;
-(void)clearProperties;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif