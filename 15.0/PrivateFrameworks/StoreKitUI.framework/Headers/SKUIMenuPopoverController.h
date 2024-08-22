// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMENUPOPOVERCONTROLLER_H
#define SKUIMENUPOPOVERCONTROLLER_H

@class UIPopoverController, NSString, NSArray;
@protocol SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate, SKUIMenuPopoverDelegate;

#import <Foundation/Foundation.h>

#import "SKUIMenuViewController.h"

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate>

 {
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIMenuPopoverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *menuTitles;
@property (readonly) Class superclass;


-(id)initWithMenuTitles:(id)arg0 ;
-(id)initWithMenuTitles:(id)arg0 selectedIndex:(NSInteger)arg1 ;
-(void)_destroyPopoverController;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)menuViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)popoverController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)presentFromRect:(struct CGRect )arg0 inView:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3 ;


@end


#endif