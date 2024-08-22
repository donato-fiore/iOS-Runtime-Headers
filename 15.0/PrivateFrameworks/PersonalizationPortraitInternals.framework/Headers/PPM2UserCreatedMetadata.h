// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPM2USERCREATEDMETADATA_H
#define PPM2USERCREATEDMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2UserCreatedMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (nonatomic) int algorithm; // ivar: _algorithm
@property (nonatomic) int domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)algorithmAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsAlgorithm:(id)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif