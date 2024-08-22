// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSUISOFTWAREUPDATEPANEDETAILVIEWCONTROLLER_H
#define SUSUISOFTWAREUPDATEPANEDETAILVIEWCONTROLLER_H

@class NSString;
@protocol DevicePINControllerDelegate, UITableViewDelegate;


#import "SUSUISoftwareUpdatePane.h"

@interface SUSUISoftwareUpdatePaneDetailViewController : SUSUISoftwareUpdatePane <DevicePINControllerDelegate, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)updateReadyToDownload;
-(id)_alternateUpdateButtonSpecifierForState:(int)arg0 ;
-(id)_alternateUpdateGroupSpecifierForState:(int)arg0 ;
-(id)_automaticUpdateButtonSpecifierForState:(int)arg0 ;
-(id)_automaticUpdateGroupSpecifierForState:(int)arg0 ;
-(id)alternateUpdateDescriptor;
-(id)analyticsDownloadAndInstallNowTappedString;
-(id)analyticsDownloadAndInstallTonightTappedString;
-(id)analyticsDownloadOnlyTappedString;
-(id)analyticsOpenStorageTappedString;
-(id)currentSpecifiers;
-(id)init;
-(id)installLaterTappedString;
-(id)installNowTappedString;
-(id)learnMoreTappedString;
-(id)suError;
-(id)updateDescriptor;
-(void)detailedReleaseNotesDonePressed:(id)arg0 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg0 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)presentConfimationSpecifier:(id)arg0 ;
-(void)readyToDownload:(NSUInteger)arg0 ;
-(void)reloadSpecifiers:(id)arg0 ;
-(void)showPINSheetForSpecifier:(id)arg0 ;
-(void)titleCell:(id)arg0 learnMoreButtonTapped:(id)arg1 ;
-(void)upgradeToUserInitiated:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif