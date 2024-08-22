// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTINKERSHARINGSYNCSETUPCONTROLLER_H
#define HKTINKERSHARINGSYNCSETUPCONTROLLER_H

@class BPSWelcomeOptinViewController;
@protocol HKTinkerSharingSetupDelegate;



@interface HKTinkerSharingSyncSetupController : BPSWelcomeOptinViewController {
    NSInteger _layoutStyle;
    id<HKTinkerSharingSetupDelegate> *_delegate;
}




+(BOOL)controllerNeedsToRun;
-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)controllerAllowsNavigatingBackTo;
-(id)_tinkerUserDateOfBirthComponents;
-(id)detailString;
-(id)imageResource;
-(id)initWithStyle:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
-(id)titleString;
-(void)setupDidFailWithError:(id)arg0 ;
-(void)setupDidSucceed;
-(void)setupSharing;
-(void)viewDidLoad;


@end


#endif