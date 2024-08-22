// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTINKERSHARINGOPTINCONTROLLER_H
#define HKTINKERSHARINGOPTINCONTROLLER_H

@class BPSWelcomeOptinViewController;
@protocol HKTinkerSharingSetupDelegate;



@interface HKTinkerSharingOptInController : BPSWelcomeOptinViewController {
    NSInteger _layoutStyle;
    id<HKTinkerSharingSetupDelegate> *_delegate;
}




-(BOOL)wantsLightenBlendedScreen;
-(id)alternateButtonTitle;
-(id)detailString;
-(id)imageResource;
-(id)imageResourceBundleIdentifier;
-(id)initWithStyle:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)privacyBundles;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
-(id)titleString;
-(void)_configureLayoutStyle;
-(void)_presentNetworkAccessConfirmationWithHelper:(id)arg0 ;
-(void)alternateButtonPressed:(id)arg0 ;
-(void)applyConfirmedOptin:(BOOL)arg0 ;
-(void)suggestedButtonPressed:(id)arg0 ;
-(void)userDidRequestCancel;
-(void)viewDidLoad;


@end


#endif