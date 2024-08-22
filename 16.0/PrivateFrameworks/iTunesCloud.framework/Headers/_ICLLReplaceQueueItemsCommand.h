// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICLLREPLACEQUEUEITEMSCOMMAND_H
#define _ICLLREPLACEQUEUEITEMSCOMMAND_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_ICLLAutoPlaySource.h"
#import "_ICLLRadioSource.h"

@interface _ICLLReplaceQueueItemsCommand : PBCodable <NSCopying>

 {
    _ICLLAutoPlaySource *_autoPlay;
    NSMutableArray *_items;
    NSString *_preferredPlayItemId;
    NSString *_queueContext;
    _ICLLRadioSource *_radio;
    int _revision;
    int _trackGenerationSource;
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