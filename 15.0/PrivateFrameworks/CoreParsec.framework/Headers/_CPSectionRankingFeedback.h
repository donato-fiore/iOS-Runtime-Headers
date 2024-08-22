// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPSECTIONRANKINGFEEDBACK_H
#define _CPSECTIONRANKINGFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPProcessableFeedback, _CPSectionRankingFeedback, NSSecureCoding;


#import "_CPResultSectionForFeedback.h"

@interface _CPSectionRankingFeedback : PBCodable <_CPProcessableFeedback, _CPSectionRankingFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int localSectionPosition; // ivar: _localSectionPosition
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) _CPResultSectionForFeedback *section; // ivar: _section
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)clearResults;
-(void)writeTo:(id)arg0 ;


@end


#endif