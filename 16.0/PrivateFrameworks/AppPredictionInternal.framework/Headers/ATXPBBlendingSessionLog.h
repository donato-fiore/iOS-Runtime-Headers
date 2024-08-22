// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBBLENDINGSESSIONLOG_H
#define ATXPBBLENDINGSESSIONLOG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ATXPBBlendingSessionLog : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *blendingUpdates; // ivar: _blendingUpdates
@property (retain, nonatomic) NSMutableArray *ermEvents; // ivar: _ermEvents


+(Class)blendingUpdateType;
+(Class)ermEventType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)blendingUpdateAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ermEventAtIndex:(NSUInteger)arg0 ;
-(void)addBlendingUpdate:(id)arg0 ;
-(void)addErmEvent:(id)arg0 ;
-(void)clearBlendingUpdates;
-(void)clearErmEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif