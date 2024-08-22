// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTPANELNAVIGATIONCONTROLLER_H
#define UIPRINTPANELNAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol UIPrintPanelAppearanceDelegate;


#import "UIPrintOptionsTableViewController.h"

@interface UIPrintPanelNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<UIPrintPanelAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (retain, nonatomic) UIPrintOptionsTableViewController *printOptionsTableViewController; // ivar: _printOptionsTableViewController


+(BOOL)_preventsAppearanceProxyCustomization;
-(id)initWithPrintOptionsTableViewController:(id)arg0 rootViewController:(id)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)_presentationControllerDidDismiss:(id)arg0 ;


@end


#endif