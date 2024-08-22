// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REACTIVITYRELEVANCEPROVIDERMANAGER_H
#define REACTIVITYRELEVANCEPROVIDERMANAGER_H

@class NSString;
@protocol REPredictorObserver, REActivityRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface REActivityRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REActivityRelevanceProviderManagerProperties>

 {
    float _activeEnergy;
    float _exerciseTime;
    float _standHour;
}


@property (readonly, nonatomic) float activeEnergy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float exerciseTime;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float standHour;
@property (readonly) Class superclass;


+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_prepareForUpdate;
-(void)pause;
-(void)predictorDidUpdate:(id)arg0 ;
-(void)resume;


@end


#endif