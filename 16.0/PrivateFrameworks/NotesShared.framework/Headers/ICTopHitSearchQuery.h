// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTOPHITSEARCHQUERY_H
#define ICTOPHITSEARCHQUERY_H

@class NSString, CSTopHitSearchQuery, NSArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface ICTopHitSearchQuery : NSObject

@property (readonly, nonatomic) NSString *highlightString; // ivar: _highlightString
@property (readonly, nonatomic) BOOL modernResultsOnly; // ivar: _modernResultsOnly
@property (retain, nonatomic) CSTopHitSearchQuery *query; // ivar: _query
@property (retain, nonatomic) NSArray *queryResults; // ivar: _queryResults
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore; // ivar: _synchronousSemaphore
@property (nonatomic) BOOL wasForceStopped; // ivar: _wasForceStopped


-(BOOL)run:(*id)arg0 ;
-(id)initWithQueryString:(id)arg0 keyboardLanguage:(id)arg1 modernResultsOnly:(BOOL)arg2 ;
-(void)cancel;
-(void)forceStop;
-(void)setup;


@end


#endif