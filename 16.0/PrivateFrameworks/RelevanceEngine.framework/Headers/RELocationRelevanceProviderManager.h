// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RELOCATIONRELEVANCEPROVIDERMANAGER_H
#define RELOCATIONRELEVANCEPROVIDERMANAGER_H

@class NSString;
@protocol REPredictorObserver;


#import "RESharedLocationRelevanceProviderManager.h"

@interface RELocationRelevanceProviderManager : RESharedLocationRelevanceProviderManager <REPredictorObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_relevanceProviderClass;
+(id)_dependencyClasses;
+(id)_features;
-(id)_locationOfProvider:(id)arg0 ;
-(id)_valueForProvider:(id)arg0 context:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(int)_queryRevokableStatusForProvider:(id)arg0 ;
-(void)pause;
-(void)predictorDidUpdate:(id)arg0 ;
-(void)resume;


@end


#endif