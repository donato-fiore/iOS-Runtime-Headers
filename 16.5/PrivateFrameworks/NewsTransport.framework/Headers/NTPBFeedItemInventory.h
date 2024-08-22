// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBFEEDITEMINVENTORY_H
#define NTPBFEEDITEMINVENTORY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBFeedItemInventory : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int feedItemVersion; // ivar: _feedItemVersion
@property (retain, nonatomic) NSMutableArray *feedItems; // ivar: _feedItems
@property (nonatomic) BOOL hasFeedItemVersion;
@property (nonatomic) BOOL hasInventoryVersion;
@property (readonly, nonatomic) BOOL hasLastRefreshed;
@property (nonatomic) unsigned int inventoryVersion; // ivar: _inventoryVersion
@property (retain, nonatomic) NTPBDate *lastRefreshed; // ivar: _lastRefreshed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedItemsAtIndex:(NSUInteger)arg0 ;
-(void)addFeedItems:(id)arg0 ;
-(void)clearFeedItems;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif