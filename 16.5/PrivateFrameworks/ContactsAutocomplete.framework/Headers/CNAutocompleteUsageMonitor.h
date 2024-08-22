// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEUSAGEMONITOR_H
#define CNAUTOCOMPLETEUSAGEMONITOR_H

@protocol CNAutocompleteProbeProvider;

#import <Foundation/Foundation.h>


@interface CNAutocompleteUsageMonitor : NSObject

@property (readonly, nonatomic) NSObject<CNAutocompleteProbeProvider> *probeProvider; // ivar: _probeProvider


+(void)userIgnoredResultsForRequest:(id)arg0 afterDelay:(CGFloat)arg1 ;
+(void)userSelectedResult:(id)arg0 atSortedIndex:(NSUInteger)arg1 forRequest:(id)arg2 gotResultsFromDuet:(BOOL)arg3 ;
-(id)init;
-(id)initWithProbeProvider:(id)arg0 ;
-(void)userIgnoredResultsOfBatch:(NSUInteger)arg0 forRequest:(id)arg1 afterDelay:(CGFloat)arg2 ;
-(void)userSawNumberOfResults:(NSUInteger)arg0 forBatch:(NSUInteger)arg1 includingNumberOfSuggestions:(NSUInteger)arg2 forRequest:(id)arg3 ;
-(void)userSelectedResult:(id)arg0 atSortedIndex:(NSUInteger)arg1 forRequest:(id)arg2 gotResultsFromDuet:(BOOL)arg3 ;


@end


#endif