// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXELEMENTGROUP_H
#define AXELEMENTGROUP_H

@class NSArray, NSString, NSHashTable;
@protocol AXGroupable, AXElementGroupGenerator;


#import "AXElement.h"
#import "AXElementGroup.h"

@interface AXElementGroup : NSArray <AXGroupable>

 {
    NSArray *_elementStore;
}


@property (readonly, nonatomic) BOOL allowsChangingExistingGroupingOfContents;
@property (readonly, nonatomic) BOOL allowsVisualGroupingOfChildren;
@property (readonly, nonatomic) BOOL canBeGroupedWithOtherGroupables;
@property (readonly, nonatomic) BOOL canBeReplacedByChildren;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXElement *elementCommunity; // ivar: _elementCommunity
@property (readonly, nonatomic) CGRect frame;
@property (weak, nonatomic) NSObject<AXElementGroupGenerator> *generator; // ivar: _generator
@property (retain, nonatomic) NSHashTable *groupObservers; // ivar: _groupObservers
@property (nonatomic) NSUInteger groupTraits; // ivar: _groupTraits
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger numberOfElements;
@property (nonatomic) AXElementGroup *parentGroup; // ivar: _parentGroup
@property (nonatomic, getter=isRootGroup) BOOL rootGroup; // ivar: _rootGroup
@property (readonly, nonatomic) BOOL shouldBeUngrouped;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger userDefinedScanningBehaviorTraits; // ivar: _userDefinedScanningBehaviorTraits


+(id)groupWithElements:(id)arg0 ;
+(id)groupWithElements:(id)arg0 label:(id)arg1 ;
+(id)groupWithGenerator:(id)arg0 ;
-(BOOL)containsNativeFocusElement;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)isKeyboardContainer;
-(BOOL)isKeyboardRow;
-(NSUInteger)count;
-(id)_debugBriefDescription;
-(id)_debugFullDescriptionWithIndent:(id)arg0 ;
-(id)_leafAXElementWithPosition:(NSInteger)arg0 ;
-(id)_siblingOfChild:(id)arg0 inDirection:(BOOL)arg1 didWrap:(*BOOL)arg2 ;
-(id)ancestorPassingTest:(id)arg0 ;
-(id)bottomMostLeafAXElement;
-(id)childrenPassingTest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugFullDescription;
-(id)descendantWithNativeFocus;
-(id)descendantsPassingTest:(id)arg0 ;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)firstChild;
-(id)firstChildMatchingItem:(id)arg0 ;
-(id)firstChildPassingTest:(id)arg0 ;
-(id)firstDescendantMatchingItem:(id)arg0 ;
-(id)firstDescendantPassingTest:(id)arg0 ;
-(id)firstLeafDescendant;
-(id)groupByAppendingGroupable:(id)arg0 ;
-(id)groupByPrependingGroupable:(id)arg0 ;
-(id)groupByRemovingGroupable:(id)arg0 ;
-(id)groupByReplacingGroupable:(id)arg0 withGroupable:(id)arg1 ;
-(id)highestAncestorGroup;
-(id)initWithElements:(id)arg0 label:(id)arg1 ;
-(id)initWithGenerator:(id)arg0 ;
-(id)keyboardContainer;
-(id)keyboardContainerRows;
-(id)keyboardRow;
-(id)lastChild;
-(id)leftMostLeafAXElement;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)nextSiblingOfChild:(id)arg0 didWrap:(*BOOL)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)previousSiblingOfChild:(id)arg0 didWrap:(*BOOL)arg1 ;
-(id)rightMostLeafAXElement;
-(id)topMostLeafAXElement;
-(void)_commonInitWithElements:(id)arg0 label:(id)arg1 generator:(id)arg2 ;
-(void)_generateGroupsIfNeeded;
-(void)_notifyGroupObserversDidTransferStateToGroup:(id)arg0 ;
-(void)_notifyGroupObserversWillTransferStateToGroup:(id)arg0 ;
-(void)_transferStateToGroup:(id)arg0 ;
-(void)dealloc;
-(void)enumerateLeafDescendantsUsingBlock:(id)arg0 ;
-(void)registerGroupObserver:(id)arg0 ;
-(void)unregisterAllGroupObservers;
-(void)unregisterGroupObserver:(id)arg0 ;


@end


#endif