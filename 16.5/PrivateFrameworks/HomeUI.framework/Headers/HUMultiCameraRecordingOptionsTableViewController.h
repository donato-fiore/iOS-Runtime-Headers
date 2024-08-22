// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMULTICAMERARECORDINGOPTIONSTABLEVIEWCONTROLLER_H
#define HUMULTICAMERARECORDINGOPTIONSTABLEVIEWCONTROLLER_H

@class NSMutableArray, HMHome;


#import "HUCameraRecordingOptionsTableViewController.h"
#import "HUMultiCameraRecordingOptionsItemManager.h"

@interface HUMultiCameraRecordingOptionsTableViewController : HUCameraRecordingOptionsTableViewController

@property (retain, nonatomic) NSMutableArray *cameraSettingsModuleControllers; // ivar: _cameraSettingsModuleControllers
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUMultiCameraRecordingOptionsItemManager *recordingOptionsItemManager; // ivar: _recordingOptionsItemManager


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithHome:(id)arg0 ;
-(id)itemModuleControllers;
-(void)dismissTextViewController;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif