// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGLOBALFOOTERVIEW_H
#define PXPHOTOSGLOBALFOOTERVIEW_H

@class UICollectionReusableView, UIView, UILabel, UITextView, UIProgressView, NSString;
@protocol UITextViewDelegate, PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate;


#import "PXFooterAnimatedIconView.h"
#import "PXGradientView.h"
#import "PXFooterViewModel.h"

@interface PXPhotosGlobalFooterView : UICollectionReusableView <UITextViewDelegate, PXChangeObserver>

 {
    UIView *_accessoryView;
    UIView *_topAccessoryView;
    UIView *_filterView;
    BOOL _hasAnimatedIconView;
    PXFooterAnimatedIconView *_animatedIconView;
    PXGradientView *_backgroundView;
    UILabel *_titleLabel;
    UITextView *_subtitle1TextView;
    UILabel *_subtitle2Label;
    UIProgressView *_progressView;
    BOOL _isPresentingAlert;
    ? _delegateRespondsTo;
    BOOL _isPerformingChanges;
}


@property (readonly, nonatomic) CGFloat currentHeight; // ivar: _currentHeight
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosGlobalFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPhotosGlobalFooterViewLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (readonly, nonatomic) BOOL needsWorkaroundFor53118165; // ivar: _needsWorkaroundFor53118165
@property (readonly) Class superclass;
@property (retain, nonatomic) PXFooterViewModel *viewModel; // ivar: _viewModel


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_photoCollectionGlobalFooterSubtitleTextViewAttributesDisabled:(BOOL)arg0 ;
-(id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Color;
-(id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Font;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animatedIconCrossedGridCycleBoundary;
-(void)_configurePhotoCollectionGlobalFooterLabel:(id)arg0 withFont:(id)arg1 textColor:(id)arg2 ;
-(void)_configurePhotoCollectionGlobalFooterProgressView:(id)arg0 paused:(BOOL)arg1 ;
-(void)_configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg0 ;
-(void)_configurePhotoCollectionGlobalFooterSubtitleTextView:(id)arg0 ;
-(void)_configurePhotoCollectionGlobalFooterTitleLabel:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateAccessory;
-(void)_updateAnimatedIcon;
-(void)_updateFilterView;
-(void)_updateProgressAnimated:(BOOL)arg0 ;
-(void)_updateSubtitle1;
-(void)_updateSubtitle2;
-(void)_updateTitle;
-(void)_updateTopAccessory;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif