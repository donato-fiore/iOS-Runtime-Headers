// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSEMANTICSTYLESETTINGSCONTROLLER_H
#define CAMSEMANTICSTYLESETTINGSCONTROLLER_H

@class UINavigationController;
@protocol CAMSemanticStyleSettingsControllerDelegate;


#import "CAMSemanticStyleSettingsRootController.h"

@interface CAMSemanticStyleSettingsController : UINavigationController

@property (readonly, nonatomic) CAMSemanticStyleSettingsRootController *_rootController; // ivar: __rootController
@property (weak, nonatomic) NSObject<CAMSemanticStyleSettingsControllerDelegate> *controllerDelegate; // ivar: _controllerDelegate


-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;


@end


#endif