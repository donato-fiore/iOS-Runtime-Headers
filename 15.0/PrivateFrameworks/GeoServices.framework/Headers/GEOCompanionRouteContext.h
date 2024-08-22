// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPANIONROUTECONTEXT_H
#define GEOCOMPANIONROUTECONTEXT_H

@class PBCodable;
@protocol NSCopying;



@interface GEOCompanionRouteContext : PBCodable <NSCopying>

 {
    int _origin;
    unsigned int _timestamp;
    ? _flags;
}


@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int origin;
@property (nonatomic) unsigned int timestamp;


+(BOOL)isValid:(id)arg0 ;
+(id)context;
+(int)defaultOrigin;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isForeignOrigin;
-(BOOL)isStaleComparedToContext:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)originAsString:(int)arg0 ;
-(id)simpleDescription;
-(int)StringAsOrigin:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif