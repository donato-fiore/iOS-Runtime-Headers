// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODIRECTIONSCOLLECTIONREQUEST_H
#define GEODIRECTIONSCOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface GEODirectionsCollectionRequest : PBRequest <NSCopying>

 {
    NSMutableArray *_requestElements;
}


@property (retain, nonatomic) NSMutableArray *requestElements;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestElementsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addRequestElements:(id)arg0 ;
-(void)clearRequestElements;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif