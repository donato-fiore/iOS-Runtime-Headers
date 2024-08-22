// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGM2BADINTERACTIONIGNORED_H
#define SGM2BADINTERACTIONIGNORED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2BadInteractionIgnored : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonAsString:(int)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif