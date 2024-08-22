// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGQUICKRESPONSESREPLIESNESTED_H
#define SGQUICKRESPONSESREPLIESNESTED_H

@class NSArray, NSSet;


#import "SGQuickResponsesReplies.h"

@interface SGQuickResponsesRepliesNested : SGQuickResponsesReplies

@property (readonly, nonatomic) NSArray *categoryModels; // ivar: _categoryModels
@property (readonly, nonatomic) NSArray *categorySemanticClasses; // ivar: _categorySemanticClasses
@property (readonly, nonatomic) NSArray *categoryStyleGroups; // ivar: _categoryStyleGroups
@property (readonly, nonatomic) NSArray *models; // ivar: _models
@property (readonly, nonatomic) NSSet *normalizedReplyTextsSet; // ivar: _normalizedReplyTextsSet
@property (readonly, nonatomic) NSArray *replyTextParent; // ivar: _replyTextParent
@property (readonly, nonatomic) NSArray *replyTexts; // ivar: _replyTexts
@property (readonly, nonatomic) NSArray *selectedPseudocounts; // ivar: _selectedPseudocounts
@property (readonly, nonatomic) NSArray *semanticClassParent; // ivar: _semanticClassParent
@property (readonly, nonatomic) NSArray *semanticClassReplyTextStrings; // ivar: _semanticClassReplyTextStrings
@property (readonly, nonatomic) NSArray *semanticClassReplyTexts; // ivar: _semanticClassReplyTexts
@property (readonly, nonatomic) NSArray *semanticClassSelectedPseudocounts; // ivar: _semanticClassSelectedPseudocounts
@property (readonly, nonatomic) NSArray *semanticClassStyleGroups; // ivar: _semanticClassStyleGroups
@property (readonly, nonatomic) NSArray *semanticClasses; // ivar: _semanticClasses
@property (readonly, nonatomic) NSArray *styleGroupParent; // ivar: _styleGroupParent
@property (readonly, nonatomic) NSArray *styleGroupReplyTexts; // ivar: _styleGroupReplyTexts
@property (readonly, nonatomic) NSArray *styleGroups; // ivar: _styleGroups


+(BOOL)isZeroBasedAndContiguous:(id)arg0 ;
+(id)categoryModelsFromModels:(id)arg0 ;
+(id)flattenedArraysFromNestedArray:(id)arg0 ;
+(id)indexedArraysFromNestedArray:(id)arg0 ;
+(id)modelSemanticClassesFromModels:(id)arg0 ;
+(id)nestedArrayFromFlatArray:(id)arg0 nestedIndexes:(id)arg1 ;
+(id)nestedArrayFromModels:(id)arg0 ;
+(id)parentArraysFromNestedArray:(id)arg0 models:(id)arg1 ;
+(id)replyModelsForArray:(id)arg0 ;
+(id)selectedPseudocountsFromModels:(id)arg0 ;
+(id)subclassesFromClasses:(id)arg0 subclassArray:(id)arg1 ;
-(NSUInteger)maxDistinctReplies;
-(NSUInteger)modelCount;
-(NSUInteger)replyClassCount;
-(NSUInteger)replyCountForIndex:(NSUInteger)arg0 ;
-(NSUInteger)replyTextCount;
-(id)initWithArray:(id)arg0 ;
-(id)replyTextForIndex:(NSUInteger)arg0 position:(NSUInteger)arg1 ;
-(id)replyTextsForIndex:(NSUInteger)arg0 ;


@end


#endif