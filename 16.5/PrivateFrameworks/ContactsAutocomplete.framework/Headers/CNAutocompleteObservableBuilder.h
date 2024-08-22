// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEOBSERVABLEBUILDER_H
#define CNAUTOCOMPLETEOBSERVABLEBUILDER_H

@class NSString;
@protocol CNAutocompleteObservableBuilder, CNAutocompleteObservableBuilderBatchingHelper, CNAutocompleteProbeProvider, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNAutocompleteObservableBuilder : NSObject <CNAutocompleteObservableBuilder>



@property (readonly, nonatomic) NSObject<CNAutocompleteObservableBuilderBatchingHelper> *batchingHelper; // ivar: _batchingHelper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *networkActivityDidStartHandler; // ivar: _networkActivityDidStartHandler
@property (copy, nonatomic) id *networkActivityDidStopHandler; // ivar: _networkActivityDidStopHandler
@property (nonatomic) CGFloat networkActivityStartDelay; // ivar: _networkActivityStartDelay
@property (readonly, nonatomic) NSObject<CNAutocompleteProbeProvider> *probeProvider; // ivar: _probeProvider
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;
@property (nonatomic) BOOL supplementalResultsUseNetwork; // ivar: _supplementalResultsUseNetwork


+(BOOL)supplementalResultsUseNetwork:(NSUInteger)arg0 ;
+(id)builderWithSearchType:(NSUInteger)arg0 scheduler:(id)arg1 probeProvider:(id)arg2 ;
-(id)combineObservablesInBatch:(id)arg0 scheduler:(id)arg1 ;
-(id)initWithBatchingHelper:(id)arg0 probeProvider:(id)arg1 scheduler:(id)arg2 ;
-(id)makeObservable;
-(id)probeObservable:(id)arg0 forPerformanceWithBlock:(id)arg1 ;
-(void)addCachedCalendarServerObservable:(id)arg0 ;
-(void)addCachedDirectoryServerObservable:(id)arg0 ;
-(void)addCalendarServerObservable:(id)arg0 ;
-(void)addContactsObservable:(id)arg0 ;
-(void)addCoreRecentsObservable:(id)arg0 ;
-(void)addDirectoryServerObservable:(id)arg0 ;
-(void)addLocalExtensionObservable:(id)arg0 ;
-(void)addPredictionObservable:(id)arg0 doOnTimeout:(id)arg1 ;
-(void)addStewieObservable:(id)arg0 ;
-(void)addSuggestionsObservable:(id)arg0 ;
-(void)addSupplementalObservable:(id)arg0 ;


@end


#endif