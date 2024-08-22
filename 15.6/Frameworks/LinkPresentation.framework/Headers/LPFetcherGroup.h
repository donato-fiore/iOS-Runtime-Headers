// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPFETCHERGROUP_H
#define LPFETCHERGROUP_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "LPFetcherConfiguration.h"

@interface LPFetcherGroup : NSObject {
    LPFetcherConfiguration *_configuration;
    NSInteger _responsePolicy;
    id *_completionHandler;
    NSMutableArray *_tasks;
    BOOL _doneAddingFetchers;
    BOOL _done;
    BOOL _cancelled;
    unsigned int _loggingID;
}




-(NSUInteger)numberOfActiveFetches;
-(id)_responsesRespectingPolicy;
-(id)initWithPolicy:(NSInteger)arg0 configuration:(id)arg1 description:(id)arg2 completionHandler:(id)arg3 ;
-(void)_addFetcher:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_completed;
-(void)appendFetcher:(id)arg0 ;
-(void)cancel;
-(void)doneAddingFetchers;
-(void)evaluateCompleteness;
-(void)prependFetcher:(id)arg0 ;
-(void)startFetchesIfNeeded;


@end


#endif