// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBARTICLEINFOLISTRESPONSE_H
#define NTPBARTICLEINFOLISTRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBArticleInfoListResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *articleInfoLists; // ivar: _articleInfoLists
@property (nonatomic) BOOL isValidBucketGroup; // ivar: _isValidBucketGroup


+(Class)articleInfoListType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleInfoListAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addArticleInfoList:(id)arg0 ;
-(void)clearArticleInfoLists;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif