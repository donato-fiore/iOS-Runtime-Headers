// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBFEEDITEMBATCH_H
#define NTPBFEEDITEMBATCH_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBFeedItemBatch : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *feedItems; // ivar: _feedItems


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