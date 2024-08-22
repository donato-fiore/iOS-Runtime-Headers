// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGM2MAYBEINFORMATIONSHOWN_H
#define SGM2MAYBEINFORMATIONSHOWN_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2MaybeInformationShown : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int extracted; // ivar: _extracted
@property (nonatomic) unsigned int extractionModelVersion; // ivar: _extractionModelVersion
@property (nonatomic) BOOL hasExtracted;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)extractedAsString:(int)arg0 ;
-(int)StringAsExtracted:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif