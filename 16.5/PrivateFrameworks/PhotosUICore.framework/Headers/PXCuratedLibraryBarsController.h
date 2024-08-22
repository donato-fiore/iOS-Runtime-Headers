// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYBARSCONTROLLER_H
#define PXCURATEDLIBRARYBARSCONTROLLER_H

@class NSString, UILabel, UIButton;
@protocol PXChangeObserver, PXActionPerformerDelegate;


#import "PXBarsController.h"
#import "PXActionPerformer.h"
#import "PXBarAppearance.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate>



@property (retain, nonatomic) PXActionPerformer *activeActionPerformer; // ivar: _activeActionPerformer
@property (readonly, nonatomic) PXBarAppearance *barAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interbuttonSpacing; // ivar: _interbuttonSpacing
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer; // ivar: _lastActionPerformer
@property (readonly, nonatomic) UILabel *selectModeCaptionLabel; // ivar: _selectModeCaptionLabel
@property (readonly, nonatomic) UIButton *selectModeChevronButton; // ivar: _selectModeChevronButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(CGFloat)fixedSpaceForInterButtonSpacing;
-(CGFloat)progressToastPaddingForActionPerformer:(id)arg0 ;
-(id)_defaultToolbarItemIdentifiers;
-(id)_identifierForActionType:(id)arg0 ;
-(id)_selectionModeIdentifier;
-(id)createAssetActionManagerForAssetReference:(id)arg0 ;
-(id)createBarButtonItemForIdentifier:(id)arg0 placement:(NSUInteger)arg1 ;
-(id)curatedLibraryViewController;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)init;
-(id)initWithCuratedLibraryViewController:(id)arg0 viewModel:(id)arg1 ;
-(id)presentationEnvironmentForActionPerformer:(id)arg0 ;
-(id)progressToastViewControllerForActionPerformer:(id)arg0 ;
-(id)rightBarButtonItemIdentifiers;
-(id)toolbarItemIdentifiers;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_applyZoomLevel:(NSInteger)arg0 ;
-(void)_invalidateToolbarItems;
-(void)_updateSelectModeCaption;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)handleCancelBarButtonItem:(id)arg0 ;
-(void)handleSelectBarButtonItem:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)updateBars;


@end


#endif