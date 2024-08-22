// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBACTION_H
#define ATXPBACTION_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "ATXPBActionCriteria.h"
#import "ATXPBAVRouteInfo.h"

@interface ATXPBAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (retain, nonatomic) NSString *activityString; // ivar: _activityString
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSUInteger cachedHash; // ivar: _cachedHash
@property (retain, nonatomic) NSData *contentAttributeSet; // ivar: _contentAttributeSet
@property (retain, nonatomic) ATXPBActionCriteria *criteria; // ivar: _criteria
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasActivityString;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasCachedHash;
@property (readonly, nonatomic) BOOL hasContentAttributeSet;
@property (readonly, nonatomic) BOOL hasCriteria;
@property (readonly, nonatomic) BOOL hasHeuristic;
@property (readonly, nonatomic) BOOL hasIntent;
@property (nonatomic) BOOL hasIsFutureMedia;
@property (readonly, nonatomic) BOOL hasItemIdentifier;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasRouteInfo;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasUserActivityHash;
@property (readonly, nonatomic) BOOL hasUserActivityProxy;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *heuristic; // ivar: _heuristic
@property (retain, nonatomic) NSMutableArray *heuristicMetadatas; // ivar: _heuristicMetadatas
@property (retain, nonatomic) NSData *intent; // ivar: _intent
@property (nonatomic) BOOL isFutureMedia; // ivar: _isFutureMedia
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) ATXPBAVRouteInfo *routeInfo; // ivar: _routeInfo
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger userActivityHash; // ivar: _userActivityHash
@property (retain, nonatomic) NSData *userActivityProxy; // ivar: _userActivityProxy
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)heuristicMetadataAtIndex:(NSUInteger)arg0 ;
-(void)addHeuristicMetadata:(id)arg0 ;
-(void)clearHeuristicMetadatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif