// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRCOLORPROTOBUF_H
#define _MRCOLORPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRColorProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float blue; // ivar: _blue
@property (nonatomic) float green; // ivar: _green
@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) BOOL hasRed;
@property (nonatomic) float red; // ivar: _red


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