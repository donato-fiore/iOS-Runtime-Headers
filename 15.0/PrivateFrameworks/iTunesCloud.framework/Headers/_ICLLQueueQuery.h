// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICLLQUEUEQUERY_H
#define _ICLLQUEUEQUERY_H

@class PBCodable;
@protocol NSCopying;


#import "_ICLLQueue.h"
#import "_ICLLRevisionHash.h"

@interface _ICLLQueueQuery : PBCodable <NSCopying>

 {
    _ICLLQueue *_queue;
    _ICLLRevisionHash *_revisionHash;
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