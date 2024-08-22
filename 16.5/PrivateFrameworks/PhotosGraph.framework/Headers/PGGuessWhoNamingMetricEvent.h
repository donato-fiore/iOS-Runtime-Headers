// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGUESSWHONAMINGMETRICEVENT_H
#define PGGUESSWHONAMINGMETRICEVENT_H

@class NSDictionary;


#import "PGAbstractMetricEvent.h"
#import "PGManager.h"

@interface PGGuessWhoNamingMetricEvent : PGAbstractMetricEvent {
    PGManager *_manager;
    NSDictionary *_payload;
}


@property (nonatomic) BOOL hasMeNodeAndMeContact; // ivar: _hasMeNodeAndMeContact
@property (nonatomic) NSUInteger librarySize; // ivar: _librarySize
@property (nonatomic) NSUInteger numberOfNamedPeople; // ivar: _numberOfNamedPeople
@property (nonatomic) NSUInteger numberOfPeople; // ivar: _numberOfPeople
@property (nonatomic) NSUInteger numberOfPeopleFavorited; // ivar: _numberOfPeopleFavorited
@property (nonatomic) NSUInteger numberOfPeopleToName; // ivar: _numberOfPeopleToName
@property (nonatomic) CGFloat numberOfPeopleWithAContactSuggestion; // ivar: _numberOfPeopleWithAContactSuggestion
@property (nonatomic) CGFloat numberOfPeopleWithAHighConfidenceContactSuggestion; // ivar: _numberOfPeopleWithAHighConfidenceContactSuggestion
@property (nonatomic) CGFloat proportionOfNamedPeople; // ivar: _proportionOfNamedPeople
@property (nonatomic) CGFloat recallContactSuggestion; // ivar: _recallContactSuggestion
@property (nonatomic) CGFloat recallHighConfidenceContactSuggestion; // ivar: _recallHighConfidenceContactSuggestion


-(id)identifier;
-(id)initWithGraphManager:(id)arg0 ;
-(id)payload;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif