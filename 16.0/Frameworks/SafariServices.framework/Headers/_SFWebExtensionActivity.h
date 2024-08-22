// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFWEBEXTENSIONACTIVITY_H
#define _SFWEBEXTENSIONACTIVITY_H

@class UIActivity, WBSWebExtensionData, UIActivityViewController;
@protocol WBSWebExtensionTab;


#import "SFWebExtensionPageMenuController.h"

@interface _SFWebExtensionActivity : UIActivity {
    WBSWebExtensionData *_webExtension;
    id<WBSWebExtensionTab> *_tab;
    SFWebExtensionPageMenuController *_pageMenuController;
}


@property (weak, nonatomic) UIActivityViewController *parentViewController; // ivar: _parentViewController


-(BOOL)_isDisabled;
-(BOOL)_isEnabled;
-(BOOL)_managesOwnPresentation;
-(BOOL)_wantsOriginalImageColor;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityBadgeColor;
-(id)_activityBadgeText;
-(id)_activityBadgeTextColor;
-(id)_activityImage;
-(id)_activityStatusImage;
-(id)_activityStatusTintColor;
-(id)activityTitle;
-(id)activityType;
-(id)initWithPageMenuController:(id)arg0 webExtension:(id)arg1 tab:(id)arg2 ;
-(void)_reloadActivity;
-(void)_reloadActivitySoon;
-(void)performActivity;


@end


#endif