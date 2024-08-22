// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSURLPATTERN_H
#define BCSURLPATTERN_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BCSUrlPattern : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPath;
@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSString *query; // ivar: _query


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