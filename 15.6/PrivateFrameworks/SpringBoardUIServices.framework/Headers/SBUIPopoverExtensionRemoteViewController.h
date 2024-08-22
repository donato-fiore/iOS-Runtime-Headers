// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIPOPOVEREXTENSIONREMOTEVIEWCONTROLLER_H
#define SBUIPOPOVEREXTENSIONREMOTEVIEWCONTROLLER_H

@class UIViewController, NSUUID, UIViewController<SBUIPopoverExtension>;
@protocol _SBUIPopoverExtensionRemoteInterface, _SBUIPopoverExtensionHostInterface;



@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface>

 {
    NSUUID *_instanceIdentifier;
}


@property (retain, nonatomic) UIViewController<SBUIPopoverExtension> *extensionViewController; // ivar: _extensionViewController
@property (retain, nonatomic) NSObject<_SBUIPopoverExtensionHostInterface> *hostService; // ivar: _hostService


+(BOOL)_isSecureForRemoteViewService;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)popoverExtensionContext;
-(void)_invalidateSBUIPopoverExtension;
-(void)_setupChildViewController:(id)arg0 ;
-(void)_updateForBundleIdentifier:(id)arg0 ;
-(void)_updateForWidgetConfiguration:(id)arg0 ;
-(void)_willAppearInRemoteViewController:(id)arg0 ;
-(void)addChildViewController:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)dealloc;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif