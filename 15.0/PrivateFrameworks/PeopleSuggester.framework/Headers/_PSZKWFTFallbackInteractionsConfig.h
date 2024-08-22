// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSZKWFTFALLBACKINTERACTIONSCONFIG_H
#define _PSZKWFTFALLBACKINTERACTIONSCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _PSZKWFTFallbackInteractionsConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *bundleIds; // ivar: _bundleIds
@property (readonly, nonatomic) NSUInteger clusterPruneThreshold; // ivar: _clusterPruneThreshold
@property (readonly, nonatomic) NSInteger defaultConfidenceCategory; // ivar: _defaultConfidenceCategory
@property (readonly, copy, nonatomic) NSArray *interactionCountMaxDepths; // ivar: _interactionCountMaxDepths
@property (readonly, copy, nonatomic) NSArray *interactionHistoryRelativeStartDates; // ivar: _interactionHistoryRelativeStartDates
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) NSUInteger maxSuggestions; // ivar: _maxSuggestions
@property (readonly, copy, nonatomic) NSArray *mechanisms; // ivar: _mechanisms
@property (readonly, nonatomic) NSInteger modelType; // ivar: _modelType


-(id)initWithIsEnabled:(BOOL)arg0 defaultConfidenceCategory:(NSInteger)arg1 mechanisms:(id)arg2 interactionCountMaxDepths:(id)arg3 interactionHistoryRelativeStartDates:(id)arg4 bundleIds:(id)arg5 modelType:(NSInteger)arg6 clusterPruneThreshold:(NSUInteger)arg7 maxSuggestions:(NSUInteger)arg8 ;
-(id)initWithIsEnabled:(BOOL)arg0 defaultConfidenceCategory:(NSInteger)arg1 modelType:(NSInteger)arg2 ;


@end


#endif