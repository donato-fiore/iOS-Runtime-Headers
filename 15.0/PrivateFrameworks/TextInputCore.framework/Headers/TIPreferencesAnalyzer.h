// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(id)_createEventSpec;
-(id)init;
-(id)initWithRegistry:(id)arg0 ;
-(void)_dispatchEventPayloadWithPreferenceName:(id)arg0 activeInputModes:(id)arg1 currentValue:(id)arg2 previousValue:(id)arg3 changedAt:(id)arg4 ;
-(void)_registerAnalyticsEventSpecWithAnalyticsService;
-(void)analyzeRegisteredPreferences;


@end


#endif