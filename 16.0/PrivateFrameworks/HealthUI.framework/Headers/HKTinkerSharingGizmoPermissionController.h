// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTINKERSHARINGGIZMOPERMISSIONCONTROLLER_H
#define HKTINKERSHARINGGIZMOPERMISSIONCONTROLLER_H

@class BPSWelcomeOptinViewController;
@protocol HKTinkerSharingSetupDelegate;



@interface HKTinkerSharingGizmoPermissionController : BPSWelcomeOptinViewController {
    NSInteger _layoutStyle;
    id<HKTinkerSharingSetupDelegate> *_delegate;
}




-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)wantsLightenBlendedScreen;
-(id)_localizedFullNameForFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)detailString;
-(id)imageResource;
-(id)initWithStyle:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
-(id)titleString;
-(void)optInDidFailWithError:(id)arg0 ;
-(void)optInDidSucceed;
-(void)sendOptInRequest;
-(void)viewDidLoad;


@end


#endif