// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPM2LOGEVENTOCCURRED_H
#define PPM2LOGEVENTOCCURRED_H

@class PBCodable;
@protocol NSCopying;



@interface PPM2LogEventOccurred : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int event; // ivar: _event
@property (nonatomic) BOOL hasEvent;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventAsString:(int)arg0 ;
-(int)StringAsEvent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif