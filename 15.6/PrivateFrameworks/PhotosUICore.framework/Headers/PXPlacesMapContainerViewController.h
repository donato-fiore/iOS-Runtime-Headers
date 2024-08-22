// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESMAPCONTAINERVIEWCONTROLLER_H
#define PXPLACESMAPCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, UISegmentedControl;
@protocol PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate;


#import "PXProgrammaticNavigationDestination.h"
#import "PXPlacesMapFetchResultViewController.h"

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate>

 {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXPlacesMapFetchResultViewController *fetchResultViewController; // ivar: _fetchResultViewController
@property (nonatomic) BOOL gridControllerEditing; // ivar: _gridControllerEditing
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger previousNavigationBarSegmentedControlSelectedIndex; // ivar: _previousNavigationBarSegmentedControlSelectedIndex
@property (retain, nonatomic) UISegmentedControl *subviewControl; // ivar: _subviewControl
@property (readonly) Class superclass;


-(BOOL)pu_shouldOptOutFromChromelessBars;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)init;
-(id)px_navigationDestination;
-(void)_resetNavigationItem;
-(void)_updateShouldOptOutFromChromelessBars;
-(void)loadView;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setNavigationBarButtons:(id)arg0 ;
-(void)setToolbarButtons:(id)arg0 ;
-(void)subviewControlChanged:(id)arg0 ;
-(void)viewController:(id)arg0 didUpdateBarsAnimated:(BOOL)arg1 isSelecting:(BOOL)arg2 ;
-(void)viewControllerDidUpdateNavigationItemAppearance:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif