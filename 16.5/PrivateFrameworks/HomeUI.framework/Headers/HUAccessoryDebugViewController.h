// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYDEBUGVIEWCONTROLLER_H
#define HUACCESSORYDEBUGVIEWCONTROLLER_H

@protocol HFHomeKitObject;


#import "HUItemTableViewController.h"
#import "HUAccessoryDebugModuleController.h"

@interface HUAccessoryDebugViewController : HUItemTableViewController

@property (retain, nonatomic) HUAccessoryDebugModuleController *debugModuleController; // ivar: _debugModuleController
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject; // ivar: _homeKitObject


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithHomeKitObject:(id)arg0 ;


@end


#endif