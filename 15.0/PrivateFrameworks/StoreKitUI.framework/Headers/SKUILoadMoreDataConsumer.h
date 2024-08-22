// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILOADMOREDATACONSUMER_H
#define SKUILOADMOREDATACONSUMER_H

@class SSVURLDataConsumer, NSSet;



@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer

@property (copy, nonatomic) NSSet *unavailableItemIdentifiers; // ivar: _unavailableItemIdentifiers


-(id)_itemsWithDictionary:(id)arg0 ;
-(id)objectForData:(id)arg0 response:(id)arg1 error:(*id)arg2 ;


@end


#endif