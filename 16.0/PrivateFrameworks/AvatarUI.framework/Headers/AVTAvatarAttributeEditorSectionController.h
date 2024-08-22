// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONCONTROLLER_H
#define AVTAVATARATTRIBUTEEDITORSECTIONCONTROLLER_H

@class NSString;
@protocol AVTAvatarAttributeEditorSectionController, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTTaskScheduler, AVTIndexBasedTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"
#import "AVTAvatarAttributeEditorSection.h"
#import "AVTTransitionCoordinator.h"

@interface AVTAvatarAttributeEditorSectionController : NSObject <AVTAvatarAttributeEditorSectionController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *renderingScheduler; // ivar: _renderingScheduler
@property (retain, nonatomic) AVTAvatarAttributeEditorSection *section; // ivar: _section
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<AVTIndexBasedTaskScheduler> *thumbnailScheduler; // ivar: _thumbnailScheduler
@property (retain, nonatomic) AVTTransitionCoordinator *transitionCoordinator; // ivar: _transitionCoordinator


+(BOOL)shouldHideLabelBackgroundInSection:(id)arg0 fittingWidth:(CGFloat)arg1 ;
+(BOOL)supportsSelection;
+(CGFloat)edgeLengthFittingWidth:(CGFloat)arg0 environment:(id)arg1 ;
+(CGFloat)maxLabelHeightInSection:(id)arg0 fittingWidth:(CGFloat)arg1 ;
+(CGFloat)requiredLabelSpaceForMaxLabelHeight:(CGFloat)arg0 cellEdgeLength:(CGFloat)arg1 sectionItemHeightRatio:(CGFloat)arg2 ;
+(struct CGSize )cellSizeForSectionItem:(id)arg0 inSection:(id)arg1 fittingWidth:(CGFloat)arg2 environment:(id)arg3 ;
+(struct UIEdgeInsets )edgeInsetsForSection:(id)arg0 fittingWidth:(CGFloat)arg1 environment:(id)arg2 ;
-(BOOL)evaluateDisplayCondition:(id)arg0 ;
-(NSInteger)numberOfItems;
-(NSUInteger)indexForItem:(id)arg0 ;
-(id)initWithThumbnailScheduler:(id)arg0 renderingScheduler:(id)arg1 environment:(id)arg2 ;
-(id)prefetchingSectionItemForIndex:(NSInteger)arg0 ;
-(id)viewForIndex:(NSInteger)arg0 ;
-(struct CGSize )sizeForFocusingItemAtIndex:(NSInteger)arg0 fittingSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeForItemAtIndex:(NSInteger)arg0 fittingSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )edgeInsetsFittingSize:(struct CGSize )arg0 ;
-(void)attributeSection:(id)arg0 didChangeValueForSectionItem:(id)arg1 ;
-(void)cell:(id)arg0 willDisplayAtIndex:(NSInteger)arg1 ;
-(void)didHighlightItemAtIndex:(NSInteger)arg0 cell:(id)arg1 completionBlock:(id)arg2 ;
-(void)didSelectItemAtIndex:(NSInteger)arg0 cell:(id)arg1 ;
-(void)didUnhighlightItemAtIndex:(NSInteger)arg0 cell:(id)arg1 completionBlock:(id)arg2 ;
-(void)invalidateLayoutForNewContainerSize:(struct CGSize )arg0 ;
-(void)resetToDefaultState;
-(void)updateCell:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)updateWithSection:(id)arg0 ;


@end


#endif