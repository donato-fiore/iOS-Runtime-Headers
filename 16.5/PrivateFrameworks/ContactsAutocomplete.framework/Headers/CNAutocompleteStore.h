// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETESTORE_H
#define CNAUTOCOMPLETESTORE_H

@class CNCancelationToken;
@protocol CNAutocompleteProbeProvider, CNScheduler, CNAutocompleteSearchProvider;

#import <Foundation/Foundation.h>

#import "CNAutocompleteStoreQueryHelper.h"
#import "CNAutocompleteStoreReproStringRecorder.h"
#import "CNAutocompleteUserSession.h"

@interface CNAutocompleteStore : NSObject

@property (weak, nonatomic) CNCancelationToken *currentFetchToken; // ivar: _currentFetchToken
@property (nonatomic) CGFloat fetchCoalescingInterval; // ivar: _fetchCoalescingInterval
@property (readonly, nonatomic) NSObject<CNAutocompleteProbeProvider> *probeProvider; // ivar: _probeProvider
@property (readonly, nonatomic) CNAutocompleteStoreQueryHelper *queryHelper; // ivar: _queryHelper
@property (retain, nonatomic) CNAutocompleteStoreReproStringRecorder *reproStringRecorder; // ivar: _reproStringRecorder
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) NSObject<CNAutocompleteSearchProvider> *searchProvider;
@property (retain, nonatomic) CNAutocompleteUserSession *userSession; // ivar: _userSession


+(CGFloat)defaultFetchCoalescingInterval;
-(id)executeFetchRequest:(id)arg0 ;
-(id)executeFetchRequest:(id)arg0 afterDelay:(CGFloat)arg1 delegate:(id)arg2 ;
-(id)executeFetchRequest:(id)arg0 delegate:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 searchProvider:(id)arg1 probeProvider:(id)arg2 scheduler:(id)arg3 ;
-(id)scheduleFetchRequest:(id)arg0 ;
-(id)scheduleFetchRequest:(id)arg0 delegate:(id)arg1 ;
-(void)ignoreResult:(id)arg0 completionHandler:(id)arg1 ;
-(void)userSelectedResult:(id)arg0 atSortedIndex:(NSUInteger)arg1 ;


@end


#endif