// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATEDETAILLOOKAROUNDLOGRECORD_H
#define GEOLOGMSGSTATEDETAILLOOKAROUNDLOGRECORD_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying>

 {
    CGFloat _relativeTimestamp;
    int _action;
    int _target;
    ? _flags;
}


@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) BOOL hasTarget;
@property (nonatomic) CGFloat relativeTimestamp;
@property (nonatomic) int target;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)targetAsString:(int)arg0 ;
-(int)StringAsAction:(id)arg0 ;
-(int)StringAsTarget:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif