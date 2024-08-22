// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBPROACTIVESUGGESTIONGROUPEDUIFEEDBACKRESULT_H
#define ATXPBPROACTIVESUGGESTIONGROUPEDUIFEEDBACKRESULT_H

@class PBCodable;
@protocol NSCopying;



@interface ATXPBProactiveSuggestionGroupedUIFeedbackResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endDateOfLastSessionInSeconds; // ivar: _endDateOfLastSessionInSeconds
@property (nonatomic) BOOL hasEndDateOfLastSessionInSeconds;
@property (nonatomic) BOOL hasIsComplete;
@property (nonatomic) BOOL hasNumAbandonedSuggestions;
@property (nonatomic) BOOL hasNumEngagedSuggestions;
@property (nonatomic) BOOL hasNumRejectedSuggestions;
@property (nonatomic) BOOL hasNumSessionsWithAbandonedSuggestions;
@property (nonatomic) BOOL hasNumSessionsWithEngagedSuggestions;
@property (nonatomic) BOOL hasNumSessionsWithRejectedSuggestions;
@property (nonatomic) BOOL hasStartDateOfFirstSessionInSeconds;
@property (nonatomic) BOOL isComplete; // ivar: _isComplete
@property (nonatomic) NSUInteger numAbandonedSuggestions; // ivar: _numAbandonedSuggestions
@property (nonatomic) NSUInteger numEngagedSuggestions; // ivar: _numEngagedSuggestions
@property (nonatomic) NSUInteger numRejectedSuggestions; // ivar: _numRejectedSuggestions
@property (nonatomic) NSUInteger numSessionsWithAbandonedSuggestions; // ivar: _numSessionsWithAbandonedSuggestions
@property (nonatomic) NSUInteger numSessionsWithEngagedSuggestions; // ivar: _numSessionsWithEngagedSuggestions
@property (nonatomic) NSUInteger numSessionsWithRejectedSuggestions; // ivar: _numSessionsWithRejectedSuggestions
@property (nonatomic) CGFloat startDateOfFirstSessionInSeconds; // ivar: _startDateOfFirstSessionInSeconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif