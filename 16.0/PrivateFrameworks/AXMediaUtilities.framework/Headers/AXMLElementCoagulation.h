// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMLELEMENTCOAGULATION_H
#define AXMLELEMENTCOAGULATION_H

@class NSArray, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface AXMLElementCoagulation : NSObject

@property (nonatomic) CGRect appFrame; // ivar: _appFrame
@property (nonatomic) NSInteger appOrientation; // ivar: _appOrientation
@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (retain, nonatomic) NSArray *clickableTextKeywords; // ivar: _clickableTextKeywords
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (nonatomic) BOOL isiPad; // ivar: _isiPad
@property (retain, nonatomic) NSRegularExpression *nonAlphaCharactersRegex; // ivar: _nonAlphaCharactersRegex
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale


+(id)sharedInstance;
-(BOOL)_allTabGroupsHaveSingleSubfeature:(id)arg0 ;
-(BOOL)_hasXOverlap:(struct CGRect )arg0 obj2:(struct CGRect )arg1 ;
-(BOOL)_hasYOverlap:(struct CGRect )arg0 obj2:(struct CGRect )arg1 ;
-(BOOL)_isInTopBar:(id)arg0 ;
-(BOOL)_shouldBeTabBar:(BOOL)arg0 groupedTabButtons:(id)arg1 ;
-(CGFloat)_getXOverlap:(struct CGRect )arg0 obj2:(struct CGRect )arg1 ;
-(CGFloat)_getYOverlap:(struct CGRect )arg0 obj2:(struct CGRect )arg1 ;
-(NSInteger)_compareX:(struct CGRect )arg0 frame2:(struct CGRect )arg1 ;
-(NSInteger)_compareY:(struct CGRect )arg0 frame2:(struct CGRect )arg1 ;
-(id)_applyCrossUITypeNMS:(id)arg0 ;
-(id)_applyHorizontalMirrorToFeatures:(id)arg0 ;
-(id)_compareArea:(id)arg0 ;
-(id)_compareForX:(id)arg0 ;
-(id)_compareForY:(id)arg0 ;
-(id)_createToggleGroup:(id)arg0 toGroup:(id)arg1 ;
-(id)_featuresByReorderingTwoRows:(id)arg0 minY:(CGFloat)arg1 maxY:(CGFloat)arg2 ;
-(id)_flattenFeatures:(id)arg0 ;
-(id)_getAXMLElementGroupsForFeatures:(id)arg0 ;
-(id)_getCandidateTabBarFeatures:(id)arg0 screenSize:(struct CGSize )arg1 ;
-(id)_getClickableTextButtons:(id)arg0 ;
-(id)_getClosestDetectionBelow:(id)arg0 target:(id)arg1 maxDistance:(NSInteger)arg2 ;
-(id)_getFeaturesForAXMLTabButtonGroups:(id)arg0 ;
-(id)_getFlattenedChildFeatures:(id)arg0 ;
-(id)_getGroupedPictureAndSubtitleFeature:(id)arg0 ;
-(id)_getGroupedSegmentedControlFeatures:(id)arg0 ;
-(id)_getGroupedTabBarFeatures:(id)arg0 ;
-(id)_getGroupedTextButtonFeatures:(id)arg0 ;
-(id)_getGroupedTextFeatures:(id)arg0 ;
-(id)_getGroupedTextFields:(id)arg0 ;
-(id)_getGroupedToggleCheckboxWithText:(id)arg0 ;
-(id)_getHorizontalSegmentationPointDict:(id)arg0 ;
-(id)_getTabGroupSubfeatureUIClassTypes:(id)arg0 ;
-(id)_getTopLevelFeatureGroups:(id)arg0 ;
-(id)_groupFeatures:(id)arg0 ;
-(id)_groupFeaturesByContainment:(id)arg0 ;
-(id)_groupSingleContainerAsButton:(id)arg0 featureToGroup:(id)arg1 ;
-(id)_mergeTopLeftButton:(id)arg0 ;
-(id)_removeExtraOCRAndIconFromTextField:(id)arg0 ;
-(id)_removeTextContainingOnlyToggles:(id)arg0 toggleCheckboxTypes:(id)arg1 ;
-(id)_reorderByXCut:(id)arg0 ;
-(id)_reorderByYCut:(id)arg0 ;
-(id)_reorderSimilarTopNeighbors:(id)arg0 ;
-(id)_reorderedTabsForSortedFeatures:(id)arg0 screenSize:(struct CGSize )arg1 ;
-(id)_repairTextInTabItems:(id)arg0 ;
-(id)_sortFeaturesReadingOrder:(id)arg0 ;
-(id)coagulateElements:(id)arg0 ;
-(id)init;
-(void)_improveFeatureFrames:(id)arg0 ;
-(void)_mergeFeatureIntoGroup:(id)arg0 feature:(id)arg1 ;
-(void)_removeFeatureFromGroup:(id)arg0 feature:(id)arg1 ;


@end


#endif