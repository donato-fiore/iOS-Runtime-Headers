// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMEDITORDEBUGCONTAINERVIEWCONTROLLER_H
#define PMEDITORDEBUGCONTAINERVIEWCONTROLLER_H

@class UIViewController;
@protocol PMPlayerControlling;


#import "MiroBlueprint.h"
#import "PMDebugPickerViewController.h"
#import "VEKProduction.h"

@interface PMEditorDebugContainerViewController : UIViewController

@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (retain, nonatomic) PMDebugPickerViewController *moodPartPicker; // ivar: _moodPartPicker
@property (nonatomic) NSUInteger pickerMode; // ivar: _pickerMode
@property (weak, nonatomic) NSObject<PMPlayerControlling> *playerController; // ivar: _playerController
@property (weak, nonatomic) VEKProduction *production; // ivar: _production


-(void)didReceiveMemoryWarning;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif