// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERARECORDINGINTROVIEWCONTROLLER_H
#define HUCAMERARECORDINGINTROVIEWCONTROLLER_H

@class NSString, HMHome, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HUCameraRecordingIntroViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) NSString *captionText; // ivar: _captionText
@property (retain, nonatomic) NSString *continueButtonText; // ivar: _continueButtonText
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton; // ivar: _notNowButton
@property (retain, nonatomic) NSString *notNowButtonText; // ivar: _notNowButtonText
@property (retain, nonatomic) OBTrayButton *setupButton; // ivar: _setupButton
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger variant; // ivar: _variant


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)init;
-(id)initWithIntroVariant:(NSUInteger)arg0 home:(id)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentImage:(id)arg3 ;
-(void)_buttonOne:(id)arg0 ;
-(void)_buttonTwo:(id)arg0 ;
-(void)showCameraRecordingLearnMore;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif