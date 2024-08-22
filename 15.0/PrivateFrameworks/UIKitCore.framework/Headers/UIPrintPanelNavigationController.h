// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTPANELNAVIGATIONCONTROLLER_H
#define UIPRINTPANELNAVIGATIONCONTROLLER_H

@protocol UIPrintPanelAppearanceDelegate;


#import "UINavigationController.h"

@interface UIPrintPanelNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<UIPrintPanelAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate


+(BOOL)_preventsAppearanceProxyCustomization;
-(void)_presentationControllerDidDismiss:(id)arg0 ;


@end


#endif