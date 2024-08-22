// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSORDEREDDICTIONARYKEYSTRATEGY_H
#define BSORDEREDDICTIONARYKEYSTRATEGY_H


#import <Foundation/Foundation.h>


@interface BSOrderedDictionaryKeyStrategy : NSObject

@property (copy, nonatomic) id *keyComparator; // ivar: _keyComparator
@property (nonatomic) NSInteger limitCount; // ivar: _limitCount


+(id)new;
+(id)sortByInsertionOrder;
+(id)sortByInsertionOrderWithEntryLimit:(NSInteger)arg0 ;
+(id)sortUsingComparator:(id)arg0 ;
-(id)_init;
-(id)init;


@end


#endif