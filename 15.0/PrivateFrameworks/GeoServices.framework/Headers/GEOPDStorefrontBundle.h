// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDSTOREFRONTBUNDLE_H
#define GEOPDSTOREFRONTBUNDLE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOPDStorefrontPresentation.h"

@interface GEOPDStorefrontBundle : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_faces;
    NSUInteger _identifier;
    NSUInteger _matchedMuid;
    GEOPDStorefrontPresentation *_presentation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *faces;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasMatchedMuid;
@property (readonly, nonatomic) BOOL hasPresentation;
@property (nonatomic) NSUInteger identifier;
@property (nonatomic) NSUInteger matchedMuid;
@property (retain, nonatomic) GEOPDStorefrontPresentation *presentation;


+(BOOL)isValid:(id)arg0 ;
+(Class)faceType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)faceAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addFace:(id)arg0 ;
-(void)clearFaces;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif