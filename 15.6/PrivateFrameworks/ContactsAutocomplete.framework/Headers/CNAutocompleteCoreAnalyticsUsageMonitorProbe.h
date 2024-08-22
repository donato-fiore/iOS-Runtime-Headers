// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETECOREANALYTICSUSAGEMONITORPROBE_H
#define CNAUTOCOMPLETECOREANALYTICSUSAGEMONITORPROBE_H

@class NSMutableDictionary, NSString, NSNumber;
@protocol CNAutocompleteUsageMonitorProbe;

#import <Foundation/Foundation.h>


@interface CNAutocompleteCoreAnalyticsUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe>



@property (retain, nonatomic) NSMutableDictionary *coreAnalyticsDictionary; // ivar: _coreAnalyticsDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *lengthOfSearchString; // ivar: _lengthOfSearchString
@property (retain, nonatomic) NSNumber *selectedIndex; // ivar: _selectedIndex
@property (retain, nonatomic) NSNumber *selectedPredictionIndex; // ivar: _selectedPredictionIndex
@property (retain, nonatomic) NSNumber *sourceType; // ivar: _sourceType
@property (readonly) Class superclass;


-(id)bundleIdentifierOfCurrentProcess;
-(id)init;
-(id)makeBundleIdentifierOfCurrentProcess;
-(id)sourceKeysForSourceType:(NSUInteger)arg0 ;
-(void)recordDuetReturnedResults:(BOOL)arg0 ;
-(void)recordUserIgnoredPredictionAfterDelay:(CGFloat)arg0 ;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(CGFloat)arg0 batch:(NSUInteger)arg1 ;
-(void)recordUserSawCuratedResults:(NSUInteger)arg0 ;
-(void)recordUserSawPredictions;
-(void)recordUserSawResultsConsideredSuggestion:(NSUInteger)arg0 ;
-(void)recordUserSelectedIndex:(NSUInteger)arg0 ;
-(void)recordUserSelectedPredictionAtIndex:(NSUInteger)arg0 ;
-(void)recordUserSelectedResultWithSourceType:(NSUInteger)arg0 ;
-(void)recordUserTypedInNumberOfCharacters:(NSUInteger)arg0 ;
-(void)sendData;


@end


#endif