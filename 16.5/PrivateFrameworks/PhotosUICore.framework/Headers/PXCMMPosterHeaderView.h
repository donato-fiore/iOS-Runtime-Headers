// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMPOSTERHEADERVIEW_H
#define PXCMMPOSTERHEADERVIEW_H

@class UIView, UILabel, UIImageView, NSString;
@protocol PXChangeObserver;


#import "PXCMMPosterHeaderViewSpec.h"
#import "PXCMMImageView.h"
#import "PXGradientView.h"
#import "PXCMMPosterHeaderViewModel.h"

@interface PXCMMPosterHeaderView : UIView <PXChangeObserver>

 {
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    UIImageView *_statusCheckmark;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel; // ivar: _viewModel


+(CGFloat)preferredHeightForWidth:(CGFloat)arg0 traitCollection:(id)arg1 screen:(id)arg2 ;
+(void)preheatSharedValuesForPresentationStyle:(NSInteger)arg0 ;
-(BOOL)test_showStatusCheckmark;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPresentationStyle:(NSInteger)arg0 ;
-(id)test_statusString;
-(id)test_subtitle;
-(id)test_title;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_performLayoutWithSize:(struct CGSize )arg0 ;
-(void)_updateFonts;
-(void)_updateStatusString;
-(void)_updateSubtitle;
-(void)_updateTitle;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif