// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISEGMENTEDCONTROLVIEWELEMENTCONTROLLER_H
#define SKUISEGMENTEDCONTROLVIEWELEMENTCONTROLLER_H

@class UIBarButtonItem, NSString, UIViewController, UIView;
@protocol SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIMenuViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIMenuViewController.h"
#import "SKUIMenuPopoverController.h"
#import "SKUIFlexibleSegmentedControl.h"
#import "SKUIClientContext.h"
#import "SKUISegmentedControlViewElement.h"

@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIMenuViewControllerDelegate>

 {
    UIBarButtonItem *_menuSheetCancelButtonItem;
    SKUIMenuViewController *_menuSheetViewController;
    SKUIMenuPopoverController *_popoverMenuViewController;
    SKUIFlexibleSegmentedControl *_segmentedControl;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultMaximumNumberOfVisibleItems; // ivar: _defaultMaximumNumberOfVisibleItems
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredSegmentWidth; // ivar: _desiredSegmentWidth
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly, nonatomic) UIView *segmentedControlView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUISegmentedControlViewElement *viewElement; // ivar: _viewElement


-(id)_segmentedControl;
-(id)initWithViewElement:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 segmentedControl:(id)arg1 ;
-(void)_cancelMenuAction:(id)arg0 ;
-(void)_connectToSegmentedControl:(id)arg0 ;
-(void)_destroyMenuSheetViewController;
-(void)_destroyPopoverController;
-(void)_reloadPropertiesForSegmentedControl:(id)arg0 ;
-(void)_showMoreListSheetWithTitles:(id)arg0 selectedIndex:(NSInteger)arg1 ;
-(void)_showPopoverMoreListWithTitles:(id)arg0 ;
-(void)dealloc;
-(void)menuPopover:(id)arg0 didSelectMenuItemAtIndex:(NSInteger)arg1 ;
-(void)menuPopover:(id)arg0 willRepositionToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)menuPopoverDidCancel:(id)arg0 ;
-(void)menuViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)reloadAfterDocumentUpdate;
-(void)segmentedControl:(id)arg0 didSelectSegmentIndex:(NSInteger)arg1 ;
-(void)segmentedControl:(id)arg0 showMoreListWithTitles:(id)arg1 ;


@end


#endif