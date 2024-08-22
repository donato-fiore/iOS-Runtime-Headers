// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICLLADDQUEUEITEMSACTION_H
#define _ICLLADDQUEUEITEMSACTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_ICLLRevisionHash.h"

@interface _ICLLAddQueueItemsAction : PBCodable <NSCopying>

 {
    NSMutableArray *_items;
    int _position;
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