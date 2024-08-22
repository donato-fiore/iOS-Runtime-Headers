// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBARTICLEINFO_H
#define NTPBARTICLEINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBArticleInfo : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId; // ivar: _storeFrontId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif