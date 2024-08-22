// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORYVIEW_H
#define PXMEMORYVIEW_H

@class UIView, NSString;
@protocol PXChangeObserver, PXUIViewControllerTransitionEndPoint, PXMemoryViewPresentationDelegate;


#import "PXDisplayAssetUIView.h"
#import "PXTitleSubtitleUILabel.h"
#import "PXMemoryViewModel.h"

@interface PXMemoryView : UIView <PXChangeObserver, PXUIViewControllerTransitionEndPoint>

 {
    ? _updateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXDisplayAssetUIView *displayAssetView; // ivar: _displayAssetView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (weak, nonatomic) NSObject<PXMemoryViewPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTitleSubtitleUILabel *titleSubtitleLabel; // ivar: _titleSubtitleLabel
@property (retain, nonatomic) PXMemoryViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(struct CGRect )_performLayoutInRect:(struct CGRect )arg0 applyToSubviews:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didTap:(id)arg0 ;
-(void)_updateHighlightedIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateKeyAssetIfNeeded;
-(void)_updateSpecIfNeeded;
-(void)_updateTitleSubtitleIfNeeded;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif