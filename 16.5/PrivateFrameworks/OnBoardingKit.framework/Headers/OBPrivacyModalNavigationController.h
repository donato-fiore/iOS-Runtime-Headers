// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBPRIVACYMODALNAVIGATIONCONTROLLER_H
#define OBPRIVACYMODALNAVIGATIONCONTROLLER_H



#import "OBNavigationController.h"

@interface OBPrivacyModalNavigationController : OBNavigationController

@property (nonatomic, getter=isDarkMode) BOOL darkMode; // ivar: _darkMode
@property (copy) id *dismissButtonPressedHandler; // ivar: _dismissButtonPressedHandler


-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredUserInterfaceStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(void)_doneButtonPressed;
-(void)addDismissButtonWithPressedHandler:(id)arg0 ;


@end


#endif