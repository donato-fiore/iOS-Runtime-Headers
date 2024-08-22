// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDASHBOARDCAMERAITEMMODULECONTROLLER_H
#define HUDASHBOARDCAMERAITEMMODULECONTROLLER_H

@class NSString, NSMapTable;
@protocol HUCameraControllerDelegate, HUItemModuleItemPresenting;


#import "HUItemModuleController.h"
#import "HUCameraController.h"

@interface HUDashboardCameraItemModuleController : HUItemModuleController <HUCameraControllerDelegate, HUItemModuleItemPresenting>



@property (retain, nonatomic) HUCameraController *cameraController; // ivar: _cameraController
@property (nonatomic) NSInteger cameraPresentationStyle; // ivar: _cameraPresentationStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *mapTable; // ivar: _mapTable
@property (readonly) Class superclass;


-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_cameraItemFor:(id)arg0 ;
-(id)_cellLayoutOptions;
-(id)_detailsViewControllerForCameraItem:(id)arg0 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg0 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg0 cameraClip:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg0 withConfiguration:(id)arg1 ;
-(id)_sourceViewForPresentingCameraItem:(id)arg0 ;
-(id)detailsViewControllerForCameraItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 cameraPresentationStyle:(NSInteger)arg1 ;
-(id)presentCameraPlayerViewControllerForHomeKitObject:(id)arg0 cameraClip:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentCameraPlayerViewControllerForHomeKitObject:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentItem:(id)arg0 destination:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(id)targetViewForDismissingCameraProfile:(id)arg0 ;
-(void)_logInteractionEventOfType:(NSUInteger)arg0 withItem:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didDismissCameraController:(id)arg0 forProfile:(id)arg1 ;
-(void)disableCameraSnapshotsForCells:(id)arg0 ;
-(void)enableCameraSnapshotsForCells:(id)arg0 ;


@end


#endif