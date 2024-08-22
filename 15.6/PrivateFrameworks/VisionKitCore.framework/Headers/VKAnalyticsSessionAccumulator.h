// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKANALYTICSSESSIONACCUMULATOR_H
#define VKANALYTICSSESSIONACCUMULATOR_H

@class NSString, NSDictionary, NSMutableArray, NSDate;

#import <Foundation/Foundation.h>

#import "VKImageAnalysis.h"

@interface VKAnalyticsSessionAccumulator : NSObject

@property (retain, nonatomic) VKImageAnalysis *analysis; // ivar: _analysis
@property (nonatomic) NSUInteger averageTextSelectionLength; // ivar: _averageTextSelectionLength
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSDictionary *coreAnalyticsDictionary;
@property (retain, nonatomic) NSMutableArray *ddEvents; // ivar: _ddEvents
@property (nonatomic) BOOL didActivateHighlightAll; // ivar: _didActivateHighlightAll
@property (nonatomic) BOOL didActivateRegex; // ivar: _didActivateRegex
@property (nonatomic) BOOL didSelectText; // ivar: _didSelectText
@property (retain, nonatomic) NSMutableArray *interactionEvents; // ivar: _interactionEvents
@property (nonatomic) BOOL isPerformingAutomatedTest; // ivar: _isPerformingAutomatedTest
@property (retain, nonatomic) NSMutableArray *mrcEvents; // ivar: _mrcEvents
@property (nonatomic) NSUInteger numberOfDDElements; // ivar: _numberOfDDElements
@property (nonatomic) NSUInteger numberOfDDEvents; // ivar: _numberOfDDEvents
@property (nonatomic) NSUInteger numberOfEvents; // ivar: _numberOfEvents
@property (nonatomic) NSUInteger numberOfMRCElements; // ivar: _numberOfMRCElements
@property (nonatomic) NSUInteger numberOfMRCEvents; // ivar: _numberOfMRCEvents
@property (nonatomic) NSUInteger numberOfSelectionChanges; // ivar: _numberOfSelectionChanges
@property (nonatomic) NSUInteger numberOfTextEvents; // ivar: _numberOfTextEvents
@property (nonatomic) NSUInteger numberOfVSElements; // ivar: _numberOfVSElements
@property (nonatomic) NSUInteger numberOfVSEvents; // ivar: _numberOfVSEvents
@property (nonatomic) CGFloat sessionDuration; // ivar: _sessionDuration
@property (retain, nonatomic) NSDate *sessionOpenDate; // ivar: _sessionOpenDate
@property (retain, nonatomic) NSMutableArray *textEvents; // ivar: _textEvents
@property (nonatomic) NSUInteger textLength; // ivar: _textLength
@property (retain, nonatomic) NSMutableArray *vsEvents; // ivar: _vsEvents


-(id)description;
-(id)initWithAnalysis:(id)arg0 customIdentifier:(id)arg1 ;
-(void)addEvent:(id)arg0 ;
-(void)calculateAverageSelectedLengthFromTextEvents;
-(void)calculateDidActivateRegex;
-(void)calculateDidHighlightAll;
-(void)close;
-(void)send;


@end


#endif