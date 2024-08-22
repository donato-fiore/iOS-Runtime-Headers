// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSSTYLESHEET_H
#define TSSSTYLESHEET_H

@class TSUMutableRetainedPointerSet, NSMutableDictionary, TSURetainedPointerKeyDictionary, NSString, NSSet;
@protocol TSKTransformableObject;


#import "TSPObject.h"
#import "TSSStylesheet.h"

@interface TSSStylesheet : TSPObject <TSKTransformableObject>

 {
    TSUMutableRetainedPointerSet *mStyles;
    NSMutableDictionary *mIdentifierToStyleMap;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    BOOL mIsLocked;
    BOOL mCanCullStyles;
}


@property (nonatomic) BOOL canCullStyles;
@property (readonly, nonatomic) TSSStylesheet *child; // ivar: mChild
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocked;
@property (readonly, nonatomic) TSSStylesheet *parent; // ivar: mParent
@property (readonly, nonatomic) NSSet *styles;
@property (readonly) Class superclass;


-(BOOL)cascadedContainsStyle:(id)arg0 ;
-(BOOL)containsStyle:(id)arg0 ;
-(BOOL)isAncestorOf:(id)arg0 ;
-(BOOL)isChildOf:(id)arg0 ;
-(BOOL)isDescendentOf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isParentOf:(id)arg0 ;
-(NSUInteger)descendantCount;
-(id)_defaultCharacterStyleWasCreated:(*BOOL)arg0 ;
-(id)_defaultColumnStyleWasCreated:(*BOOL)arg0 ;
-(id)_defaultListStyleWasCreated:(*BOOL)arg0 ;
-(id)_defaultParagraphStyleWasCreated:(*BOOL)arg0 ;
-(id)_defaultStyleOfClass:(Class)arg0 withIdentifier:(id)arg1 wasCreated:(*BOOL)arg2 usingBlock:(id)arg3 ;
-(id)_hyperlinkStyleWasCreated:(*BOOL)arg0 ;
-(id)cascadedFirstStyleWithName:(id)arg0 ;
-(id)cascadedStyleWithIdentifier:(id)arg0 ;
-(id)cascadedStyleWithIdentifier:(id)arg0 componentMask:(int)arg1 ;
-(id)childrenOfStyle:(id)arg0 ;
-(id)defaultCharacterStyle;
-(id)defaultColumnStyle;
-(id)defaultListStyle;
-(id)defaultParagraphStyle;
-(id)firstRootlessStyleOfClass:(Class)arg0 withOverridePropertyMap:(id)arg1 ;
-(id)firstStyleWithName:(id)arg0 ;
-(id)headerAndFooterStyle;
-(id)hyperlinkStyle;
-(id)identifiedStyles;
-(id)identifiedStylesOfClass:(Class)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 canCullStyles:(BOOL)arg1 ;
-(id)namedStylesOfClass:(Class)arg0 ;
-(id)pVariationOfStyle:(id)arg0 propertyMap:(id)arg1 matchStyles:(id)arg2 context:(id)arg3 ;
-(id)p_variationMapForVaryingCharacterStyle:(id)arg0 overParagraphStyle:(id)arg1 withPropertyMap:(id)arg2 ;
-(id)rootAncestor;
-(id)styleWithIdentifier:(id)arg0 ;
-(id)styleWithIdentifier:(id)arg0 componentMask:(int)arg1 ;
-(id)stylesOfClass:(Class)arg0 ;
-(id)stylesPassingTest:(id)arg0 ;
-(id)stylesWithName:(id)arg0 ;
-(id)stylesWithName:(id)arg0 ofClass:(Class)arg1 ;
-(id)unusedStyleIdentifierWithPackageString:(id)arg0 styleDescriptor:(id)arg1 contentTag:(id)arg2 ;
-(id)variationOfCharacterStyle:(id)arg0 paragraphStyle:(id)arg1 propertyMap:(id)arg2 ;
-(id)variationOfStyle:(id)arg0 exactPropertyMap:(id)arg1 ;
-(id)variationOfStyle:(id)arg0 propertyMap:(id)arg1 ;
-(id)variationOfStyle:(id)arg0 propertyMap:(id)arg1 context:(id)arg2 ;
-(id)variationOfStyle:(id)arg0 propertyMap:(id)arg1 matchStyles:(id)arg2 context:(id)arg3 ;
-(id)variationOfStyleMatchingStyle:(id)arg0 withNewParentStyle:(id)arg1 ;
-(void)addStyle:(id)arg0 ;
-(void)addStyle:(id)arg0 withIdentifier:(id)arg1 ;
-(void)addStyle:(id)arg0 withParent:(id)arg1 ;
-(void)addStyle:(id)arg0 withParent:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg0 ;
-(void)enumerateCascadedStylesUsingBlock:(id)arg0 ;
-(void)enumerateStylesUsingBlock:(id)arg0 ;
-(void)p_addStyle:(id)arg0 withParent:(id)arg1 identifier:(id)arg2 ;
-(void)p_addStyleToParentChildren:(id)arg0 ;
-(void)p_removeStyle:(id)arg0 ;
-(void)p_removeStyleFromParentChildren:(id)arg0 ;
-(void)p_setIdentifier:(id)arg0 ofStyle:(id)arg1 ;
-(void)removeStyle:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ofStyle:(id)arg1 ;
-(void)unlockStylesheetForDurationOfBlock:(id)arg0 ;


@end


#endif