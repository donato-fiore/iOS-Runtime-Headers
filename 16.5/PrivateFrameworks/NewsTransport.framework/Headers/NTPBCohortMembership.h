// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBCOHORTMEMBERSHIP_H
#define NTPBCOHORTMEMBERSHIP_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBCohortMembership : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasTagID;
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *tagID; // ivar: _tagID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif