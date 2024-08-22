// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSEARCHPARAMETERS_H
#define WBSSEARCHPARAMETERS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSSearchParameters : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat CFSearchTimeout; // ivar: _CFSearchTimeout
@property (nonatomic) NSInteger characterThresholdForAnywhereInTitleOrURL; // ivar: _characterThresholdForAnywhereInTitleOrURL
@property (nonatomic) NSInteger characterThresholdForStartOfTitle; // ivar: _characterThresholdForStartOfTitle
@property (nonatomic) NSInteger characterThresholdForStartOfTitleWord; // ivar: _characterThresholdForStartOfTitleWord
@property (nonatomic) NSInteger characterThresholdForStartOfURL; // ivar: _characterThresholdForStartOfURL
@property (nonatomic) NSInteger characterThresholdForStartOfURLPathComponent; // ivar: _characterThresholdForStartOfURLPathComponent
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationSwitchToTabValue; // ivar: _enableCompletionListHistoryDeduplicationSwitchToTabValue
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationValue; // ivar: _enableCompletionListHistoryDeduplicationValue
@property (nonatomic) BOOL isCFSearch; // ivar: _isCFSearch
@property (nonatomic) BOOL isDedupeThroughAlternativeURLsEnabled; // ivar: _isDedupeThroughAlternativeURLsEnabled
@property (nonatomic) BOOL isForVoiceSearch; // ivar: _isForVoiceSearch
@property (nonatomic) BOOL isLocalPhantomTophitDisabled; // ivar: _isLocalPhantomTophitDisabled
@property (nonatomic) BOOL isResultFilteringDisabled; // ivar: _isResultFilteringDisabled
@property (nonatomic) NSInteger matchingWordsInTitleThreshold; // ivar: _matchingWordsInTitleThreshold
@property (nonatomic) NSInteger maxBookmarksAndHistoryItems; // ivar: _maxBookmarksAndHistoryItems
@property (nonatomic) CGFloat normalizedTopSitesScoreAndVisitCountMultiplier; // ivar: _normalizedTopSitesScoreAndVisitCountMultiplier
@property (nonatomic) CGFloat percentageThresholdForAnywhereInTitle; // ivar: _percentageThresholdForAnywhereInTitle
@property (nonatomic) CGFloat percentageThresholdForAnywhereInURL; // ivar: _percentageThresholdForAnywhereInURL
@property (nonatomic) BOOL strengthenAutocompleteTriggerExtensionMatching; // ivar: _strengthenAutocompleteTriggerExtensionMatching


+(BOOL)supportsSecureCoding;
+(id)getSearchParametersHelper:(id)arg0 withTrial:(id)arg1 withCache:(BOOL)arg2 ;
+(id)searchParameters;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreferences:(id)arg0 ;
-(id)initWithTrial:(BOOL)arg0 forPrefs:(id)arg1 forTrial:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUsingPreferenceKeys:(id)arg0 ;
-(void)updateWithDefaults;
-(void)updateWithTrial:(BOOL)arg0 forTrial:(id)arg1 ;


@end


#endif