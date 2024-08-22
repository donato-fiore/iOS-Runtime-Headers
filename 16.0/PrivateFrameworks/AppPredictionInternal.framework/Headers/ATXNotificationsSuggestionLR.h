// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSSUGGESTIONLR_H
#define ATXNOTIFICATIONSSUGGESTIONLR_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface ATXNotificationsSuggestionLR : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromAppPopularity:(CGFloat)arg0 totalLaunches:(CGFloat)arg1 received:(CGFloat)arg2 ignored:(CGFloat)arg3 cleared:(CGFloat)arg4 engaged:(CGFloat)arg5 defaultActions:(CGFloat)arg6 orbs:(CGFloat)arg7 suppActions:(CGFloat)arg8 tapCoalesce:(CGFloat)arg9 engage_rate:(CGFloat)arg10 app_bias:(CGFloat)arg11 error:(*id)arg12 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif