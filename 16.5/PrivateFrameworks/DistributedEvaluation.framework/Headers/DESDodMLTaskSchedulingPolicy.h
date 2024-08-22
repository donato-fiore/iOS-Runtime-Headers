// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESDODMLTASKSCHEDULINGPOLICY_H
#define DESDODMLTASKSCHEDULINGPOLICY_H

@class NSDictionary, NSArray, NSURL, NSNumber;

#import <Foundation/Foundation.h>


@interface DESDodMLTaskSchedulingPolicy : NSObject {
    NSDictionary *_recipes;
}


@property (readonly, copy, nonatomic) NSArray *allRecipeIDs;
@property (readonly, nonatomic) BOOL dediscoReturnRouteEnabled; // ivar: _dediscoReturnRouteEnabled
@property (readonly, nonatomic) BOOL originReturnRouteEnabled; // ivar: _originReturnRouteEnabled
@property (readonly, nonatomic) BOOL parsecReturnRouteEnabled; // ivar: _parsecReturnRouteEnabled
@property (readonly, nonatomic) CGFloat period; // ivar: _period
@property (readonly, copy, nonatomic) NSURL *postbackBaseURL; // ivar: _postbackBaseURL
@property (readonly, nonatomic) NSUInteger recipeCountLimit; // ivar: _recipeCountLimit
@property (readonly, copy, nonatomic) NSNumber *telemetrySamplingRate; // ivar: _telemetrySamplingRate
@property (readonly, copy, nonatomic) NSURL *telemetryURL; // ivar: _telemetryURL
@property (readonly, nonatomic) CGFloat timeLimit; // ivar: _timeLimit


-(id)_policyForRecipeID:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAssetURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithPolicyDict:(id)arg0 ;
-(id)predicateForRecipeID:(id)arg0 error:(*id)arg1 ;
-(id)samplingRateForRecipeID:(id)arg0 error:(*id)arg1 ;


@end


#endif