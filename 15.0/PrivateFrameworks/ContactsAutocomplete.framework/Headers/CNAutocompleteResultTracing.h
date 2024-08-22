// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETERESULTTRACING_H
#define CNAUTOCOMPLETERESULTTRACING_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteResultTracing : NSObject {
    NSUInteger _countOfRecentsResults;
    NSUInteger _countOfContactsResults;
    NSUInteger _countOfServerResults;
    CGFloat _startTime;
    CGFloat _localLatency;
    CGFloat _serverLatency;
    BOOL _waitingForRecentsResults;
    BOOL _waitingForContactsResults;
    BOOL _waitingForServerResults;
}


@property NSUInteger countOfContactsResults;
@property NSUInteger countOfRecentsResults;
@property NSUInteger countOfServerResults;


+(id)resultTracer;
-(id)init;
-(void)expectContactsResults:(BOOL)arg0 ;
-(void)expectRecentsResults:(BOOL)arg0 ;
-(void)expectServerResults:(BOOL)arg0 ;
-(void)logLocalLatencyIfReady;
-(void)logServerLatency;
-(void)sendLocalResultsTracer;
-(void)sendMessageTracers;
-(void)sendMessageTracersIfReady;
-(void)sendServerResultsTracer;


@end


#endif