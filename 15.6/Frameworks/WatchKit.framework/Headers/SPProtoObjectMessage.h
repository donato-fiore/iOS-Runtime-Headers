// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOOBJECTMESSAGE_H
#define SPPROTOOBJECTMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SPProtoObjectMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sockPuppetMessageForAssetDestroy;
-(id)sockPuppetMessageForPlayerItemDestroy;
-(id)sockPuppetMessageForPlayerItemGetCurrentTime;
-(id)sockPuppetMessageForPlayerItemNotifyDidPlayToEndTime;
-(id)sockPuppetMessageForPlayerItemNotifyFailedToPlayToEndTime;
-(id)sockPuppetMessageForPlayerItemNotifyTimeJumped;
-(id)sockPuppetMessageForQueuePlayerAdvanceToNextItem;
-(id)sockPuppetMessageForQueuePlayerDestroy;
-(id)sockPuppetMessageForQueuePlayerRemoveAllItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif