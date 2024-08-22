// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBSIRIQUERYRESULT_H
#define BMPBSIRIQUERYRESULT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBSiriQueryResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasQid;
@property (retain, nonatomic) NSString *qid; // ivar: _qid


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