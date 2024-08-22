// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVESUGGESTIONGROUPEDUIFEEDBACKRESULT_H
#define ATXPROACTIVESUGGESTIONGROUPEDUIFEEDBACKRESULT_H

@class NSDate;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXPBProactiveSuggestionGroupedUIFeedbackResult.h"

@interface ATXProactiveSuggestionGroupedUIFeedbackResult : NSObject <NSSecureCoding, ATXProtoBufWrapper>

 {
    ATXPBProactiveSuggestionGroupedUIFeedbackResult *_proto;
}


@property (readonly, nonatomic) NSDate *endDateOfLastSession;
@property (nonatomic) BOOL isGroupSessionComplete;
@property (readonly, nonatomic) NSUInteger numAbandonedSuggestions;
@property (readonly, nonatomic) NSUInteger numEngagedSuggestions;
@property (readonly, nonatomic) NSUInteger numRejectedSuggestions;
@property (readonly, nonatomic) NSUInteger numSessionsWithAbandonedSuggestions;
@property (readonly, nonatomic) NSUInteger numSessionsWithEngagedSuggestions;
@property (readonly, nonatomic) NSUInteger numSessionsWithRejectedSuggestions;
@property (readonly, nonatomic) NSDate *startDateOfFirstSession;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionGroupedUIFeedbackResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithIntermediateSessionResults:(id)arg0 ;


@end


#endif