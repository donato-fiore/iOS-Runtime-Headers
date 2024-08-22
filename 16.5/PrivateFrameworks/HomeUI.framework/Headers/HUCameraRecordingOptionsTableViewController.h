// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERARECORDINGOPTIONSTABLEVIEWCONTROLLER_H
#define HUCAMERARECORDINGOPTIONSTABLEVIEWCONTROLLER_H

@class NSString;
@protocol UITextViewDelegate;


#import "HUItemTableViewController.h"
#import "HUCameraSettingsModuleController.h"
#import "HUCameraRecordingOptionsItemManager.h"

@interface HUCameraRecordingOptionsTableViewController : HUItemTableViewController <UITextViewDelegate>



@property (retain, nonatomic) HUCameraSettingsModuleController *cameraSettingsModuleController; // ivar: _cameraSettingsModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HUCameraRecordingOptionsItemManager *detailsItemManager; // ivar: _detailsItemManager
@property (nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithServiceLikeItem:(id)arg0 ;
-(id)itemModuleControllers;
-(void)dismissTextViewController;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif