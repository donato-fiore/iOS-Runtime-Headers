// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYZOOMLEVELCONTROL_H
#define PXCURATEDLIBRARYZOOMLEVELCONTROL_H

@class UIView, UIVisualEffectView, NSString, NSArray;
@protocol PXChangeObserver, PXCuratedLibraryZoomLevelControlDelegate;


#import "PXUpdater.h"
#import "_PXCuratedLibraryZoomLevelSegmentedControl.h"
#import "PXCuratedLibraryStyleGuide.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver>

 {
    PXUpdater *_updater;
    UIEdgeInsets _padding;
    *CGSize _textSizes;
    CGFloat _minimumInterTextSpacing;
    CGSize _intrinsicSize;
    UIVisualEffectView *_backgroundEffectView;
    _PXCuratedLibraryZoomLevelSegmentedControl *_segmentedControl;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCuratedLibraryZoomLevelControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *enabledZoomLevelIdentifiers; // ivar: _enabledZoomLevelIdentifiers
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger selectedZoomLevel; // ivar: _selectedZoomLevel
@property (nonatomic) NSInteger shrinkLevel; // ivar: _shrinkLevel
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // ivar: _styleGuide
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) NSArray *zoomLevelIdentifiers; // ivar: _zoomLevelIdentifiers


+(id)_allZoomLevelIdentifiers;
+(id)_enabledZoomLevelIdentifiersForViewModel:(id)arg0 ;
-(NSInteger)zoomLevelDisplayedBeforeZoomLevel:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithViewModel:(id)arg0 styleGuide:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleSegmentedControlAction:(id)arg0 ;
-(void)_invalidateSegmentedControl;
-(void)_updateSegmentedControl;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif