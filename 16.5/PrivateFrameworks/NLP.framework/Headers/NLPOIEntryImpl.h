// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPOIENTRYIMPL_H
#define NLPOIENTRYIMPL_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NLPOIEntryImpl : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasScore;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) float score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif