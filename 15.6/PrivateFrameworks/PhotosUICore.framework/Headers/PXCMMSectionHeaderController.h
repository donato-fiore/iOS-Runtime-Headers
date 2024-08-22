// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMSECTIONHEADERCONTROLLER_H
#define PXCMMSECTIONHEADERCONTROLLER_H

@class UIView, UIButton, UILabel, NSString;
@protocol PXChangeObserver, PXUIViewBasicTile, PXReusableObject, PXAssetImportStatusManager;

#import <Foundation/Foundation.h>

#import "PXCMMViewModel.h"
#import "PXMomentShareStatusPresentation.h"

@interface PXCMMSectionHeaderController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>

 {
    NSUInteger _activityType;
    PXCMMViewModel *_viewModel;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id<PXAssetImportStatusManager> *_importStatusManager;
    BOOL _isViewLoaded;
    UIView *_underlyingView;
    UIButton *_actionButton;
    UIButton *_secondaryButton;
    UILabel *_photosLabel;
}


@property (nonatomic, setter=_setActionButtonType:) NSInteger actionButtonType; // ivar: _actionButtonType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setSecondaryActionButtonType:) NSInteger secondaryActionButtonType; // ivar: _secondaryActionButtonType
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(id)_buttonLabelFont;
+(id)_photosLabelFont;
+(id)new;
-(BOOL)_wantsActionButtons;
-(id)init;
-(id)initWithActivityType:(NSUInteger)arg0 viewModel:(id)arg1 momentShareStatusPresentation:(id)arg2 importStatusManager:(id)arg3 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_deselectAllAssets;
-(void)_handleActionButtonTapped:(id)arg0 ;
-(void)_handleSecondaryButtonTapped:(id)arg0 ;
-(void)_layoutButtonWithSize:(struct CGSize )arg0 ;
-(void)_loadViewIfNeeded;
-(void)_selectAllAssets;
-(void)_updateActionButtons;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif