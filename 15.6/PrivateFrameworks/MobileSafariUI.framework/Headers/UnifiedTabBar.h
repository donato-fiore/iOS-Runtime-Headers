// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNIFIEDTABBAR_H
#define UNIFIEDTABBAR_H

@class SFUnifiedTabBar, NSString, NSArray;
@protocol TabCollectionView, TabCollectionViewDelegate, _SFNavigationIntentHandling;


#import "ReorderingAutoscroller.h"

@interface UnifiedTabBar : SFUnifiedTabBar <TabCollectionView>



@property (readonly, nonatomic) BOOL canDragOntoActiveTab;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TabCollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidesInactiveTabs;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL lastDecelerationWasInterrupted;
@property (readonly, nonatomic) NSUInteger layoutAxes;
@property (weak) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropTransitionToItemView;
@property (readonly, nonatomic) BOOL supportsSystemDrag;


-(BOOL)canCloseItem:(id)arg0 ;
-(BOOL)shouldSpringLoadItem:(id)arg0 ;
-(NSUInteger)contextMenuOptionsForItem:(id)arg0 ;
-(id)itemAtPoint:(struct CGPoint )arg0 ;
-(id)newSearchField;
-(id)targetItemForDropAtPoint:(struct CGPoint )arg0 ;
-(id)targetedDragPreviewForDroppingItem:(id)arg0 ;
-(id)targetedDragPreviewForLiftingItem:(id)arg0 ;
-(id)targetedPreviewForDismissingMenuForItem:(id)arg0 ;
-(id)viewForItem:(id)arg0 ;
-(struct CGRect )frameForItem:(id)arg0 ;
-(void)activateItem:(id)arg0 ;
-(void)closeItem:(id)arg0 ;
-(void)didEndShowingContextMenuForItem:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)performDropWithNavigationIntent:(id)arg0 ;
-(void)willBeginShowingContextMenuForItem:(id)arg0 ;


@end


#endif