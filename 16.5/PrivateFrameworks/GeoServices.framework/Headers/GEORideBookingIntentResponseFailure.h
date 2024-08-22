// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORIDEBOOKINGINTENTRESPONSEFAILURE_H
#define GEORIDEBOOKINGINTENTRESPONSEFAILURE_H

@class PBCodable;
@protocol NSCopying;



@interface GEORideBookingIntentResponseFailure : PBCodable <NSCopying>

 {
    int _failure;
    int _intent;
    ? _flags;
}


@property (nonatomic) int failure;
@property (nonatomic) BOOL hasFailure;
@property (nonatomic) BOOL hasIntent;
@property (nonatomic) int intent;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)failureAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)intentAsString:(int)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFailure:(id)arg0 ;
-(int)StringAsIntent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif