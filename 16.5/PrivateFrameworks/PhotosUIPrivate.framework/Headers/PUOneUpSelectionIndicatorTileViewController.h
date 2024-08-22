// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUONEUPSELECTIONINDICATORTILEVIEWCONTROLLER_H
#define PUONEUPSELECTIONINDICATORTILEVIEWCONTROLLER_H

@class UIButton, NSString;
@protocol PXChangeObserver, PUAssetViewModelChangeObserver;


#import "PUTileViewController.h"
#import "PUAssetActionManager.h"
#import "PUAssetReference.h"
#import "PUAssetViewModel.h"
#import "PUBrowsingViewModel.h"

@interface PUOneUpSelectionIndicatorTileViewController : PUTileViewController <PXChangeObserver, PUAssetViewModelChangeObserver>



@property (retain, nonatomic, setter=_setButton:) UIButton *_button; // ivar: __button
@property (nonatomic, getter=_isButtonVisible, setter=_setButtonVisible:) BOOL _buttonVisible; // ivar: __buttonVisible
@property (nonatomic, setter=_setNeedsUpdateButton:) BOOL _needsUpdateButton; // ivar: __needsUpdateButton
@property (nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) BOOL _performingChanges; // ivar: __performingChanges
@property (retain, nonatomic) PUAssetActionManager *actionManager; // ivar: _actionManager
@property (retain, nonatomic) PUAssetReference *assetReference; // ivar: _assetReference
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(id)_reviewActionManager;
-(id)_selectionManager;
-(void)_handleButton:(id)arg0 ;
-(void)_invalidateButton;
-(void)_setNeedsUpdate;
-(void)_updateButtonIfNeeded;
-(void)_updateIfNeeded;
-(void)becomeReusable;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif