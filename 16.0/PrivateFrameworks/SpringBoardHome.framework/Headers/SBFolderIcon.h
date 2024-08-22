// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFOLDERICON_H
#define SBFOLDERICON_H

@class NSHashTable, NSString;
@protocol SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver;


#import "SBIcon.h"
#import "SBFolder.h"

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver>

 {
    NSHashTable *_nodeObservers;
    NSInteger _progressState;
    CGFloat _progressPercent;
    *__CFRunLoopObserver _updateIconRunLoopObserver;
    BOOL _delayedIconUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBFolder *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasIconImage;
-(BOOL)canBeAddedToMultiItemDrag;
-(BOOL)containsNodeIdentifier:(id)arg0 ;
-(BOOL)isFolderIcon;
-(BOOL)isProgressPaused;
-(CGFloat)progressPercent;
-(Class)iconImageViewClassForLocation:(id)arg0 ;
-(NSInteger)progressState;
-(NSUInteger)gridCellIndexForIconIndex:(NSUInteger)arg0 ;
-(NSUInteger)listIndexForContainedIcon:(id)arg0 ;
-(id)badgeNumberOrString;
-(id)containedNodeIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayNameForLocation:(id)arg0 ;
-(id)generateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)genericIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)iconAtListIndex:(NSUInteger)arg0 iconIndex:(NSUInteger)arg1 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg0 prefixPath:(id)arg1 ;
-(id)initWithFolder:(id)arg0 ;
-(id)initWithFolderIcon:(id)arg0 copyFolder:(BOOL)arg1 ;
-(id)leafIconsWithBadgesSortedByImportance;
-(id)nodeDescriptionWithPrefix:(id)arg0 ;
-(id)nodeIdentifier;
-(id)nodesAlongIndexPath:(id)arg0 consumedIndexes:(NSUInteger)arg1 ;
-(id)rootFolder;
-(void)_adjustForIconsAdded:(id)arg0 removed:(id)arg1 ;
-(void)_containedIconAccessoriesDidUpdate:(id)arg0 ;
-(void)_containedIconImageChanged:(id)arg0 ;
-(void)_containedIconLaunchEnabledDidUpdate:(id)arg0 ;
-(void)_performDelayedIconUpdates;
-(void)_updateBadgeValue;
-(void)_updateProgress;
-(void)addNodeObserver:(id)arg0 ;
-(void)dealloc;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)folder:(id)arg0 didRemoveLists:(id)arg1 atIndexes:(id)arg2 ;
-(void)folder:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)iconAccessoriesDidUpdate:(id)arg0 ;
-(void)iconImageDidUpdate:(id)arg0 ;
-(void)iconLaunchEnabledDidChange:(id)arg0 ;
-(void)invalidateUpdateIconRunLoopObserver;
-(void)localeChanged;
-(void)node:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)node:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)nodeDidMoveContainedNodes:(id)arg0 ;
-(void)noteContainedIcon:(id)arg0 replacedIcon:(id)arg1 ;
-(void)noteContainedIconsAdded:(id)arg0 removed:(id)arg1 ;
-(void)removeNodeObserver:(id)arg0 ;
-(void)rootFolderDelegateDidChange:(id)arg0 ;
-(void)scheduleUpdateIconRunLoopObserver;
-(void)updateLabel;


@end


#endif