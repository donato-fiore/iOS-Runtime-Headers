// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEWEBEXTENSIONSACTIVITY_H
#define MANAGEWEBEXTENSIONSACTIVITY_H

@class UIActivity, NSString, UIViewController, UIActivityViewController;
@protocol WBSExtensionsControllerObserver, _SFBrowserDocument;



@interface ManageWebExtensionsActivity : UIActivity <WBSExtensionsControllerObserver>

 {
    NSString *_numberOfNewlyInstalledExtensions;
    UIViewController *_activityViewController;
}


@property (weak, nonatomic) NSObject<_SFBrowserDocument> *browserDocument; // ivar: _browserDocument
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
-(void)_formatBadgeText;
-(void)_reloadBadgeCount;
-(void)dealloc;
-(void)extensionsControllerExtensionListDidChange:(id)arg0 ;


@end


#endif