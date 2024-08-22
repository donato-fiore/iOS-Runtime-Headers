// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATEUGCPHOTO_H
#define GEOLOGMSGSTATEUGCPHOTO_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying>

 {
    ? _photoSources;
}


@property (readonly, nonatomic) *int photoSources;
@property (readonly, nonatomic) NSUInteger photoSourcesCount;


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
-(id)photoSourcesAsString:(int)arg0 ;
-(int)StringAsPhotoSources:(id)arg0 ;
-(int)photoSourceAtIndex:(NSUInteger)arg0 ;
-(void)addPhotoSource:(int)arg0 ;
-(void)clearPhotoSources;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif