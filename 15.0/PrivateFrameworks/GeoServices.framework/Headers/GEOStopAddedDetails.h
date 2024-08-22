// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSTOPADDEDDETAILS_H
#define GEOSTOPADDEDDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOStopAddedDetails : PBCodable <NSCopying>

 {
    int _stopAddedAction;
    ? _flags;
}


@property (nonatomic) BOOL hasStopAddedAction;
@property (nonatomic) int stopAddedAction;


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
-(id)stopAddedActionAsString:(int)arg0 ;
-(int)StringAsStopAddedAction:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif