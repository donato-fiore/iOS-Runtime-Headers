// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESPREDICTIONPARAMETERS_H
#define SGQUICKRESPONSESPREDICTIONPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesPredictionParameters : NSObject

@property (readonly, nonatomic) CGFloat classDiscount; // ivar: _classDiscount
@property (readonly, nonatomic) NSUInteger defaultResponsesToReturn; // ivar: _defaultResponsesToReturn
@property (readonly, nonatomic) BOOL dynamicLabelsEnabled; // ivar: _dynamicLabelsEnabled
@property (readonly, nonatomic) BOOL filterNonConfident; // ivar: _filterNonConfident
@property (readonly, nonatomic) BOOL hasNegativeClass; // ivar: _hasNegativeClass
@property (readonly, nonatomic) BOOL isPerCategory; // ivar: _isPerCategory
@property (readonly, nonatomic) BOOL isPersonalizationDisabled; // ivar: _isPersonalizationDisabled
@property (readonly, nonatomic) BOOL isReplyTextRandomized; // ivar: _isReplyTextRandomized
@property (readonly, nonatomic) NSUInteger maxPromptLength; // ivar: _maxPromptLength
@property (readonly, nonatomic) CGFloat maxPromptWindowSeconds; // ivar: _maxPromptWindowSeconds
@property (readonly, nonatomic) CGFloat minToShowThreshold; // ivar: _minToShowThreshold
@property (readonly, nonatomic) BOOL modelFeaturizationFormatOptionIsDense; // ivar: _modelFeaturizationFormatOptionIsDense
@property (readonly, nonatomic) NSString *modelTypeName; // ivar: _modelTypeName
@property (readonly, nonatomic) CGFloat negativeClassMaximumToPredict; // ivar: _negativeClassMaximumToPredict
@property (readonly, nonatomic) CGFloat personalizationDisplayedPseudocount; // ivar: _personalizationDisplayedPseudocount
@property (readonly, nonatomic) CGFloat personalizationExplorationFactor; // ivar: _personalizationExplorationFactor
@property (readonly, nonatomic) CGFloat personalizationSelectedPseudocountPerSemanticClass; // ivar: _personalizationSelectedPseudocountPerSemanticClass
@property (readonly, nonatomic) NSString *promptJoiningString; // ivar: _promptJoiningString
@property (readonly, nonatomic) CGFloat responsesBonus; // ivar: _responsesBonus
@property (readonly, nonatomic) NSUInteger responsesToShowAtTopForDiversity; // ivar: _responsesToShowAtTopForDiversity
@property (readonly, nonatomic) NSString *subModelKeyString; // ivar: _subModelKeyString
@property (readonly, nonatomic) CGFloat weightForCategoryAverage; // ivar: _weightForCategoryAverage
@property (readonly, nonatomic) CGFloat weightForCategoryMax; // ivar: _weightForCategoryMax
@property (readonly, nonatomic) CGFloat weightForIndividualModel; // ivar: _weightForIndividualModel


+(id)_modelTypeNameForDictionary:(id)arg0 ;
+(id)_subModelKeyStringForDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif