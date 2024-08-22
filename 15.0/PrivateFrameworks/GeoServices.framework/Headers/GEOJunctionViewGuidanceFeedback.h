// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOJUNCTIONVIEWGUIDANCEFEEDBACK_H
#define GEOJUNCTIONVIEWGUIDANCEFEEDBACK_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying>

 {
    NSMutableArray *_imageIDs;
    BOOL _imageDisplayed;
    ? _flags;
}


@property (nonatomic) BOOL hasImageDisplayed;
@property (nonatomic) BOOL imageDisplayed;
@property (retain, nonatomic) NSMutableArray *imageIDs;


+(BOOL)isValid:(id)arg0 ;
+(Class)imageIDType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imageIDAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addImageID:(id)arg0 ;
-(void)clearImageIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif