// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMBANNERTILECONTROLLER_H
#define PXCMMBANNERTILECONTROLLER_H

@class NSArray, NSString, UIView;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject, PXUIViewBasicTile, PXAssetImportStatusManager, PXCMMBannerTileControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXCMMViewModel.h"
#import "PXMomentShareStatusPresentation.h"
#import "PXCMMPosterBannerView.h"
#import "PXPeopleSuggestionsDataSourceManager.h"

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject, PXUIViewBasicTile>

 {
    NSUInteger _activityType;
    NSUInteger _sourceType;
    PXCMMViewModel *_viewModel;
    id<PXAssetImportStatusManager> *_importStatusManager;
    NSArray *_localizedNames;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
}


@property (retain, nonatomic) PXCMMPosterBannerView *bannerView; // ivar: _bannerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMBannerTileControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // ivar: _peopleSuggestionsDataSourceManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(id)new;
-(id)init;
-(id)initWithActivityType:(NSUInteger)arg0 sourceType:(NSUInteger)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3 importStatusManager:(id)arg4 ;
-(void)_configureBannerViewActionButtonWithTitle:(id)arg0 ;
-(void)_updateBannerActionButton;
-(void)_updateContainsUnverifierPersons;
-(void)_updateCounts;
-(void)_updateLoadingPeopleSuggestions;
-(void)_updateLocalizedNamesByViewModel;
-(void)_updatePeopleSuggestionNames;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif