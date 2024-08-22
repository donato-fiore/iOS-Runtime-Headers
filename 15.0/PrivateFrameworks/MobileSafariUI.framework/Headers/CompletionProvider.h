// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMPLETIONPROVIDER_H
#define COMPLETIONPROVIDER_H

@class NSMutableDictionary, NSMutableArray;
@protocol CompletionProviderDelegate;

#import <Foundation/Foundation.h>


@interface CompletionProvider : NSObject {
    NSMutableDictionary *_completionsByString;
    NSMutableArray *_completedStringsInPruneOrder;
    BOOL _inCompletionsForString;
}


@property (weak, nonatomic) NSObject<CompletionProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isFailing) BOOL failing; // ivar: _failing


-(NSUInteger)maximumCachedCompletionCount;
-(id)completionsForQuery:(id)arg0 ;
-(id)completionsForQuery:(id)arg0 isCFSearch:(BOOL)arg1 ;
-(id)findCompletionsForKey:(id)arg0 isCFSearch:(BOOL)arg1 ;
-(id)getKeyForQueryString:(id)arg0 isCFSearch:(BOOL)arg1 ;
-(id)init;
-(void)_pruneCachedCompletions;
-(void)clearCachedCompletions;
-(void)fail;
-(void)setCompletions:(id)arg0 forString:(id)arg1 ;
-(void)setCompletions:(id)arg0 forString:(id)arg1 isCFSearch:(BOOL)arg2 ;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif