// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDOMCONDITIONRESOLVERMODIFIER_H
#define SXDOMCONDITIONRESOLVERMODIFIER_H

@class NSString;
@protocol SXDOMModifying, SXConditionalResolverModifierInstructions, SXConditionValidationContextFactory;

#import <Foundation/Foundation.h>

#import "SXConditionalObjectResolver.h"

@interface SXDOMConditionResolverModifier : NSObject <SXDOMModifying>



@property (readonly, nonatomic) SXConditionalObjectResolver *advertisementAutoPlacementResolver; // ivar: _advertisementAutoPlacementResolver
@property (readonly, nonatomic) SXConditionalObjectResolver *componentLayoutResolver; // ivar: _componentLayoutResolver
@property (readonly, nonatomic) SXConditionalObjectResolver *componentResolver; // ivar: _componentResolver
@property (readonly, nonatomic) SXConditionalObjectResolver *componentStyleResolver; // ivar: _componentStyleResolver
@property (readonly, nonatomic) SXConditionalObjectResolver *componentTextStyleResolver; // ivar: _componentTextStyleResolver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXConditionalObjectResolver *documentStyleResolver; // ivar: _documentStyleResolver
@property (readonly, nonatomic) BOOL hasCheckedInstructions; // ivar: _hasCheckedInstructions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXConditionalResolverModifierInstructions> *instructions; // ivar: _instructions
@property (readonly, nonatomic) BOOL resolveAutoplacement; // ivar: _resolveAutoplacement
@property (readonly, nonatomic) BOOL resolveComponentLayouts; // ivar: _resolveComponentLayouts
@property (readonly, nonatomic) BOOL resolveComponentStyles; // ivar: _resolveComponentStyles
@property (readonly, nonatomic) BOOL resolveComponentTextStyles; // ivar: _resolveComponentTextStyles
@property (readonly, nonatomic) BOOL resolveComponents; // ivar: _resolveComponents
@property (readonly, nonatomic) BOOL resolveDocumentStyle; // ivar: _resolveDocumentStyle
@property (readonly, nonatomic) BOOL resolveTextStyles; // ivar: _resolveTextStyles
@property (readonly, nonatomic) SXConditionalObjectResolver *suggestedArticlesAutoPlacementResolver; // ivar: _suggestedArticlesAutoPlacementResolver
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXConditionalObjectResolver *textStyleResolver; // ivar: _textStyleResolver
@property (readonly, nonatomic) NSObject<SXConditionValidationContextFactory> *validationContextFactory; // ivar: _validationContextFactory


-(BOOL)resolveComponentLayouts:(id)arg0 conditionalObjectAnalysis:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveComponentStyles:(id)arg0 conditionalObjectAnalysis:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveComponentTextStyle:(id)arg0 conditionalObjectAnalysis:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveComponents:(id)arg0 conditionalObjectAnalysis:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveTextStyles:(id)arg0 conditionalObjectAnalysis:(id)arg1 validationContext:(id)arg2 ;
-(id)initWithValidationContextFactory:(id)arg0 componentResolver:(id)arg1 textStyleResolver:(id)arg2 componentStyleResolver:(id)arg3 componentLayoutResolver:(id)arg4 componentTextStyleResolver:(id)arg5 advertisementAutoPlacementResolver:(id)arg6 suggestedArticlesAutoPlacementResolver:(id)arg7 documentStyleResolver:(id)arg8 instructions:(id)arg9 ;
-(id)resolveAutoPlacement:(id)arg0 validationContext:(id)arg1 ;
-(id)resolveDocumentStyle:(id)arg0 conditionalObjectAnalysis:(id)arg1 validationContext:(id)arg2 ;
-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif