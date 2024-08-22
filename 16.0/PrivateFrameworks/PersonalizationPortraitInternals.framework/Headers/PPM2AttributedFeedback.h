// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPM2ATTRIBUTEDFEEDBACK_H
#define PPM2ATTRIBUTEDFEEDBACK_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2AttributedFeedback : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (nonatomic) int algorithm; // ivar: _algorithm
@property (nonatomic) int category; // ivar: _category
@property (retain, nonatomic) NSString *clientId; // ivar: _clientId
@property (nonatomic) int domain; // ivar: _domain
@property (retain, nonatomic) NSString *dynamicCategory; // ivar: _dynamicCategory
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasClientId;
@property (nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasDynamicCategory;
@property (nonatomic) BOOL hasIsRemote;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isRemote; // ivar: _isRemote
@property (retain, nonatomic) NSString *mappingId; // ivar: _mappingId
@property (nonatomic) int source; // ivar: _source
@property (nonatomic) int type; // ivar: _type


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)algorithmAsString:(int)arg0 ;
-(id)categoryAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(id)sourceAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsAlgorithm:(id)arg0 ;
-(int)StringAsCategory:(id)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif