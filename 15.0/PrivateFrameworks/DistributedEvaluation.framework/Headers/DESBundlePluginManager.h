// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DESBUNDLEPLUGINMANAGER_H
#define DESBUNDLEPLUGINMANAGER_H

@class NSString;
@protocol DESPluginManaging, DESRecipeEvaluation;

#import <Foundation/Foundation.h>

#import "DESRecipeEvaluationSession.h"

@interface DESBundlePluginManager : NSObject <DESPluginManaging>

 {
    id<DESRecipeEvaluation> *_evaluator;
    DESRecipeEvaluationSession *_recipeEvaluation;
}


@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)pluginManagerForBundleId:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)shouldDownloadURL:(id)arg0 forTask:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 DESRecipeEvaluationObject:(id)arg1 ;
-(id)performDodMLTask:(id)arg0 outError:(*id)arg1 ;
-(id)telemetryWithRecordSet:(id)arg0 ;
-(void)stopWithCompletion:(id)arg0 ;


@end


#endif