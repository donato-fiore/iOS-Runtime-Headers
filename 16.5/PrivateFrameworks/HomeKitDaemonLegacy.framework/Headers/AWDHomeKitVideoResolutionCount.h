// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITVIDEORESOLUTIONCOUNT_H
#define AWDHOMEKITVIDEORESOLUTIONCOUNT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitVideoResolutionCount : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int count; // ivar: _count
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution; // ivar: _resolution


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)resolutionAsString:(int)arg0 ;
-(int)StringAsResolution:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif