// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPRESULTENGAGEMENTFEEDBACK_H
#define _CPRESULTENGAGEMENTFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPResultEngagementFeedback, NSSecureCoding;


#import "_CPSearchResultForFeedback.h"

@interface _CPResultEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPResultEngagementFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (nonatomic) BOOL actionEngaged; // ivar: _actionEngaged
@property (nonatomic) int actionTarget; // ivar: _actionTarget
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL matchesUnengagedSuggestion; // ivar: _matchesUnengagedSuggestion
@property (retain, nonatomic) _CPSearchResultForFeedback *result; // ivar: _result
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif