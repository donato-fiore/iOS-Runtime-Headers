// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEWEBEXTENSIONSACTIVITY_H
#define MANAGEWEBEXTENSIONSACTIVITY_H

@class UIActivity, NSString, UIViewController, UIActivityViewController;
@protocol WBSExtensionsControllerObserver;



@interface ManageWebExtensionsActivity : UIActivity <WBSExtensionsControllerObserver>

 {
    NSString *_numberOfNewlyInstalledExtensions;
    UIViewController *_activityViewController;
}


@property (weak, nonatomic) UIActivityViewController *parentActivityViewController; // ivar: _parentActivityViewController


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityBadgeColor;
-(id)_activityBadgeText;
-(id)_activityBadgeTextColor;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)init;
-(void)_reloadBadgeCount;
-(void)dealloc;
-(void)extensionsControllerExtensionListDidChange:(id)arg0 ;


@end


#endif