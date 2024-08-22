// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REWORKOUTRELEVANCEPROVIDERMANAGER_H
#define REWORKOUTRELEVANCEPROVIDERMANAGER_H

@class NSDate, NSString;
@protocol REPredictorObserver, REWorkoutRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REWorkoutRelevanceProviderManagerProperties>

 {
    NSUInteger _state;
    NSDate *_lastWorkoutDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger state;
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