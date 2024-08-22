// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICLLPLAYNOWQUEUEITEMSACTION_H
#define _ICLLPLAYNOWQUEUEITEMSACTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_ICLLRevisionHash.h"

@interface _ICLLPlayNowQueueItemsAction : PBCodable <NSCopying>

 {
    NSMutableArray *_items;
    int _position;
    NSString *_preferredPlayItemId;
    int _revision;
    _ICLLRevisionHash *_revisionHash;
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