// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REUPNEXTMLMODELMANAGER_H
#define REUPNEXTMLMODELMANAGER_H


#import <Foundation/Foundation.h>


@interface REUpNextMLModelManager : NSObject



+(void)removeStoredModel;
-(float)predicitedProbabilityForLogicalElement:(id)arg0 ;
-(id)comparatorWithRules:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)performTrainingWithFeatureMaps:(id)arg0 events:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif