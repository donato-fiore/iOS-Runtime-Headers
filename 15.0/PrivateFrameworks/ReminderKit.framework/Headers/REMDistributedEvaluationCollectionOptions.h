// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMDISTRIBUTEDEVALUATIONCOLLECTIONOPTIONS_H
#define REMDISTRIBUTEDEVALUATIONCOLLECTIONOPTIONS_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMDistributedEvaluationCollectionOptions : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger creationDateWithinDays; // ivar: _creationDateWithinDays
@property (nonatomic) NSUInteger dateResolutionInSeconds; // ivar: _dateResolutionInSeconds
@property (nonatomic) BOOL includeAccountType; // ivar: _includeAccountType
@property (nonatomic) BOOL includeAlarmDates; // ivar: _includeAlarmDates
@property (nonatomic) BOOL includeAttachmentUTIs; // ivar: _includeAttachmentUTIs
@property (nonatomic) BOOL includeDates; // ivar: _includeDates
@property (nonatomic) BOOL includeDayOfWeek; // ivar: _includeDayOfWeek
@property (nonatomic) BOOL includeIsFlagged; // ivar: _includeIsFlagged
@property (nonatomic) BOOL includeListGroupInfo; // ivar: _includeListGroupInfo
@property (nonatomic) BOOL includeListNameFuzzedEmbeddings; // ivar: _includeListNameFuzzedEmbeddings
@property (nonatomic) BOOL includeListNames; // ivar: _includeListNames
@property (nonatomic) BOOL includeLocationInfo; // ivar: _includeLocationInfo
@property (nonatomic) BOOL includePriority; // ivar: _includePriority
@property (nonatomic) BOOL includeRecurrenceInfo; // ivar: _includeRecurrenceInfo
@property (nonatomic) BOOL includeRemindMeWhenMessagingInfo; // ivar: _includeRemindMeWhenMessagingInfo
@property (nonatomic) BOOL includeReminderTitleCategoryFilteredStopWords; // ivar: _includeReminderTitleCategoryFilteredStopWords
@property (nonatomic) BOOL includeReminderTitleCategorySentence2Vec; // ivar: _includeReminderTitleCategorySentence2Vec
@property (nonatomic) BOOL includeReminderTitleCategoryUniversalGrammar; // ivar: _includeReminderTitleCategoryUniversalGrammar
@property (nonatomic) BOOL includeReminderTitleFuzzedEmbeddings; // ivar: _includeReminderTitleFuzzedEmbeddings
@property (nonatomic) BOOL includeReminderTitleSaltedHash; // ivar: _includeReminderTitleSaltedHash
@property (nonatomic) BOOL includeReminderTitles; // ivar: _includeReminderTitles
@property (nonatomic) BOOL includeSubtaskInfo; // ivar: _includeSubtaskInfo
@property (nonatomic) BOOL includeSystemLanguage; // ivar: _includeSystemLanguage
@property (nonatomic) BOOL includeSystemTimezone; // ivar: _includeSystemTimezone
@property (nonatomic) BOOL includeUserActivityInfo; // ivar: _includeUserActivityInfo
@property (nonatomic) BOOL relevantWordTagsIncludeOtherWord; // ivar: _relevantWordTagsIncludeOtherWord
@property (nonatomic) CGFloat reminderTitleCategoryDistanceTolerance; // ivar: _reminderTitleCategoryDistanceTolerance
@property (retain, nonatomic) NSURL *reminderTitleCategoryEmbeddingURL; // ivar: _reminderTitleCategoryEmbeddingURL


+(BOOL)supportsSecureCoding;
+(id)_attachmentURLFromFilenameWithKey:(id)arg0 inJSONRepresentation:(id)arg1 attachmentURLs:(id)arg2 error:(*id)arg3 ;
+(id)optionsFromJSONRepresentation:(id)arg0 attachmentURLs:(id)arg1 error:(*id)arg2 ;
+(id)optionsWithDefaultValues;
+(id)optionsWithEverythingOff;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif