// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVIEWRESOURCESPRELOADINGCONTROLLER_H
#define PXSTORYVIEWRESOURCESPRELOADINGCONTROLLER_H

@class NSMapTable;
@protocol PXStoryDiagnosticHUDContentProvider;


#import "PXStoryController.h"
#import "PXStoryResourcesPreloadingCoordinator.h"
#import "PXStoryViewModel.h"

@interface PXStoryViewResourcesPreloadingController : PXStoryController <PXStoryDiagnosticHUDContentProvider>



@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) NSMapTable *resourcesPreloadingControllers; // ivar: _resourcesPreloadingControllers
@property (readonly, nonatomic) PXStoryResourcesPreloadingCoordinator *resourcesPreloadingCoordinator; // ivar: _resourcesPreloadingCoordinator
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)resourcesPreloadingControllerForModel:(id)arg0 ;
-(void)_invalidateResourcesPreloadingControllers;
-(void)_updateResourcesPreloadingControllers;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;


@end


#endif