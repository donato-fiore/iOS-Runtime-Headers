// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKSESSIONACCUMULATOR_H
#define _PSCNAUTOCOMPLETEFEEDBACKSESSIONACCUMULATOR_H

@class _CDInteraction, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_PSCNAutocompleteFeedbackActionStatistics.h"

@interface _PSCNAutocompleteFeedbackSessionAccumulator : NSObject

@property (readonly, nonatomic) _CDInteraction *interaction; // ivar: _interaction
@property (readonly, nonatomic) _PSCNAutocompleteFeedbackActionStatistics *metricsForAction; // ivar: _metricsForAction
@property (readonly, nonatomic) NSMutableArray *metricsForImpressions; // ivar: _metricsForImpressions
@property (readonly, nonatomic) NSMutableArray *metricsForSubmodelImpressions; // ivar: _metricsForSubmodelImpressions
@property (readonly, nonatomic) NSMutableArray *vendedSuggestionEvents; // ivar: _vendedSuggestionEvents


+(id)parseSubmodel:(id)arg0 ;
-(id)init;
-(void)updateWithFeedback:(id)arg0 ;
-(void)updateWithInteraction:(id)arg0 ;
-(void)updateWithTappedSuggestion:(id)arg0 ;
-(void)updateWithVendedSuggestions:(id)arg0 reportTime:(id)arg1 ;


@end


#endif