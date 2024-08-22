// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONDITIONALOBJECTANALYSIS_H
#define SXCONDITIONALOBJECTANALYSIS_H

@class NSMutableDictionary, NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SXConditionalObjectAnalysis : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_conditionsToComponentsMap;
    NSMutableDictionary *_componentsToConditionsMap;
    NSMutableDictionary *_conditionsToComponentStylesMap;
    NSMutableDictionary *_componentStylesToConditionsMap;
    NSMutableDictionary *_conditionsToComponentLayoutsMap;
    NSMutableDictionary *_componentLayoutsToConditionsMap;
    NSMutableDictionary *_conditionsToComponentTextStylesMap;
    NSMutableDictionary *_componentTextStylesToConditionsMap;
    NSMutableDictionary *_conditionsToTextStylesMap;
    NSMutableDictionary *_textStylesToConditionsMap;
}


@property (readonly, copy, nonatomic) NSSet *documentStyleConditionTypes; // ivar: _documentStyleConditionTypes


-(id)componentLayoutsUsingConditionType:(id)arg0 ;
-(id)componentLayoutsUsingConditionTypes:(id)arg0 ;
-(id)componentStylesUsingConditionType:(id)arg0 ;
-(id)componentStylesUsingConditionTypes:(id)arg0 ;
-(id)componentTextStylesUsingConditionType:(id)arg0 ;
-(id)componentTextStylesUsingConditionTypes:(id)arg0 ;
-(id)componentsUsingConditionType:(id)arg0 ;
-(id)componentsUsingConditionTypes:(id)arg0 ;
-(id)conditionTypesUsedByComponent:(id)arg0 ;
-(id)conditionTypesUsedByComponentLayout:(id)arg0 ;
-(id)conditionTypesUsedByComponentLayouts:(id)arg0 ;
-(id)conditionTypesUsedByComponentStyle:(id)arg0 ;
-(id)conditionTypesUsedByComponentStyles:(id)arg0 ;
-(id)conditionTypesUsedByComponentTextStyle:(id)arg0 ;
-(id)conditionTypesUsedByComponentTextStyles:(id)arg0 ;
-(id)conditionTypesUsedByComponents:(id)arg0 ;
-(id)conditionTypesUsedByTextStyle:(id)arg0 ;
-(id)conditionTypesUsedByTextStyles:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectsForKey:(id)arg0 map:(id)arg1 ;
-(id)objectsForKeys:(id)arg0 map:(id)arg1 ;
-(id)textStylesUsingConditionType:(id)arg0 ;
-(id)textStylesUsingConditionTypes:(id)arg0 ;
-(void)populateWithSource:(id)arg0 ;


@end


#endif