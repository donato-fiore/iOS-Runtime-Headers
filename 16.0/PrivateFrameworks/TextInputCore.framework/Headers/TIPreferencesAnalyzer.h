// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIPREFERENCESANALYZER_H
#define TIPREFERENCESANALYZER_H

@class NSString;
@protocol TIPreferencesAnalyzing;

#import <Foundation/Foundation.h>

#import "TIPreferencesAnalyzerRegistry.h"

@interface TIPreferencesAnalyzer : NSObject <TIPreferencesAnalyzing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) TIPreferencesAnalyzerRegistry *registry; // ivar: _registry
@property (readonly) Class superclass;


-(id)_createEventSpecForTextInputUserPreferenceChanges;
-(id)_createEventSpecForTextInputUserPreferenceState;
-(id)init;
-(id)initWithRegistry:(id)arg0 ;
-(void)_dispatchEventPayloadWithPreferenceNameToChangesEvent:(id)arg0 activeInputModes:(id)arg1 currentValue:(id)arg2 previousValue:(id)arg3 changedAt:(id)arg4 analyzedAt:(id)arg5 buildAtChange:(id)arg6 isFreshInstall:(BOOL)arg7 approxDateOfBuildInstall:(id)arg8 buildAtLastAnalysis:(id)arg9 ;
-(void)_dispatchEventPayloadWithPreferenceNameToStateEvent:(id)arg0 activeInputModes:(id)arg1 currentValue:(id)arg2 ;
-(void)_recordAnalysisOfPreferenceKey:(id)arg0 inDomain:(id)arg1 ;
-(void)_registerAnalyticsEventSpecWithAnalyticsService;
-(void)_resetChangedAtForPreferenceKey:(id)arg0 inDomain:(id)arg1 ;
-(void)_updateApproxBuildAtLastAnalysisWithBuild:(id)arg0 andApproxDateOfInstall:(id)arg1 ForPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
-(void)analyzeRegisteredPreferences;


@end


#endif