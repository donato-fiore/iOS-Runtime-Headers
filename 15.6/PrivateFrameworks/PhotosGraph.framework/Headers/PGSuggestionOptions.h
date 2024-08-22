// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSUGGESTIONOPTIONS_H
#define PGSUGGESTIONOPTIONS_H

@class NSDictionary, NSDate, NSIndexSet;

#import <Foundation/Foundation.h>


@interface PGSuggestionOptions : NSObject

@property (retain, nonatomic) NSDictionary *additionalOptions; // ivar: _additionalOptions
@property (nonatomic) BOOL allowNotification; // ivar: _allowNotification
@property (nonatomic) BOOL clearFeaturedSuggestions; // ivar: _clearFeaturedSuggestions
@property (nonatomic) BOOL computeReasons; // ivar: _computeReasons
@property (nonatomic) BOOL discardGeneratedSuggestions; // ivar: _discardGeneratedSuggestions
@property (nonatomic) BOOL generateInvalidSuggestions; // ivar: _generatesInvalidSuggestions
@property (nonatomic) BOOL ignoreCollisionsWithExistingSuggestions; // ivar: _ignoreCollisionsWithExistingSuggestions
@property (nonatomic) BOOL ignoreCollisionsWithSameBatchSuggestions; // ivar: _ignoreCollisionsWithSameBatchSuggestions
@property (retain, nonatomic) NSDate *localToday; // ivar: _localToday
@property (nonatomic) NSUInteger maximumNumberOfSuggestions; // ivar: _maximumNumberOfSuggestions
@property (nonatomic) BOOL shouldProcessExistingSuggestions; // ivar: _shouldProcessExistingSuggestions
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeBlocklist; // ivar: _suggestionSubtypeBlocklist
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeWhitelist; // ivar: _suggestionSubtypeWhitelist
@property (retain, nonatomic) NSIndexSet *suggestionTypeBlocklist; // ivar: _suggestionTypeBlocklist
@property (retain, nonatomic) NSIndexSet *suggestionTypeWhitelist; // ivar: _suggestionTypeWhitelist
@property (retain, nonatomic) NSDate *universalEndDate; // ivar: _universalEndDate
@property (retain, nonatomic) NSDate *universalEndDateForWholeLibrarySuggestions; // ivar: _universalEndDateForWholeLibrarySuggestions
@property (retain, nonatomic) NSDate *universalStartDate; // ivar: _universalStartDate


-(id)init;
-(id)initWithOptionsDictionary:(id)arg0 ;
-(void)setDefaultStartAndEndDatesIfNeeded;
-(void)setDefaultStartAndEndDatesIfNeededWithNumberOfDays:(NSInteger)arg0 ;


@end


#endif