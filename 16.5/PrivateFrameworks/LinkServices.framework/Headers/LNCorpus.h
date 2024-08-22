// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNCORPUS_H
#define LNCORPUS_H

@class NSArray;
@protocol LNCorpusObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LNCorpus : NSObject

@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (weak, nonatomic) NSObject<LNCorpusObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSArray *terms; // ivar: _terms


-(NSUInteger)count;
-(id)getTerms;
-(id)init;
-(id)initWithContents:(id)arg0 ;
-(id)initWithContents:(id)arg0 capacity:(NSInteger)arg1 ;
// -(void)changeWithBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)removeAllWithCompletionHandler:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif