// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHCODABLECOLOR_H
#define ACHCODABLECOLOR_H

@class PBCodable;
@protocol NSCopying;



@interface ACHCodableColor : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat blue; // ivar: _blue
@property (nonatomic) CGFloat green; // ivar: _green
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) BOOL hasRed;
@property (nonatomic) CGFloat red; // ivar: _red


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif