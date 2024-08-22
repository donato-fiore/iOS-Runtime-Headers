// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTIONRELEVANCEPROVIDERMANAGER_H
#define REMOTIONRELEVANCEPROVIDERMANAGER_H

@class NSString;
@protocol REPredictorObserver, REMotionRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface REMotionRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMotionRelevanceProviderManagerProperties>

 {
    NSUInteger _type;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger motionType;
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