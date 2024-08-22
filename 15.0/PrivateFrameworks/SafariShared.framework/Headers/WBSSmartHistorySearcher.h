// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSMARTHISTORYSEARCHER_H
#define WBSSMARTHISTORYSEARCHER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSSmartHistorySearcher : NSObject {
    NSArray *_topics;
    NSObject<OS_dispatch_queue> *_searchQueue;
}




-(id)_searchItemsInTopic:(id)arg0 forText:(id)arg1 options:(NSUInteger)arg2 ;
-(id)_searchTopicsForText:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithTopics:(id)arg0 ;
-(void)performSearchWithText:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif