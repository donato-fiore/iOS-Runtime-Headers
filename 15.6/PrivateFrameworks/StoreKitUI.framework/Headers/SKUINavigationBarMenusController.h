// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUINAVIGATIONBARMENUSCONTROLLER_H
#define SKUINAVIGATIONBARMENUSCONTROLLER_H

@class UIControl, NSArray, NSString;
@protocol SKUIMenuPopoverDelegate;


#import "SKUINavigationBarSectionController.h"
#import "SKUINavigationBarMenusView.h"
#import "SKUIMenuPopoverController.h"

@interface SKUINavigationBarMenusController : SKUINavigationBarSectionController <SKUIMenuPopoverDelegate>

 {
    UIControl *_focusedMenuButton;
    SKUINavigationBarMenusView *_menusView;
    NSArray *_menuViewElements;
    SKUIMenuPopoverController *_popoverController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_menuViewElementForView:(id)arg0 ;
-(id)initWithMenuViewElements:(id)arg0 ;
-(id)view;
-(void)_destroyPopover;
-(void)_menuButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)menuPopover:(id)arg0 didSelectMenuItemAtIndex:(NSInteger)arg1 ;
-(void)menuPopover:(id)arg0 willRepositionToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)menuPopoverDidCancel:(id)arg0 ;
-(void)reloadSectionViews;
-(void)willAppearInNavigationBar;


@end


#endif