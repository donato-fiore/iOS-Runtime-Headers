// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTHEURISTICSUGGESTIONPRODUCER_H
#define ATXCONTEXTHEURISTICSUGGESTIONPRODUCER_H


#import <Foundation/Foundation.h>


@interface ATXContextHeuristicSuggestionProducer : NSObject



+(id)_bundleIDWithURL:(id)arg0 ;
+(id)_clientModelSpecForSpotlightRecents;
+(id)_clientModelSpectForContextHeuristics;
+(id)_executableSpecForShortcutsAction:(id)arg0 ;
+(id)_executableSpecForSpotlightAction:(id)arg0 ;
+(id)_mediaWithName:(id)arg0 type:(NSInteger)arg1 adamIdentifier:(NSInteger)arg2 umcIdentifier:(id)arg3 predictionReasons:(NSUInteger)arg4 localizedReason:(id)arg5 score:(CGFloat)arg6 expirationDate:(id)arg7 ;
+(id)_suggestionWithSpotlightRecentAction:(id)arg0 score:(CGFloat)arg1 ;
+(id)_uiSpecWithTitle:(id)arg0 subtitle:(id)arg1 predictionReason:(id)arg2 shouldClearOnEngagement:(BOOL)arg3 predictionReasons:(NSUInteger)arg4 ;
+(id)createSuggestionFromShortcutsAction:(id)arg0 predictionReasons:(NSUInteger)arg1 localizedReason:(id)arg2 title:(id)arg3 subtitle:(id)arg4 score:(CGFloat)arg5 shouldClearOnEngagement:(BOOL)arg6 ;
+(id)flightCheckInActivityWithSubtitle:(id)arg0 url:(id)arg1 teamIdentifier:(id)arg2 predictionReasons:(NSUInteger)arg3 localizedReason:(id)arg4 score:(CGFloat)arg5 validStartDate:(id)arg6 validEndDate:(id)arg7 ;
+(id)mediaWithName:(id)arg0 type:(NSInteger)arg1 adamIdentifier:(NSInteger)arg2 predictionReasons:(NSUInteger)arg3 localizedReason:(id)arg4 score:(CGFloat)arg5 expirationDate:(id)arg6 ;
+(id)mediaWithName:(id)arg0 type:(NSInteger)arg1 umcIdentifier:(id)arg2 predictionReasons:(NSUInteger)arg3 localizedReason:(id)arg4 score:(CGFloat)arg5 expirationDate:(id)arg6 ;
+(id)navigationToDestination:(id)arg0 title:(id)arg1 subtitle:(id)arg2 transportType:(NSUInteger)arg3 destinationName:(id)arg4 predictionReasons:(NSUInteger)arg5 localizedReason:(id)arg6 score:(CGFloat)arg7 shouldClearOnEngagement:(BOOL)arg8 validStartDate:(id)arg9 validEndDate:(id)arg10 ;
+(id)rideshareAppActionForDestination:(id)arg0 preferredBundleId:(id)arg1 predictionReasons:(NSUInteger)arg2 title:(id)arg3 localizedReason:(id)arg4 score:(CGFloat)arg5 validFromStartDate:(id)arg6 validToEndDate:(id)arg7 ;
+(id)setAirplaneMode:(BOOL)arg0 predictionReasons:(NSUInteger)arg1 localizedReason:(id)arg2 score:(CGFloat)arg3 validFromStartDate:(id)arg4 validToEndDate:(id)arg5 ;
+(id)suggestionForConferenceWithURL:(id)arg0 score:(CGFloat)arg1 predictionReasons:(NSUInteger)arg2 localizedReason:(id)arg3 criteria:(id)arg4 ;
+(id)suggestionForDNDWithTitle:(id)arg0 eventUniqueID:(id)arg1 identifier:(id)arg2 until:(id)arg3 score:(CGFloat)arg4 predictionReasons:(NSUInteger)arg5 localizedReason:(id)arg6 turnOn:(BOOL)arg7 validFromStartDate:(id)arg8 validToEndDate:(id)arg9 ;
+(id)suggestionWithAction:(id)arg0 predictionReasons:(NSUInteger)arg1 localizedReason:(id)arg2 score:(CGFloat)arg3 ;
+(id)suggestionWithExecutableSpecification:(id)arg0 title:(id)arg1 subtitle:(id)arg2 predictionReasons:(NSUInteger)arg3 localizedReason:(id)arg4 score:(CGFloat)arg5 ;
+(id)suggestionWithShortcutAction:(id)arg0 predictionReasons:(NSUInteger)arg1 localizedReason:(id)arg2 title:(id)arg3 subtitle:(id)arg4 score:(CGFloat)arg5 ;
+(id)suggestionWithSpotlightAction:(id)arg0 predictionReasons:(NSUInteger)arg1 localizedReason:(id)arg2 score:(CGFloat)arg3 ;
+(id)suggestionsForRecentResults:(id)arg0 ;


@end


#endif