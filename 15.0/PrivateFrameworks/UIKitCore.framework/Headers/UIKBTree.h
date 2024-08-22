// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBTREE_H
#define UIKBTREE_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIKBTree : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: cache
@property (retain, nonatomic) NSString *effectiveLayoutTag; // ivar: effectiveLayoutTag
@property (nonatomic) BOOL isFloating; // ivar: _isFloating
@property (retain, nonatomic) NSString *layoutTag; // ivar: layoutTag
@property (retain, nonatomic) NSString *name; // ivar: name
@property (retain, nonatomic) NSMutableDictionary *properties; // ivar: properties
@property (retain, nonatomic) NSMutableArray *subtrees; // ivar: subtrees
@property (nonatomic) int type; // ivar: type


+(BOOL)shouldSkipCacheString:(id)arg0 ;
+(BOOL)typeIsPersistent:(int)arg0 ;
+(id)key;
+(id)keyboard;
+(id)mergeStringForKeyName:(id)arg0 ;
+(id)shapesForControlKeyShapes:(id)arg0 options:(int)arg1 ;
+(id)stringForType:(int)arg0 ;
+(id)treeOfType:(int)arg0 ;
+(id)uniqueName;
-(BOOL)_needsScaling;
-(BOOL)_renderAsStringKey;
-(BOOL)addMessagesWriteboardKeyOrRomanSwitch:(BOOL)arg0 ;
-(BOOL)addMessagesWriteboardKeyOrRomanSwitchIfDismissKey:(BOOL)arg0 ;
-(BOOL)addMessagesWriteboardKeyOrRomanSwitchIfNoDismissKey:(BOOL)arg0 ;
-(BOOL)allowRetestAfterCommittingDownActions;
-(BOOL)allowsDelayedTapForContinuousPathDisambiguation;
-(BOOL)allowsStartingContinuousPath;
-(BOOL)avoidAutoDeactivation;
-(BOOL)avoidsLanguageIndicator;
-(BOOL)behavesAsShiftKey;
-(BOOL)boolForProperty:(id)arg0 ;
-(BOOL)containsDividerVariant;
-(BOOL)containsKeyThatIgnoresHandBias;
-(BOOL)diacriticForwardCompose;
-(BOOL)disabled;
-(BOOL)disablesEdgeSwipe;
-(BOOL)dynamicDisplayTypeHint;
-(BOOL)forceMultitap;
-(BOOL)ghost;
-(BOOL)hasLayoutTag:(id)arg0 ;
-(BOOL)isAlphabeticPlane;
-(BOOL)isDuplicateOfTree:(id)arg0 ;
-(BOOL)isEqualToTree:(id)arg0 ;
-(BOOL)isExemptFromInputManagerHitTesting;
-(BOOL)isExemptFromInputManagerLayout;
-(BOOL)isGenerated;
-(BOOL)isHashed;
-(BOOL)isKanaPlane;
-(BOOL)isLeafType;
-(BOOL)isLetters;
-(BOOL)isRightToLeftSensitive;
-(BOOL)isSameAsTree:(id)arg0 ;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isShiftKeyplane;
-(BOOL)isSplit;
-(BOOL)looksExactlyLikeShiftAlternate;
-(BOOL)looksLike:(id)arg0 ;
-(BOOL)looksLikeShiftAlternate;
-(BOOL)mergeAsMoreKey;
-(BOOL)modifiesKeyplane;
-(BOOL)noLanguageIndicator;
-(BOOL)notUseCandidateSelection;
-(BOOL)preventPaddle;
-(BOOL)renderKeyInKeyplane:(id)arg0 ;
-(BOOL)setObject:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)shouldCacheKey;
-(BOOL)shouldSkipCandidateSelection;
-(BOOL)shouldSkipCandidateSelectionForVariants;
-(BOOL)shouldSuppressDragRetest;
-(BOOL)supportsContinuousPath;
-(BOOL)supportsType:(NSInteger)arg0 ;
-(BOOL)usesAdaptiveKeys;
-(BOOL)usesAutoShift;
-(BOOL)usesKeyCharging;
-(BOOL)visible;
-(CGFloat)primaryKeylayoutOffset;
-(CGFloat)primaryKeylayoutWidthRatio;
-(CGFloat)resizingOffset;
-(NSInteger)_keyCountOnNamedRow:(id)arg0 ;
-(NSInteger)flickDirection;
-(NSInteger)highlightedVariantIndex;
-(NSInteger)intForProperty:(id)arg0 ;
-(NSInteger)nativeIdiom;
-(NSInteger)popupDirection;
-(NSInteger)selectedVariantIndex;
-(NSInteger)textAlignment;
-(NSUInteger)clipCorners;
-(NSUInteger)groupNeighbor;
-(NSUInteger)numberOfRows;
-(id)_cacheRootNameForKey:(id)arg0 ;
-(id)_horizontallyCoincidentKeysWithKey:(id)arg0 ;
-(id)activeGeometriesList;
-(id)activeShapesFromOutputShapes:(id)arg0 inputShapes:(id)arg1 ;
-(id)alternateKeyplaneName;
-(id)attributeSet:(BOOL)arg0 ;
-(id)autolocalizedKeyCacheIterator;
-(id)cachedKeysByKeyName:(id)arg0 ;
-(id)componentName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayString;
-(id)findLeftMoreKey;
-(id)firstCachedKeyWithName:(id)arg0 ;
-(id)firstKeyplaneSwitchKey;
-(id)fullRepresentedString;
-(id)geometries;
-(id)geometriesList;
-(id)geometriesOrderedByPosition;
-(id)geometry;
-(id)geometrySet:(BOOL)arg0 ;
-(id)gestureKey;
-(id)gestureKeyplaneName;
-(id)highlightedVariantsList;
-(id)initWithType:(int)arg0 ;
-(id)initWithType:(int)arg0 withName:(id)arg1 withProperties:(id)arg2 withSubtrees:(id)arg3 withCache:(id)arg4 ;
-(id)keyAttributes;
-(id)keyForString:(id)arg0 ;
-(id)keySet;
-(id)keyplaneForKey:(id)arg0 ;
-(id)keyplaneSwitchKeys;
-(id)keyplaneSwitchKeysWithoutCurrentKeyplane:(id)arg0 ;
-(id)keys;
-(id)keysByKeyName:(id)arg0 ;
-(id)keysExcludingEmptyKeys;
-(id)keysForDisplayRowAtIndex:(NSUInteger)arg0 ;
-(id)keysForMergeConditions;
-(id)keysOrderedByPosition;
-(id)keysOrderedByPositionRTL;
-(id)keysOrderedByPositionWithoutZip;
-(id)keysWithString:(id)arg0 ;
-(id)keysetCanContainWriteboardKey;
-(id)layoutName;
-(id)listShapes;
-(id)localizationKey;
-(id)mergeKeyNames:(id)arg0 ;
-(id)numberForProperty:(id)arg0 ;
-(id)objectForProperty:(id)arg0 ;
-(id)overrideDisplayString;
-(id)parentKey;
-(id)recursiveDescription;
-(id)representedString;
-(id)rightSpaceKey;
-(id)scriptSwitchKey;
-(id)secondaryDisplayStrings;
-(id)secondaryRepresentedStrings;
-(id)selectedVariantIndices;
-(id)shape;
-(id)shapeFromFrame:(struct CGRect )arg0 leftPadding:(CGFloat)arg1 rightPadding:(CGFloat)arg2 ;
-(id)shapesForKeys:(id)arg0 ;
-(id)shiftAlternateKeyplaneName;
-(id)stringForProperty:(id)arg0 ;
-(id)subtreeWithName:(id)arg0 ;
-(id)subtreeWithName:(id)arg0 rows:(id)arg1 ;
-(id)subtreeWithType:(int)arg0 ;
-(id)subtreesWithProperty:(id)arg0 value:(id)arg1 ;
-(id)supplementaryKeyList;
-(id)unhashedName;
-(id)variantDisplayString;
-(id)variantPopupBias;
-(int)_variantType;
-(int)displayRowHint;
-(int)displayType;
-(int)displayTypeHint;
-(int)dragThreshold;
-(int)indexOfSubtree:(id)arg0 ;
-(int)interactionType;
-(int)rendering;
-(int)splitMode;
-(int)state;
-(int)variantType;
-(int)visualStyle;
-(struct ? )stylingFromVisualStyle;
-(struct ? )visualStyling;
-(struct ? )visualStylingForScreenTraits:(id)arg0 ;
-(struct CGPoint )navigationPointOfKey;
-(struct CGRect )_keyplaneFrame;
-(struct CGRect )_originalKeyplaneFrame;
-(struct CGRect )frame;
-(struct CGRect )frameForKeylayoutName:(id)arg0 ;
-(struct CGRect )keyUnionFrame;
-(struct CGRect )keyUnionFramePadded:(BOOL)arg0 ;
-(struct CGRect )keyUnionPaddedFrame;
-(struct CGRect )originalFrame;
-(struct CGRect )paddedFrame;
-(void)_addKeylayoutKeys:(id)arg0 ;
-(void)_mutateKeys:(id)arg0 scale:(CGFloat)arg1 withShapeOperation:(id)arg2 ;
-(void)addRomanSwitchToCachedKeyListWithShape:(id)arg0 rendering:(int)arg1 ;
-(void)addWriteboardKeyToCachedKeyListWithShape:(id)arg0 rendering:(int)arg1 ;
-(void)addkeyToCachedKeyList:(id)arg0 ;
-(void)cacheKey:(id)arg0 ;
-(void)cacheNativeIdiomIfNecessaryForScreenTraits:(id)arg0 ;
-(void)centerHorizontallyWhilePreservingLayoutWithKeys:(id)arg0 inRect:(struct CGRect )arg1 scale:(CGFloat)arg2 ;
-(void)centerKeyplaneInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 ;
-(void)centerKeys:(id)arg0 inRect:(struct CGRect )arg1 scale:(CGFloat)arg2 ;
-(void)centerVerticallyWhilePreservingLayoutWithKeys:(id)arg0 inRect:(struct CGRect )arg1 scale:(CGFloat)arg2 ;
-(void)centerWhilePreservingLayoutWithKeys:(id)arg0 inRect:(struct CGRect )arg1 scale:(CGFloat)arg2 ;
-(void)clearManualAddedKey;
-(void)clearTransientCaches;
-(void)dealloc;
-(void)elaborateLayoutWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)elaborateLayoutWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 origin:(struct CGPoint )arg2 ;
-(void)insertKey:(id)arg0 withFrame:(struct CGRect )arg1 andShiftKeys:(id)arg2 scale:(CGFloat)arg3 ;
-(void)insetKeys:(id)arg0 withInsets:(struct UIEdgeInsets )arg1 scale:(CGFloat)arg2 ;
-(void)mergeReturnKey:(id)arg0 withReturnKey:(id)arg1 ;
-(void)orderVariantKeys:(BOOL)arg0 ;
-(void)precacheLayoutName:(id)arg0 ;
-(void)removeKey:(id)arg0 ;
-(void)removeKey:(id)arg0 andShiftKeys:(id)arg1 scale:(CGFloat)arg2 ;
-(void)removeKeyFromAllCachedLists:(id)arg0 ;
-(void)removeKeyFromCachedKeyList:(id)arg0 ;
-(void)replaceKey:(id)arg0 withKey:(id)arg1 ;
-(void)repositionKeys:(id)arg0 withOffset:(struct CGPoint )arg1 scale:(CGFloat)arg2 ;
-(void)resizeKeys:(id)arg0 withOffset:(struct CGPoint )arg1 scale:(CGFloat)arg2 ;
-(void)scaleKeys:(id)arg0 withFactor:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(void)setActiveGeometriesList:(id)arg0 ;
-(void)setAttributes:(id)arg0 ;
-(void)setClipCorners:(NSUInteger)arg0 ;
-(void)setDisabled:(BOOL)arg0 ;
-(void)setDisplayRowHint:(int)arg0 ;
-(void)setDisplayString:(id)arg0 ;
-(void)setDisplayType:(int)arg0 ;
-(void)setDisplayTypeHint:(int)arg0 ;
-(void)setFlickDirection:(NSInteger)arg0 ;
-(void)setForceMultitap:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setGeometriesList:(id)arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)setGestureKey:(id)arg0 ;
-(void)setGhost:(BOOL)arg0 ;
-(void)setGroupNeighbor:(NSUInteger)arg0 ;
-(void)setHighlightedVariantsList:(id)arg0 ;
-(void)setInteractionType:(int)arg0 ;
-(void)setIsGenerated:(BOOL)arg0 ;
-(void)setLocalizationKey:(id)arg0 ;
-(void)setMergeAsMoreKey:(BOOL)arg0 ;
-(void)setOverrideDisplayString:(id)arg0 ;
-(void)setPaddedFrame:(struct CGRect )arg0 ;
-(void)setParentKey:(id)arg0 ;
-(void)setPopupDirection:(NSInteger)arg0 ;
-(void)setPreventPaddle:(BOOL)arg0 ;
-(void)setRendering:(int)arg0 ;
-(void)setRepresentedString:(id)arg0 ;
-(void)setResizingOffset:(CGFloat)arg0 ;
-(void)setSecondaryDisplayStrings:(id)arg0 ;
-(void)setSecondaryRepresentedStrings:(id)arg0 ;
-(void)setSelectedVariantIndex:(NSInteger)arg0 ;
-(void)setSelectedVariantIndices:(id)arg0 ;
-(void)setShape:(id)arg0 ;
-(void)setSplitMode:(int)arg0 ;
-(void)setState:(int)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)setVariantPopupBias:(id)arg0 ;
-(void)setVariantType:(int)arg0 ;
-(void)setVisible:(BOOL)arg0 ;
-(void)setVisualStyle:(int)arg0 ;
-(void)setVisualStyling:(struct ? )arg0 ;
-(void)shiftRowAndResizeLeadingControlKey:(id)arg0 toSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(void)subsumeDisappearingKeyName:(id)arg0 intoKeyName:(id)arg1 factors:(id)arg2 ;
-(void)updateDictationKeyOnNumberPads:(BOOL)arg0 ;
-(void)updateFlickKeycapOnKeys;
-(void)updateMoreAndInternationalKeysWithOptions:(int)arg0 ;
-(void)updateVariantTypeForActions:(unsigned int)arg0 ;
-(void)zipAttributes;
-(void)zipGeometries:(BOOL)arg0 attributes:(BOOL)arg1 ;
-(void)zipGeometrySet;
-(void)zipOnlyGeometrySet;


@end


#endif