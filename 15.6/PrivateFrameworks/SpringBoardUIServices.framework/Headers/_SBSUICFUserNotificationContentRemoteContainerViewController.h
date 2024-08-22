// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBSUICFUSERNOTIFICATIONCONTENTREMOTECONTAINERVIEWCONTROLLER_H
#define _SBSUICFUSERNOTIFICATIONCONTENTREMOTECONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, UIViewController<SBSUIUserNotificationContentProviding>;
@protocol _SBSUICFUserNotificationContentExtensionRemoteInterface;



@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface>

 {
    BOOL _isLegacyContentViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController<SBSUIUserNotificationContentProviding> *extensionViewController; // ivar: _extensionViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(id)userNotificationContentExtensionContext;
-(void)_trackChildViewController:(id)arg0 ;
-(void)_updatePreferredContentSize;
-(void)addChildViewController:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)configureWithCompletion:(id)arg0 ;
-(void)invalidateWithCompletion:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif