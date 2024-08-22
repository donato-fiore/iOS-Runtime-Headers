// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGQUICKRESPONSESREPLIES_H
#define SGQUICKRESPONSESREPLIES_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesReplies : NSObject

@property (readonly, nonatomic) NSArray *categoryModels; // ivar: _categoryModels
@property (readonly, nonatomic) NSArray *categorySemanticClasses; // ivar: _categorySemanticClasses
@property (readonly, nonatomic) NSArray *categoryStyleGroups; // ivar: _categoryStyleGroups
@property (readonly, nonatomic) NSArray *models; // ivar: _models
@property (readonly, nonatomic) NSArray *replyTextParent; // ivar: _replyTextParent
@property (readonly, nonatomic) NSArray *replyTexts; // ivar: _replyTexts
@property (readonly, nonatomic) NSSet *replyTextsSet; // ivar: _replyTextsSet
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
-(id)initWithArray:(id)arg0 ;


@end


#endif