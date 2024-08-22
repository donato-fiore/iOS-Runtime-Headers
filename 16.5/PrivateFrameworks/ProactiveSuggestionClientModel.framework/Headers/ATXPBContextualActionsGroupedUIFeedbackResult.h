// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBCONTEXTUALACTIONSGROUPEDUIFEEDBACKRESULT_H
#define ATXPBCONTEXTUALACTIONSGROUPEDUIFEEDBACKRESULT_H

@class PBCodable;
@protocol NSCopying;


#import "ATXPBProactiveSuggestionGroupedUIFeedbackResult.h"

@interface ATXPBContextualActionsGroupedUIFeedbackResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXPBProactiveSuggestionGroupedUIFeedbackResult *groupedUIFeedbackResults; // ivar: _groupedUIFeedbackResults
@property (readonly, nonatomic) BOOL hasGroupedUIFeedbackResults;
@property (nonatomic) BOOL hasNumManuallyAddedSteps;
@property (nonatomic) BOOL hasNumShortcutsAtEnd;
@property (nonatomic) BOOL hasNumShortcutsAtStart;
@property (nonatomic) NSUInteger numManuallyAddedSteps; // ivar: _numManuallyAddedSteps
@property (nonatomic) NSUInteger numShortcutsAtEnd; // ivar: _numShortcutsAtEnd
@property (nonatomic) NSUInteger numShortcutsAtStart; // ivar: _numShortcutsAtStart


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