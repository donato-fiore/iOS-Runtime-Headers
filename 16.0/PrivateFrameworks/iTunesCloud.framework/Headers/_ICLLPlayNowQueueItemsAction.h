// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICLLPLAYNOWQUEUEITEMSACTION_H
#define _ICLLPLAYNOWQUEUEITEMSACTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_ICLLQueueQuery.h"
#import "_ICLLRadioSource.h"

@interface _ICLLPlayNowQueueItemsAction : PBCodable <NSCopying>

 {
    NSMutableArray *_items;
    int _position;
    NSString *_preferredPlayItemId;
    _ICLLQueueQuery *_queueQuery;
    _ICLLRadioSource *_radioSource;
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