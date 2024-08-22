// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBAPPDIRECTORYEVENT_H
#define ATXPBAPPDIRECTORYEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXPBAppDirectoryEventMetadata.h"

@interface ATXPBAppDirectoryEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *blendingCacheId; // ivar: _blendingCacheId
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSUInteger bundleIndex; // ivar: _bundleIndex
@property (nonatomic) NSUInteger categoryID; // ivar: _categoryID
@property (nonatomic) NSUInteger categoryIndex; // ivar: _categoryIndex
@property (nonatomic) CGFloat date; // ivar: _date
@property (retain, nonatomic) NSMutableArray *engagedSuggestionIds; // ivar: _engagedSuggestionIds
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasBundleIndex;
@property (nonatomic) BOOL hasCategoryID;
@property (nonatomic) BOOL hasCategoryIndex;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasSearchQueryLength;
@property (nonatomic) BOOL hasSearchTab;
@property (retain, nonatomic) ATXPBAppDirectoryEventMetadata *metadata; // ivar: _metadata
@property (nonatomic) NSUInteger searchQueryLength; // ivar: _searchQueryLength
@property (nonatomic) NSUInteger searchTab; // ivar: _searchTab
@property (retain, nonatomic) NSMutableArray *shownSuggestionIds; // ivar: _shownSuggestionIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagedSuggestionIdsAtIndex:(NSUInteger)arg0 ;
-(id)shownSuggestionIdsAtIndex:(NSUInteger)arg0 ;
-(void)addEngagedSuggestionIds:(id)arg0 ;
-(void)addShownSuggestionIds:(id)arg0 ;
-(void)clearEngagedSuggestionIds;
-(void)clearShownSuggestionIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif