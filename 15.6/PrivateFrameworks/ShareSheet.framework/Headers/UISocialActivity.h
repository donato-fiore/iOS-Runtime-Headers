// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISOCIALACTIVITY_H
#define UISOCIALACTIVITY_H

@class NSString, SLComposeViewController;
@protocol UIManagedConfigurationRestrictableActivity;


#import "UIApplicationExtensionActivity.h"

@interface UISocialActivity : UIApplicationExtensionActivity <UIManagedConfigurationRestrictableActivity>



@property (copy, nonatomic) NSString *builtinActivityType; // ivar: _builtinActivityType
@property (retain, nonatomic) NSString *initialText; // ivar: _initialText
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (retain, nonatomic) SLComposeViewController *socialComposeViewController; // ivar: _socialComposeViewController
@property (copy, nonatomic) NSString *sourceApplicationBundleID; // ivar: _sourceApplicationBundleID


+(NSInteger)activityCategory;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg0 extensionItemDataRequest:(id)arg1 ;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg0 ;
-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_managesOwnPresentation;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityType;
-(id)activityViewController;
-(id)debugDescription;
-(id)initWithActivityType:(id)arg0 ;
-(id)initWithApplicationExtension:(id)arg0 ;
-(struct CGSize )_thumbnailSize;
-(void)_cleanup;
-(void)_prepareComposeViewController:(id)arg0 withActivityExtensionItems:(id)arg1 ;
-(void)_prepareComposeViewController:(id)arg0 withInjectedExtensionItems:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(void)prepareWithActivityExtensionItemData:(id)arg0 ;


@end


#endif