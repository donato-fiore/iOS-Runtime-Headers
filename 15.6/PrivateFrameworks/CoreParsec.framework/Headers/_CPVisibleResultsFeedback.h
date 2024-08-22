// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPVISIBLERESULTSFEEDBACK_H
#define _CPVISIBLERESULTSFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPProcessableFeedback, _CPVisibleResultsFeedback, NSSecureCoding;


#import "_CPSearchResultForFeedback.h"

@interface _CPVisibleResultsFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleResultsFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _CPSearchResultForFeedback *goTakeoverResult; // ivar: _goTakeoverResult
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent
@property (copy, nonatomic) NSArray *uniqueIdentifiersOfVisibleCardSections; // ivar: _uniqueIdentifiersOfVisibleCardSections
@property (copy, nonatomic) NSArray *uniqueIdsOfVisibleButtons; // ivar: _uniqueIdsOfVisibleButtons


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)uniqueIdsOfVisibleButtonsAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(id)uniqueIdentifiersOfVisibleCardSectionsAtIndex:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)addUniqueIdentifiersOfVisibleCardSections:(id)arg0 ;
-(void)addUniqueIdsOfVisibleButtons:(NSUInteger)arg0 ;
-(void)clearResults;
-(void)clearUniqueIdentifiersOfVisibleCardSections;
-(void)clearUniqueIdsOfVisibleButtons;
-(void)writeTo:(id)arg0 ;


@end


#endif