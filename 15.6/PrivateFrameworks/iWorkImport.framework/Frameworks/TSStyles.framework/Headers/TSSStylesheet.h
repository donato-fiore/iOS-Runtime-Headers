// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSSTYLESHEET_H
#define TSSSTYLESHEET_H

@class TSPObject, NSMutableDictionary, TSUMutableRetainedPointerSet, TSURetainedPointerKeyDictionary, NSSet, NSString, NSArray;
@protocol TSKTransformableObject;


#import "TSSStylesheet.h"

@interface TSSStylesheet : TSPObject <TSKTransformableObject>

 {
    NSMutableDictionary *mIdentifierToStyleMap;
    TSUMutableRetainedPointerSet *mStyles;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    NSMutableDictionary *mUUIDToStyleMap;
    BOOL mIsLocked;
    BOOL mCanCullStyles;
    BOOL mBaseStyleSetUpdated;
}


@property (readonly, nonatomic) BOOL baseStyleSetUpdated;
@property (readonly, nonatomic) NSSet *baseStyles;
@property (nonatomic) BOOL canCullStyles;
@property (weak, nonatomic) TSSStylesheet *child; // ivar: mChild
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger descendantCount;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *identifiedStyles;
@property (nonatomic) BOOL isLocked;
@property (retain, nonatomic) TSSStylesheet *parent; // ivar: mParent
@property (readonly, nonatomic) TSSStylesheet *rootAncestor;
@property (readonly, nonatomic) NSSet *styles;
@property (readonly) Class superclass;


-(*void)p_allFilteredIdentifiersInArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)cascadedContainsStyle:(id)arg0 ;
-(BOOL)containsStyle:(id)arg0 ;
-(BOOL)isAncestorOf:(id)arg0 ;
-(BOOL)isChildOf:(id)arg0 ;
-(BOOL)isDescendentOf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isParentOf:(id)arg0 ;
-(BOOL)p_shouldDoDOLCForStyle:(id)arg0 ;
-(BOOL)shouldAlwaysArchiveWhenInMemory;
-(BOOL)shouldDelayArchiving;
-(id)cascadedStyleWithIdentifier:(id)arg0 ;
-(id)cascadedStyleWithIdentifier:(id)arg0 componentMask:(NSUInteger)arg1 ;
-(id)cascadedStylesPassingTest:(id)arg0 ;
-(id)childrenOfStyle:(id)arg0 ;
-(id)firstCascadedStylePassingTest:(id)arg0 ;
-(id)firstUnidentifiedRootStyleOfClass:(Class)arg0 withOverridePropertyMap:(id)arg1 ;
-(id)identifiedStylesOfClass:(Class)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 canCullStyles:(BOOL)arg1 ;
-(id)namedStylesOfClass:(Class)arg0 ;
-(id)pVariationOfStyle:(id)arg0 propertyMap:(id)arg1 matchStyles:(id)arg2 context:(id)arg3 ;
// -(id)p_stylesPassingTest:(id)arg0 cascade:(unk)arg1  ;
-(id)packageLocator;
-(id)repairOrReplaceErrantStyle:(id)arg0 ;
-(id)styleWithIdentifier:(id)arg0 ;
-(id)styleWithIdentifier:(id)arg0 componentMask:(NSUInteger)arg1 ;
-(id)styleWithUUIDIfAvailable:(id)arg0 ;
-(id)stylesOfClass:(Class)arg0 ;
-(id)stylesPassingTest:(id)arg0 ;
-(id)stylesWithName:(id)arg0 ;
-(id)unusedStyleIdentifierWithPackageString:(id)arg0 styleDescriptor:(id)arg1 contentTag:(id)arg2 ;
-(id)variationOfStyle:(id)arg0 exactPropertyMap:(id)arg1 ;
-(id)variationOfStyle:(id)arg0 propertyMap:(id)arg1 ;
-(id)variationOfStyle:(id)arg0 propertyMap:(id)arg1 context:(id)arg2 ;
-(id)variationOfStyle:(id)arg0 propertyMap:(id)arg1 matchStyles:(id)arg2 context:(id)arg3 ;
-(id)variationOfStyleMatchingStyle:(id)arg0 withNewParentStyle:(id)arg1 ;
-(unsigned int)delayedArchivingPriority;
-(void)addStyle:(id)arg0 ;
-(void)addStyle:(id)arg0 withIdentifier:(id)arg1 ;
-(void)addStyle:(id)arg0 withParent:(id)arg1 ;
-(void)addStyle:(id)arg0 withParent:(id)arg1 identifier:(id)arg2 ;
-(void)addStyle:(id)arg0 withParent:(id)arg1 identifier:(id)arg2 shouldDoDOLC:(BOOL)arg3 ;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg0 ;
-(void)enumerateCascadedStylesUsingBlock:(id)arg0 ;
-(void)enumerateStylesUsingBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveAllStylesToStylesheet:(id)arg0 stripIdentifiers:(BOOL)arg1 ;
-(void)moveStyle:(id)arg0 toStylesheet:(id)arg1 stripIdentifiers:(BOOL)arg2 overwriteIdentifiers:(BOOL)arg3 ;
-(void)p_addStyle:(id)arg0 withParent:(id)arg1 identifier:(id)arg2 ;
-(void)p_addStyle:(id)arg0 withParent:(id)arg1 identifier:(id)arg2 shouldDoDOLC:(BOOL)arg3 ;
-(void)p_addStyleToParentChildren:(id)arg0 ;
-(void)p_removeStyle:(id)arg0 ;
-(void)p_removeStyleFromParentChildren:(id)arg0 ;
-(void)p_setIdentifier:(id)arg0 ofStyle:(id)arg1 ;
-(void)removeStyle:(id)arg0 ;
-(void)saveStyles:(id)arg0 toArchiver:(id)arg1 ;
-(void)saveStylesToMessage:(*void)arg0 archiver:(id)arg1 versions:(*id)arg2 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveVersionedStylesToMessage:(*void)arg0 archiver:(id)arg1 targetVersion:(NSUInteger)arg2 ;
-(void)setIdentifier:(id)arg0 ofStyle:(id)arg1 ;
-(void)style:(id)arg0 didChangeUUIDToValue:(id)arg1 fromValue:(id)arg2 ;
-(void)unlockStylesheetForDurationOfBlock:(id)arg0 ;


@end


#endif