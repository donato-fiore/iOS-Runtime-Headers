// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOPASSSYNCSTATE_H
#define NPKPROTOPASSSYNCSTATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoPassSyncState : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *passSyncStateItems; // ivar: _passSyncStateItems


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)passSyncStateItemsAtIndex:(NSUInteger)arg0 ;
-(void)addPassSyncStateItems:(id)arg0 ;
-(void)clearPassSyncStateItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif