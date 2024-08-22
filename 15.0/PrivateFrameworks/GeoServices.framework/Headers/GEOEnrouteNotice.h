// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOENROUTENOTICE_H
#define GEOENROUTENOTICE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEORouteAnnotation.h"

@interface GEOEnrouteNotice : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_guidances;
    NSString *_objectIdentifier;
    GEORouteAnnotation *_routeAnnotation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _groupItemHorizontalDisplayOrder;
    unsigned int _groupItemVerticalDisplayOrder;
    unsigned int _highlightDistance;
    unsigned int _objectGroupId;
    unsigned int _priority;
    int _type;
    unsigned int _zilchPathIndex;
    ? _flags;
}


@property (nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property (nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property (retain, nonatomic) NSMutableArray *guidances;
@property (nonatomic) BOOL hasGroupItemHorizontalDisplayOrder;
@property (nonatomic) BOOL hasGroupItemVerticalDisplayOrder;
@property (nonatomic) BOOL hasHighlightDistance;
@property (nonatomic) BOOL hasObjectGroupId;
@property (readonly, nonatomic) BOOL hasObjectIdentifier;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasRouteAnnotation;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic) unsigned int objectGroupId;
@property (retain, nonatomic) NSString *objectIdentifier;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) GEORouteAnnotation *routeAnnotation;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;


+(BOOL)isValid:(id)arg0 ;
+(Class)guidanceType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)guidanceAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addGuidance:(id)arg0 ;
-(void)clearGuidances;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif