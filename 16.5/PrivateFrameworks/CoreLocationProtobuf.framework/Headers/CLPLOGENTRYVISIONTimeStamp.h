// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONTIMESTAMP_H
#define CLPLOGENTRYVISIONTIMESTAMP_H

@class PBCodable;
@protocol NSCopying;



@interface CLPLOGENTRYVISIONTimeStamp : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat cfAbsoluteTimeS; // ivar: _cfAbsoluteTimeS
@property (nonatomic) BOOL hasCfAbsoluteTimeS;
@property (nonatomic) BOOL hasMachAbsoluteTimeS;
@property (nonatomic) BOOL hasMachContinuousTimeS;
@property (nonatomic) CGFloat machAbsoluteTimeS; // ivar: _machAbsoluteTimeS
@property (nonatomic) CGFloat machContinuousTimeS; // ivar: _machContinuousTimeS


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