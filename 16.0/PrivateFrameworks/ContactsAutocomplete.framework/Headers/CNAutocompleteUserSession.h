// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETEUSERSESSION_H
#define CNAUTOCOMPLETEUSERSESSION_H

@class NSDate;
@protocol CNFuture, CNAutocompleteProbeProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CNAutocompleteFetchRequest.h"
#import "_CNAutocompleteUserSessionDisplayedResults.h"
#import "CNAutocompleteUsageMonitor.h"

@interface CNAutocompleteUserSession : NSObject

@property (nonatomic) NSUInteger currentBatch; // ivar: _currentBatch
@property (retain, nonatomic) CNAutocompleteFetchRequest *currentRequest; // ivar: _currentRequest
@property (retain, nonatomic) NSObject<CNFuture> *duetResultsFuture; // ivar: _duetResultsFuture
@property (retain, nonatomic) _CNAutocompleteUserSessionDisplayedResults *lastDisplayedResults; // ivar: _lastDisplayedResults
@property (readonly, nonatomic) NSObject<CNAutocompleteProbeProvider> *probeProvider; // ivar: _probeProvider
@property (retain, nonatomic) NSDate *requestStartTime; // ivar: _requestStartTime
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) CNAutocompleteUsageMonitor *usageMonitor; // ivar: _usageMonitor


-(id)initWithProbeProvider:(id)arg0 ;
-(void)_resetState;
-(void)didReceiveResults:(id)arg0 forRequest:(id)arg1 ;
-(void)didSelectResult:(id)arg0 atSortedIndex:(NSUInteger)arg1 ;
-(void)willStartDuetRequestWithMatchingResultsFuture:(id)arg0 ;
-(void)willStartExecutingRequest:(id)arg0 ;


@end


#endif