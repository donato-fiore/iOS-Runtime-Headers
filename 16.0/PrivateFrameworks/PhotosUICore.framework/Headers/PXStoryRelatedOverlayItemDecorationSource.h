// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYRELATEDOVERLAYITEMDECORATIONSOURCE_H
#define PXSTORYRELATEDOVERLAYITEMDECORATIONSOURCE_H

@class NSString;
@protocol PXGSelectionDecorationSource;


#import "PXStoryController.h"
#import "PXStoryRelatedOverlayLayout.h"
#import "PXStoryViewModel.h"

@interface PXStoryRelatedOverlayItemDecorationSource : PXStoryController <PXGSelectionDecorationSource>

 {
    NSInteger _selectedIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) PXStoryRelatedOverlayLayout *decoratedLayout; // ivar: _decoratedLayout
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(NSInteger)overallSelectionOrderAtSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)selectionDecorationStyleInLayout:(id)arg0 ;
-(NSUInteger)selectionDecorationAdditionsInLayout:(id)arg0 ;
-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)selectedSpriteIndexesInLayout:(id)arg0 ;
-(void)_invalidateSelectedRelatedIndex;
-(void)_updateSelectedRelatedIndex;
-(void)configureUpdater:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif