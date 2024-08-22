// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSBEHAVIORRULEFEATUREEXTRACTION_H
#define _PSBEHAVIORRULEFEATUREEXTRACTION_H

@class BMBehaviorRetriever, NSMutableDictionary, _CDInteractionStore, NSDictionary;

#import <Foundation/Foundation.h>


@interface _PSBehaviorRuleFeatureExtraction : NSObject

@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // ivar: _behaviorRetriever
@property (retain, nonatomic) NSMutableDictionary *constantFeatures; // ivar: _constantFeatures
@property (nonatomic) BOOL constantFeaturesReady; // ivar: _constantFeaturesReady
@property (retain, nonatomic) NSMutableDictionary *contextFeatures; // ivar: _contextFeatures
@property (nonatomic) BOOL contextFeaturesReady; // ivar: _contextFeaturesReady
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (readonly) NSDictionary *metadata; // ivar: _metadata


-(id)initWithMetadata:(id)arg0 ;
-(int)bucketedValue:(int)arg0 ;
-(void)extractConstantFeaturesForMLModelIntoFeatures:(id)arg0 ;
-(void)extractContextMatchFeatures:(id)arg0 features:(id)arg1 ;
-(void)extractFeaturesGivenRule:(id)arg0 contextItems:(id)arg1 features:(id)arg2 ;
-(void)precalculateConstantFeatures;
-(void)transferFeaturesFrom:(id)arg0 toFeatures:(id)arg1 ;


@end


#endif