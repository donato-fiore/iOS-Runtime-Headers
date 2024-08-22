// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RERELEVANCEENGINEOBSERVERWRAPPER_H
#define _RERELEVANCEENGINEOBSERVERWRAPPER_H

@class NSString;
@protocol RERelevanceEngineObserver;

#import <Foundation/Foundation.h>


@interface _RERelevanceEngineObserverWrapper : NSObject <RERelevanceEngineObserver>

 {
    ? _observerCallbacks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<RERelevanceEngineObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(BOOL)relevanceEngine:(id)arg0 isElementAtPathVisible:(id)arg1 ;
-(id)initWithObserver:(id)arg0 ;
-(void)relevanceEngine:(id)arg0 didInsertElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didMoveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg0 didReloadElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didRemoveElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didUpdateRelevanceForElement:(id)arg1 ;
// -(void)relevanceEngine:(id)arg0 performBatchUpdateBlock:(id)arg1 completion:(unk)arg2  ;
-(void)relevanceEngineDidBeginUpdatingRelevance:(id)arg0 ;
-(void)relevanceEngineDidFinishUpdatingRelevance:(id)arg0 ;


@end


#endif