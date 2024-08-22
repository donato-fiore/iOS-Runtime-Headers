// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOIMAGESERVICERESPONSE_H
#define GEOIMAGESERVICERESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOImageServiceResponse : PBCodable <NSCopying>

 {
    NSMutableArray *_images;
    unsigned int _height;
    int _status;
    unsigned int _width;
    ? _flags;
}


@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSMutableArray *images;
@property (nonatomic) int status;
@property (nonatomic) unsigned int width;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imagesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addImages:(id)arg0 ;
-(void)clearImages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif