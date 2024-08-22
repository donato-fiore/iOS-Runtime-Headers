// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCREADONLYPERSONALIZATIONAGGREGATESTORE_H
#define FCREADONLYPERSONALIZATIONAGGREGATESTORE_H

@class NSString, NSMutableDictionary;
@protocol FCReadonlyPersonalizationAggregateStore, FCDerivedPersonalizationData;

#import <Foundation/Foundation.h>


@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<FCDerivedPersonalizationData> *derivedPersonalizationData; // ivar: _derivedPersonalizationData
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey; // ivar: _overrideAggregatesByFeatureKey
@property (readonly) Class superclass;


-(id)aggregatesForFeatures:(id)arg0 ;
-(id)baselineAggregateWithConfigurableValues:(id)arg0 ;
-(id)init;
-(id)initWithDerivedPersonalizationData:(id)arg0 ;
-(void)modifyLocalAggregatesForFeatureKeys:(id)arg0 withAction:(NSUInteger)arg1 actionCount:(NSUInteger)arg2 defaultClicks:(CGFloat)arg3 defaultImpressions:(CGFloat)arg4 impressionBias:(CGFloat)arg5 configurableValues:(id)arg6 ;
-(void)processTodayPersonalizationUpdates:(id)arg0 withConfigurableValues:(id)arg1 ;
-(void)updateFeatures:(id)arg0 withAction:(NSUInteger)arg1 displayRank:(NSInteger)arg2 groupRank:(NSInteger)arg3 individually:(BOOL)arg4 configurableValues:(id)arg5 ;


@end


#endif