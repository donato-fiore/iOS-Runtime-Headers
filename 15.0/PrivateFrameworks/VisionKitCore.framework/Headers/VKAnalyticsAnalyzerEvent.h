// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKANALYTICSANALYZEREVENT_H
#define VKANALYTICSANALYZEREVENT_H

@class NSError;


#import "VKAnalyticsEvent.h"
#import "VKAnalysisExecutionDurations.h"

@interface VKAnalyticsAnalyzerEvent : VKAnalyticsEvent

@property (nonatomic) NSUInteger analysisTypes; // ivar: _analysisTypes
@property (nonatomic) NSInteger ddCount; // ivar: _ddCount
@property (retain, nonatomic) VKAnalysisExecutionDurations *durations; // ivar: _durations
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) NSInteger lineCount; // ivar: _lineCount
@property (readonly, nonatomic) CGFloat madDocumentDuration;
@property (readonly, nonatomic) CGFloat madMRCDuration;
@property (readonly, nonatomic) CGFloat madRoundTripAnalysisDuration;
@property (readonly, nonatomic) CGFloat madVisualSearchDuration;
@property (nonatomic) NSInteger mrcCount; // ivar: _mrcCount
@property (readonly, nonatomic) CGFloat mrcParseDuration;
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (nonatomic) NSInteger textLength; // ivar: _textLength
@property (nonatomic) NSInteger visualSearchCount; // ivar: _visualSearchCount


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithExecutionDurations:(id)arg0 request:(id)arg1 analysis:(id)arg2 customIdentifier:(id)arg3 error:(id)arg4 ;


@end


#endif