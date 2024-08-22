// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAPPLICATIONEXTENSIONACTIVITY_H
#define UIAPPLICATIONEXTENSIONACTIVITY_H

@class NSExtensionItem, NSExtension, NSString, UIViewController, NSDate, NSURL;
@protocol UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget;


#import "UIActivity.h"
#import "_UIActivityBundleHelper.h"
#import "UISUIActivityExtensionItemDataRequest.h"

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget>



@property (retain, nonatomic) NSExtensionItem *_injectedExtensionItem; // ivar: __injectedExtensionItem
@property (retain, nonatomic) _UIActivityBundleHelper *activityBundleHelper; // ivar: _activityBundleHelper
@property (retain, nonatomic) NSExtension *applicationExtension; // ivar: _applicationExtension
@property (readonly, nonatomic) NSString *containingAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *extensionContextIdentifier; // ivar: _extensionContextIdentifier
@property (retain, nonatomic) UISUIActivityExtensionItemDataRequest *extensionItemDataRequest; // ivar: _extensionItemDataRequest
@property (copy, nonatomic) id *extensionRequestCleanupCompletion; // ivar: _extensionRequestCleanupCompletion
@property (retain, nonatomic) UIViewController *extensionViewController; // ivar: _extensionViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *installationDate; // ivar: _installationDate
@property (retain, nonatomic) NSURL *originalFileURL; // ivar: _originalFileURL
@property (copy, nonatomic) id *presenterCompletion; // ivar: _presenterCompletion
@property (weak, nonatomic) UIViewController *presenterViewController; // ivar: _presenterViewController
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg0 extensionItemDataRequest:(id)arg1 ;
+(id)_applicationExtensionActivitiesForItems:(id)arg0 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg0 extensionItemDataRequest:(id)arg1 ;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg0 ;
-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_isServiceExtension;
-(BOOL)_managesOwnPresentation;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)_defaultSortGroup;
-(id)_actionImage;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithApplicationExtension:(id)arg0 ;
-(void)_cleanup;
-(void)_injectedJavaScriptResult:(id)arg0 ;
-(void)_instantiateExtensionViewControllerWithInputItems:(id)arg0 ;
-(void)_prepareWithActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)_presentExtensionViewControllerIfPossible;
-(void)dealloc;
-(void)prepareWithActivityExtensionItemData:(id)arg0 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif