// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYVIEWLEGIBILITYOVERLAYLAYOUT_H
#define PXSTORYVIEWLEGIBILITYOVERLAYLAYOUT_H

@class NSNumber, NSString;
@protocol PXGSolidColorSource, PXChangeObserver;


#import "PXGLayout.h"
#import "PXStoryViewModel.h"

@interface PXStoryViewLegibilityOverlayLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver>

 {
    ? _updateFlags;
    unsigned int _solidDimmingSpriteIndex;
    unsigned int _topGradientDimmingSpriteIndex;
    unsigned int _bottomGradientDimmingSpriteIndex;
    unsigned short _gradientResizableCapInsetsIndex;
}


@property (retain, nonatomic) NSNumber *alphaOverride; // ivar: _alphaOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)axSpriteIndexes;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(void)_invalidateContent;
-(void)_updateContent;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;


@end


#endif