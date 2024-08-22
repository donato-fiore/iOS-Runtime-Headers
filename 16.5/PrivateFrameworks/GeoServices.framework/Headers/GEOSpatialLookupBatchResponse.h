// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSPATIALLOOKUPBATCHRESPONSE_H
#define GEOSPATIALLOOKUPBATCHRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying>

 {
    NSMutableArray *_responses;
    int _statusCode;
    ? _flags;
}


@property (nonatomic) BOOL hasStatusCode;
@property (retain, nonatomic) NSMutableArray *responses;
@property (nonatomic) int statusCode;


+(BOOL)isValid:(id)arg0 ;
+(Class)responseType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)responseAtIndex:(NSUInteger)arg0 ;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addResponse:(id)arg0 ;
-(void)clearResponses;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif