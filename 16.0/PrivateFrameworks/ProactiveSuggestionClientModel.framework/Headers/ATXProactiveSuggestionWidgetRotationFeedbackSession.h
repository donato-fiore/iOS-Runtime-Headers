// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVESUGGESTIONWIDGETROTATIONFEEDBACKSESSION_H
#define ATXPROACTIVESUGGESTIONWIDGETROTATIONFEEDBACKSESSION_H

@class NSDate, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata.h"
#import "ATXSuggestionLayout.h"

@interface ATXProactiveSuggestionWidgetRotationFeedbackSession : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *dwellStartDate; // ivar: _dwellStartDate
@property (readonly, nonatomic) NSMutableArray *engagementHistory; // ivar: _engagementHistory
@property (readonly, nonatomic) NSInteger engagementType; // ivar: _engagementType
@property (readonly, nonatomic) CGFloat longestDwell; // ivar: _longestDwell
@property (readonly, nonatomic) ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSDate *sessionEndDate; // ivar: _sessionEndDate
@property (readonly, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate
@property (readonly, nonatomic) ATXSuggestionLayout *systemSuggestSuggestionLayout; // ivar: _systemSuggestSuggestionLayout


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionWidgetRotationFeedbackSession:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEngagementType:(NSInteger)arg0 metadata:(id)arg1 engagementHistory:(id)arg2 systemSuggestSuggestionLayout:(id)arg3 sessionStartDate:(id)arg4 sessionEndDate:(id)arg5 dwellStartDate:(id)arg6 longestDwell:(CGFloat)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markRotationSessionEndedAtDate:(id)arg0 wasUserScroll:(BOOL)arg1 ;
-(void)markRotationSessionStartedAtDate:(id)arg0 ;
-(void)markStackHiddenAtDate:(id)arg0 ;
-(void)markStackShownAtDate:(id)arg0 ;
-(void)markStackTapped;
-(void)tryUpdateStackRotationEngagementType:(NSInteger)arg0 ;
-(void)updateSessionMetadata:(id)arg0 ;
-(void)updateWithSystemSuggestSuggestionLayout:(id)arg0 ;


@end


#endif