// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPRESULTRANKINGFEEDBACK_H
#define _CPRESULTRANKINGFEEDBACK_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _CPProcessableFeedback, _CPResultRankingFeedback, NSSecureCoding;


#import "_CPSearchResultForFeedback.h"

@interface _CPResultRankingFeedback : PBCodable <_CPProcessableFeedback, _CPResultRankingFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *duplicateResults; // ivar: _duplicateResults
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *hiddenResults; // ivar: _hiddenResults
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int localResultPosition; // ivar: _localResultPosition
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (retain, nonatomic) _CPSearchResultForFeedback *result; // ivar: _result
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)duplicateResultsAtIndex:(NSUInteger)arg0 ;
-(id)hiddenResultsAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)addDuplicateResults:(id)arg0 ;
-(void)addHiddenResults:(id)arg0 ;
-(void)clearDuplicateResults;
-(void)clearHiddenResults;
-(void)writeTo:(id)arg0 ;


@end


#endif