// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTOGGLINGMEMORIESVIEWCONTROLLER_H
#define PXTOGGLINGMEMORIESVIEWCONTROLLER_H

@class UIViewController, NSString, UIBarButtonItem;
@protocol PXSectionedDataSourceManagerObserver, PXUIViewControllerZoomTransitionEndPoint;


#import "PXMemoriesFeedUIViewController.h"
#import "PXFetchResultBasedMemoriesDataSourceManager.h"
#import "PXMemoriesUIViewController.h"

@interface PXTogglingMemoriesViewController : UIViewController <PXSectionedDataSourceManagerObserver, PXUIViewControllerZoomTransitionEndPoint>



@property (readonly, nonatomic) NSString *currentBarButtonTitle;
@property (readonly, nonatomic) PXMemoriesFeedUIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager; // ivar: _favoriteMemoriesDataSourceManager
@property (retain, nonatomic) PXMemoriesUIViewController *favoriteMemoriesViewController; // ivar: _favoriteMemoriesViewController
@property (nonatomic) BOOL hasAnyMemories; // ivar: _hasAnyMemories
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) PXMemoriesFeedUIViewController *memoriesViewController; // ivar: _memoriesViewController
@property (nonatomic, setter=setShouldOnlyShowFavorites:) BOOL onlyShowFavorites; // ivar: _onlyShowFavorites
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIBarButtonItem *toggleButton; // ivar: _toggleButton


-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg0 ;
-(id)init;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg0 ;
-(id)regionOfInterestForTransition:(id)arg0 ;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg0 ;
-(void)_configureBarButton;
-(void)_configureMemoryViewControllers;
-(void)_configureTitle;
-(void)_configureTitleInset;
-(void)_reloadCurrentViewController;
-(void)_transitionFromViewController:(id)arg0 toViewController:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForInteractiveTransition:(id)arg0 ;
-(void)toggle;
-(void)viewDidLoad;


@end


#endif