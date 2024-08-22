// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGEXTRACTIONDOCUMENT_H
#define SGEXTRACTIONDOCUMENT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SGExtractionDocument : NSObject

@property (retain, nonatomic) NSArray *enrichedTaggedCharacterRanges; // ivar: _enrichedTaggedCharacterRanges
@property (retain, nonatomic) NSDictionary *indexSetForOutputNameLabel; // ivar: _indexSetForOutputNameLabel
@property (retain, nonatomic) NSDictionary *modelOutput; // ivar: _modelOutput


+(id)allDayDateComponentsFromDate:(id)arg0 ;
+(id)candidatesForLabelTokenIndexes:(id)arg0 inPlainText:(id)arg1 forTaggedCharacterRanges:(id)arg2 ;
+(id)candidatesForLabelsWithPlainTextIndexSets:(id)arg0 inPlainText:(id)arg1 ;
+(id)candidatesForPlainTextIndexSet:(id)arg0 inPlainText:(id)arg1 ;
+(id)dateComponentsFromDataDetectorMatch:(id)arg0 inferDates:(BOOL)arg1 approximateTime:(BOOL)arg2 partialDate:(BOOL)arg3 useEndForDurations:(BOOL)arg4 ;
+(id)dateComponentsFromDate:(id)arg0 ;
+(id)indexSetForOutputNameLabelForModelOutput:(id)arg0 ;
+(id)keyForOutputName:(id)arg0 label:(id)arg1 ;
+(id)labelTokenIndexesForOutputName:(id)arg0 label:(id)arg1 modelOutput:(id)arg2 ;
+(id)labelTokenIndexesForOutputName:(id)arg0 label:(id)arg1 modelOutput:(id)arg2 maxMergeDistance:(NSUInteger)arg3 ;
+(id)mergeComponent:(NSUInteger)arg0 usingBaseDateComponents:(id)arg1 withDateComponents:(id)arg2 ;
+(id)mergeDetectedDateComponents:(id)arg0 ;
+(struct _NSRange )firstRangeInIndexSet:(id)arg0 ;
+(struct _NSRange )textRangeForIndexRange:(struct _NSRange )arg0 inTaggedCharacterRanges:(id)arg1 ;
-(id)candidatesForLabelTokenIndexes:(id)arg0 inPlainText:(id)arg1 ;
-(id)dataDetectorMatchesForTokenIndexes:(id)arg0 dataDetectorMatches:(id)arg1 allowDatesInPast:(BOOL)arg2 allowTimeOffset:(BOOL)arg3 ;
-(id)detectedDateComponentsForTokenIndexes:(id)arg0 dataDetectorMatches:(id)arg1 allowDatesInPast:(BOOL)arg2 inferDates:(BOOL)arg3 approximateTime:(BOOL)arg4 partialDate:(BOOL)arg5 allowTimeOffset:(BOOL)arg6 useEndForDurations:(BOOL)arg7 ;
-(id)detectedDateComponentsForTokenIndexes:(id)arg0 dataDetectorMatches:(id)arg1 allowDatesInPast:(BOOL)arg2 inferDates:(BOOL)arg3 approximateTime:(BOOL)arg4 partialDate:(BOOL)arg5 useEndForDurations:(BOOL)arg6 ;
-(id)initWithEnrichedTaggedCharacterRanges:(id)arg0 modelOutput:(id)arg1 ;
-(id)labelTokenIndexesForOutputName:(id)arg0 label:(id)arg1 ;
-(struct _NSRange )textRangeForTokenRange:(struct _NSRange )arg0 ;


@end


#endif