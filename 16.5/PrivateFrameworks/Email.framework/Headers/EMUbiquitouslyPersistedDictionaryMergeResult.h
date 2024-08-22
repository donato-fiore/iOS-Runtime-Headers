// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMUBIQUITOUSLYPERSISTEDDICTIONARYMERGERESULT_H
#define EMUBIQUITOUSLYPERSISTEDDICTIONARYMERGERESULT_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface EMUbiquitouslyPersistedDictionaryMergeResult : NSObject

@property (readonly, nonatomic) NSDictionary *changedItems; // ivar: _changedItems
@property (readonly, nonatomic) NSArray *deletedItems; // ivar: _deletedItems
@property (readonly, nonatomic) BOOL requiresSynchronizing; // ivar: _requiresSynchronizing


-(id)initWithChangedItems:(id)arg0 deletedItems:(id)arg1 requiresSynchronizing:(BOOL)arg2 ;


@end


#endif