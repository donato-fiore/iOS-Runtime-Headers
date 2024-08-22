// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBCATEGORY_H
#define NTPBCATEGORY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBCategory : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *categoryHierarchys; // ivar: _categoryHierarchys
@property (retain, nonatomic) NSMutableArray *curatedTagIds; // ivar: _curatedTagIds
@property (retain, nonatomic) NSString *entityId; // ivar: _entityId
@property (readonly, nonatomic) BOOL hasEntityId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *recommendedChannels; // ivar: _recommendedChannels
@property (retain, nonatomic) NSMutableArray *recommendedTopics; // ivar: _recommendedTopics


+(Class)categoryHierarchyType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryHierarchyAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)curatedTagIdsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recommendedChannelsAtIndex:(NSUInteger)arg0 ;
-(id)recommendedTopicsAtIndex:(NSUInteger)arg0 ;
-(void)addCategoryHierarchy:(id)arg0 ;
-(void)addCuratedTagIds:(id)arg0 ;
-(void)addRecommendedChannels:(id)arg0 ;
-(void)addRecommendedTopics:(id)arg0 ;
-(void)clearCategoryHierarchys;
-(void)clearCuratedTagIds;
-(void)clearRecommendedChannels;
-(void)clearRecommendedTopics;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif