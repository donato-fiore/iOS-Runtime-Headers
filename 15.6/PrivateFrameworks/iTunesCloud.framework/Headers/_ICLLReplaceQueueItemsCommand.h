// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICLLREPLACEQUEUEITEMSCOMMAND_H
#define _ICLLREPLACEQUEUEITEMSCOMMAND_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface _ICLLReplaceQueueItemsCommand : PBCodable <NSCopying>

 {
    NSMutableArray *_items;
    NSString *_preferredPlayItemId;
    NSString *_queueContext;
    int _revision;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif