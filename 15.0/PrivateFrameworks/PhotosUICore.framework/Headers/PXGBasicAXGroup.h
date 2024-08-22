// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGBASICAXGROUP_H
#define PXGBASICAXGROUP_H

@class NSMutableDictionary, NSMutableIndexSet, NSIndexSet, NSArray, NSString, UIView;
@protocol PXUIScrollViewControllerFocusItemProvider, UIFocusEnvironment, PXGAXGroup, PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder, UIFocusItemContainer;

#import <Foundation/Foundation.h>

#import "PXGBasicAXGroup.h"
#import "PXGLayout.h"

@interface PXGBasicAXGroup : NSObject <PXUIScrollViewControllerFocusItemProvider, UIFocusEnvironment, PXGAXGroup>

 {
    ? _updateFlags;
    NSInteger _version;
    NSMutableDictionary *_mutableIndexesToSubgroups;
    NSMutableDictionary *_mutableSpritesToLeafs;
    NSMutableIndexSet *_requiredLeafIndexesToLoad;
    NSIndexSet *_previouslySelectedIndexes;
    PXGBasicAXGroup *_axParent;
}


@property (nonatomic) CGRect axFrame; // ivar: _axFrame
@property (weak, nonatomic) NSObject<PXGAXGroupSource> *axGroupSource; // ivar: _axGroupSource
@property (weak, nonatomic) NSObject<PXGAXInfoSource> *axInfoSource; // ivar: _axInfoSource
@property (readonly, nonatomic) BOOL axIsSelected;
@property (nonatomic) BOOL axIsVisible; // ivar: _axIsVisible
@property (readonly, nonatomic) NSArray *axLeafs;
@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: _axNextResponder
@property (weak, nonatomic) PXGBasicAXGroup *axParent;
@property (nonatomic) NSInteger axRole; // ivar: _axRole
@property (readonly, weak, nonatomic) PXGBasicAXGroup *axRootParent;
@property (readonly, weak, nonatomic) PXGBasicAXGroup *axScrollParent;
@property (readonly, nonatomic) NSArray *axSubgroups;
@property (readonly, nonatomic) PXGLayout *containingLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger leafFeatures; // ivar: _leafFeatures
@property (readonly, nonatomic) NSIndexSet *loadedLeafIndexes;
@property (readonly, nonatomic) NSIndexSet *loadedSubgroupIndexes;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) NSString *recursiveDescription;
@property (readonly, nonatomic) NSString *recursiveLeafDescription;
@property (nonatomic) NSInteger subgroupIndex; // ivar: _subgroupIndex
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)_leafAtSpriteIndex:(unsigned int)arg0 passesFilter:(NSUInteger)arg1 ;
-(BOOL)_leafAtSpriteIndexIsAccessible:(unsigned int)arg0 ;
-(BOOL)_leafAtSpriteIndexIsSelected:(unsigned int)arg0 ;
-(BOOL)_leafAtSpriteIndexIsVisible:(unsigned int)arg0 ;
-(BOOL)_loadOrUpdateLeafAtSpriteIndex:(unsigned int)arg0 ;
-(BOOL)_passesFilter:(NSUInteger)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)updateWithSelectedChildren:(id)arg0 ;
-(id)_leafAtSpriteIndex:(unsigned int)arg0 ;
-(id)_loadNeighboringLeafsAtSpriteIndex:(unsigned int)arg0 ;
-(id)_paddingForLevel:(NSInteger)arg0 ;
-(id)_removeLeafAtSpriteIndex:(unsigned int)arg0 ;
-(id)childrenPassingFilter:(NSUInteger)arg0 usingOptions:(NSUInteger)arg1 ;
-(id)focusItemsForScrollViewController:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(id)leafAtPoint:(struct CGPoint )arg0 ;
-(id)leafsInRect:(struct CGRect )arg0 usingOptions:(NSUInteger)arg1 ;
-(id)loadLeafAtSpriteIndexIfNeeded:(unsigned int)arg0 usingOptions:(NSUInteger)arg1 ;
-(id)loadedLeafAtSpriteIndex:(unsigned int)arg0 ;
-(id)loadedSubgroupAtIndex:(NSInteger)arg0 ;
-(unsigned int)_loadClosestLeafAtSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_addAllLeafsPassingFilter:(NSUInteger)arg0 intoArray:(id)arg1 ;
-(void)_addChildrenPassingFilter:(NSUInteger)arg0 usingOptions:(NSUInteger)arg1 intoArray:(id)arg2 ;
-(void)_addCurrentlyLoadedLeafsPassingFilter:(NSUInteger)arg0 intoArray:(id)arg1 ;
-(void)_addLeafsPassingFilter:(NSUInteger)arg0 usingOptions:(NSUInteger)arg1 intoArray:(id)arg2 ;
-(void)_addSubgroupsPassingFilter:(NSUInteger)arg0 intoArray:(id)arg1 ;
-(void)_appendDescription:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)_appendLeafDescription:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)_cleanUpSubgroupAfterUnloading:(id)arg0 ;
-(void)_leafsInRect:(struct CGRect )arg0 usingOptions:(NSUInteger)arg1 intoMutableArray:(id)arg2 ;
-(void)_selectedIndexesDidChange;
-(void)_setLeaf:(id)arg0 forSpriteIndex:(unsigned int)arg1 ;
-(void)_unloadSubgroupAtIndex:(NSInteger)arg0 shouldNotify:(BOOL)arg1 ;
-(void)_updateLayoutIfNeeded;
-(void)_updateLeafAtSpriteIndex:(unsigned int)arg0 ;
-(void)_updateLeafsIfNeeded;
-(void)_updateVersionIfNeeded;
-(void)_updateVisibilityIfNeeded;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)invalidateLayout;
-(void)invalidateLeafs;
-(void)invalidateVersion;
-(void)invalidateVisibility;
-(void)loadSubgroup:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)unloadAllLeafs;
-(void)unloadFromParent;
-(void)unloadLeafAtSpriteIndex:(unsigned int)arg0 usingOptions:(NSUInteger)arg1 ;
-(void)unloadSubgroupAtIndex:(NSInteger)arg0 ;
-(void)updateFocusIfNeeded;
-(void)updateIfNeeded;
-(void)updateLeafsWithChangeDetails:(id)arg0 ;
-(void)updateSubgroupsWithChangeDetails:(id)arg0 ;


@end


#endif