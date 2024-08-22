// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYSTYLECHROMECONTAINERLAYOUT_H
#define PXSTORYSTYLECHROMECONTAINERLAYOUT_H

@class NSSet, NSString;
@protocol PXChangeObserver;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXCArrayStore.h"
#import "PXStoryModel.h"
#import "PXStoryStyleManager.h"
#import "PXStoryViewModel.h"
#import "PXNumberAnimator.h"

@interface PXStoryStyleChromeContainerLayout : PXGAbsoluteCompositeLayout <PXChangeObserver>

 {
    ? _updateFlags;
    _NSRange _styleSublayoutRange;
    PXCArrayStore *_framesArrayStore;
}


@property (retain, nonatomic) NSSet *artworkPreloadingRecords; // ivar: _artworkPreloadingRecords
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *storyModel; // ivar: _storyModel
@property (retain, nonatomic) PXStoryStyleManager *styleManager; // ivar: _styleManager
@property (readonly) Class superclass;
@property (retain, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) PXNumberAnimator *visibilityAnimator; // ivar: _visibilityAnimator


-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(void)_invalidateResourcePreloading;
-(void)_invalidateStoryModel;
-(void)_invalidateStyleLayouts;
-(void)_invalidateStyleLayoutsContent;
-(void)_invalidateStyleManager;
-(void)_invalidateVisibilityAnimator;
-(void)_updateResourcePreloading;
-(void)_updateStoryModel;
-(void)_updateStyleLayouts;
-(void)_updateStyleLayoutsContent;
-(void)_updateStyleManager;
-(void)_updateVisibilityAnimator:(BOOL)arg0 ;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;


@end


#endif