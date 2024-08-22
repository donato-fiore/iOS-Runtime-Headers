// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RECOREBEHAVIORPREDICTOR_H
#define RECOREBEHAVIORPREDICTOR_H

@class BMBehaviorRetriever, NSArray, NSMapTable, NSString;
@protocol REPredictorObserver;


#import "REPredictor.h"

@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver>

 {
    BMBehaviorRetriever *_retriever;
    NSArray *_rules;
    NSMapTable *_locations;
    NSUInteger _dayValue;
    NSUInteger _hourValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)updateInterval;
+(id)supportedFeatures;
-(id)_bmtypeForShortcutType:(NSUInteger)arg0 filterLevel:(NSUInteger)arg1 ;
-(id)_init;
-(id)_retrieveFeatureValueForItemType:(id)arg0 shortcutIdentifier:(id)arg1 antecedentType:(id)arg2 antecedentValue:(id)arg3 ;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)pause;
-(void)predictorDidUpdate:(id)arg0 ;
-(void)resume;
-(void)update;


@end


#endif