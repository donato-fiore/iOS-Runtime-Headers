// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSSEARCHITEMINDEXER_H
#define TPSSEARCHITEMINDEXER_H


#import <Foundation/Foundation.h>


@interface TPSSearchItemIndexer : NSObject {
    ? name;
    ? fetchState;
    ? queue;
    ? $__lazy_storage_$_indexer;
}




+(id)default;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)deleteAllWithCompletionHandler:(id)arg0 ;
-(void)indexWithTips:(id)arg0 qualityOfService:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)reindexWithTips:(id)arg0 qualityOfService:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif