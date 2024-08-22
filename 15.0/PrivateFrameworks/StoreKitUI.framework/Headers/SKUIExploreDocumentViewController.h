// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIEXPLOREDOCUMENTVIEWCONTROLLER_H
#define SKUIEXPLOREDOCUMENTVIEWCONTROLLER_H

@class NSArray, UINavigationController, CLLocationManager, UISplitViewController, NSString;
@protocol CLLocationManagerDelegate, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIMetricsImpressionSession.h"
#import "SKUIContentInsetScrollView.h"
#import "SKUIExploreTemplateElement.h"
#import "SKUIStorePageSectionsViewController.h"

@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController>

 {
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    NSArray *_contentOffsets;
    SKUIContentInsetScrollView *_contentScrollView;
    SKUIExploreTemplateElement *_exploreTemplate;
    UINavigationController *_leftVC;
    CLLocationManager *_locationManager;
    UINavigationController *_navigationController;
    BOOL _nearMeEnabled;
    SKUIStorePageSectionsViewController *_rightVC;
    UISplitViewController *_splitVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)managesNavigationBarContents;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(BOOL)prefersNavigationBarHidden;
-(BOOL)splitViewController:(id)arg0 shouldHideViewController:(id)arg1 inOrientation:(NSInteger)arg2 ;
-(CGFloat)_leftColumnWidth;
-(id)_leftPageComponentsAtIndex:(NSInteger)arg0 ;
-(id)_newSectionsViewControllerAtIndex:(NSInteger)arg0 ;
-(id)_pageComponentsAtIndex:(NSInteger)arg0 ;
-(id)_rightPageComponents;
-(id)_rightVCColorScheme;
-(id)_rootNavigationTitle;
-(id)contentScrollView;
-(id)impressionableViewElements;
-(id)initWithTemplateElement:(id)arg0 ;
-(id)navigationBarTintColor;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_beginActiveImpressionsForImpressionableViewElements;
-(void)_contentInsetDidChange:(id)arg0 ;
-(void)_endAllPendingActiveImpression;
-(void)_getPageComponents:(*id)arg0 title:(*id)arg1 forViewControllerAtIndex:(NSInteger)arg2 ;
-(void)_reloadData;
-(void)_reloadLeftViewControllers;
-(void)_reloadRightViewController;
-(void)_reloadSelectionForViewController:(id)arg0 ;
-(void)_updateChildViewControllers;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentMediaQueriesDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)selectGenreListComponent:(id)arg0 ;
-(void)setClientContext:(id)arg0 ;
-(void)stackedBar:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif