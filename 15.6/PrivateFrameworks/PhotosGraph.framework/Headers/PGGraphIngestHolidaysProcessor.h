// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHINGESTHOLIDAYSPROCESSOR_H
#define PGGRAPHINGESTHOLIDAYSPROCESSOR_H

@class NSMutableDictionary, NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"
#import "PGHolidayClassifier.h"
#import "PGGraphMeNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
    PGHolidayClassifier *_holidayClassifier;
    PGGraphMeNodeCollection *_meNodeAsCollection;
    PGGraphPersonNodeCollection *_partnerPersonNodes;
    PGGraphPersonNodeCollection *_familyPersonNodes;
    PGGraphPersonNodeCollection *_childPersonNodes;
    PGGraphPersonNodeCollection *_fatherPersonNodes;
    PGGraphPersonNodeCollection *_motherPersonNodes;
    PGGraphPersonNodeCollection *_friendPersonNodes;
    PGGraphPersonNodeCollection *_coworkerPersonNodes;
    PGGraphPersonNodeCollection *_nonAcquaintancePersonNodes;
    NSUInteger _meBiologicalSex;
    NSMutableDictionary *_biologicalSexByPartnerPersonNodeIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)keyboardLanguageCodesForInfoNode:(id)arg0 holidayService:(id)arg1 ;
-(BOOL)momentTraitsMatchesHolidayTraits:(id)arg0 momentNode:(id)arg1 loggingConnection:(id)arg2 ;
-(BOOL)shouldCreateHolidayEdgeForEventRule:(id)arg0 momentNode:(id)arg1 momentLocalDate:(id)arg2 withGraph:(id)arg3 loggingConnection:(id)arg4 localeCountryCode:(id)arg5 keyboardLanguageCodes:(id)arg6 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(CGFloat)_calculateSceneScores:(id)arg0 ;
-(CGFloat)_dateScoreForEventRule:(id)arg0 localeCode:(id)arg1 holidayDate:(id)arg2 momentDate:(id)arg3 ;
-(CGFloat)dateScoreForEventRule:(id)arg0 localeCountryCode:(id)arg1 momentCountryCodes:(id)arg2 keyboardLanguageCodes:(id)arg3 momentDate:(id)arg4 ;
-(CGFloat)locationScoreForEventRule:(id)arg0 localeCountryCode:(id)arg1 momentCountryCodes:(id)arg2 keyboardLanguageCodes:(id)arg3 ;
-(CGFloat)sceneScoreForEventRule:(id)arg0 localeCountryCode:(id)arg1 momentCountryCodes:(id)arg2 keyboardLanguageCodes:(id)arg3 momentNode:(id)arg4 ;
-(NSUInteger)_eventRuleLocationTraitForMomentNode:(id)arg0 graph:(id)arg1 ;
-(NSUInteger)_eventRulePeopleTraitForPersonNodes:(id)arg0 graph:(id)arg1 ;
-(id)_momentsCelebratingRule:(id)arg0 localDates:(id)arg1 userCountryCode:(id)arg2 keyboardLanguageCodes:(id)arg3 graph:(id)arg4 loggingConnection:(id)arg5 ;
-(id)allDatesForEventRule:(id)arg0 withGraph:(id)arg1 ;
-(id)holidayCalendarEventRuleTraitsForMomentNode:(id)arg0 ;
-(id)init;
-(void)_prepareIfNeededWithGraph:(id)arg0 ;
-(void)insertHolidaysBetweenLocalDate:(id)arg0 andLocalDate:(id)arg1 graph:(id)arg2 locale:(id)arg3 loggingConnection:(id)arg4 progressBlock:(id)arg5 ;
-(void)insertHolidaysWithMomentNodes:(id)arg0 graph:(id)arg1 locale:(id)arg2 loggingConnection:(id)arg3 progressBlock:(id)arg4 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif