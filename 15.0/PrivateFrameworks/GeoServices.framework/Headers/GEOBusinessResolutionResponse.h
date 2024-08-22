// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOBUSINESSRESOLUTIONRESPONSE_H
#define GEOBUSINESSRESOLUTIONRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOBusinessResolutionResponse : PBCodable <NSCopying>

 {
    NSString *_businessName;
    NSUInteger _businessUID;
    int _status;
    ? _flags;
}


@property (retain, nonatomic) NSString *businessName;
@property (nonatomic) NSUInteger businessUID;
@property (readonly, nonatomic) BOOL hasBusinessName;
@property (nonatomic) BOOL hasBusinessUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;


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
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif