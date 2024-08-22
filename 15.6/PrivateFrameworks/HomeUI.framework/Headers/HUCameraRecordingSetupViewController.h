// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERARECORDINGSETUPVIEWCONTROLLER_H
#define HUCAMERARECORDINGSETUPVIEWCONTROLLER_H

@class NSString, HMHome, OBTrayButton;
@protocol HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUItemTableOBWelcomeController.h"

@interface HUCameraRecordingSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) OBTrayButton *learnMoreButton; // ivar: _learnMoreButton
@property (retain, nonatomic) OBTrayButton *setupButton; // ivar: _setupButton
@property (readonly) Class superclass;


-(id)hu_preloadContent;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 itemTableViewController:(id)arg3 home:(id)arg4 ;
-(void)_setupCameraRecording:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)showCameraRecordingLearnMore;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif