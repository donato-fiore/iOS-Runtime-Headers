// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPFEATUREHANDLE_H
#define GEORPFEATUREHANDLE_H

@class PBCodable;
@protocol NSCopying;



@interface GEORPFeatureHandle : PBCodable <NSCopying>

 {
    *GEORPFeatureHandleStyleAttribute _styleAttributes;
    NSUInteger _styleAttributesCount;
    NSUInteger _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    ? _flags;
}


@property (nonatomic) unsigned int featureIndex;
@property (nonatomic) unsigned int featureTileX;
@property (nonatomic) unsigned int featureTileY;
@property (nonatomic) unsigned int featureTileZ;
@property (nonatomic) BOOL hasFeatureIndex;
@property (nonatomic) BOOL hasFeatureTileX;
@property (nonatomic) BOOL hasFeatureTileY;
@property (nonatomic) BOOL hasFeatureTileZ;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int style;
@property (readonly, nonatomic) *GEORPFeatureHandleStyleAttribute styleAttributes;
@property (readonly, nonatomic) NSUInteger styleAttributesCount;
@property (nonatomic) int type;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)styleAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsStyle:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(struct GEORPFeatureHandleStyleAttribute )styleAttributeAtIndex:(NSUInteger)arg0 ;
-(void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute )arg0 ;
-(void)clearStyleAttributes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif