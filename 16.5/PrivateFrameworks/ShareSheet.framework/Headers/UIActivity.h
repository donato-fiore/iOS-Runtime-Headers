// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACTIVITY_H
#define UIACTIVITY_H

@class NSURL, UIColor, NSString, NSAttributedString, UIImage, NSUUID, UIViewController, NSExtension, NSArray;
@protocol UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving;

#import <Foundation/Foundation.h>

#import "_UIActivityResourceLoader.h"

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving>

 {
    NSInteger _defaultPriority;
    _UIActivityResourceLoader *_activityImageLoader;
    _UIActivityResourceLoader *_activitySettingsImageLoader;
    BOOL _isInsideDescription;
    NSURL *_representationCacheURL;
}


@property (readonly, nonatomic) UIColor *_activityBadgeColor;
@property (readonly, nonatomic) NSString *_activityBadgeText;
@property (readonly, nonatomic) UIColor *_activityBadgeTextColor;
@property (readonly, nonatomic) NSAttributedString *_activityFooterText;
@property (readonly, nonatomic) _UIActivityResourceLoader *_activityImageLoader;
@property (readonly, nonatomic) _UIActivityResourceLoader *_activitySettingsImageLoader;
@property (readonly, nonatomic) UIImage *_activityStatusImage;
@property (readonly, nonatomic) UIColor *_activityStatusTintColor;
@property (readonly, nonatomic) NSString *_activitySubtitle;
@property (readonly, nonatomic) BOOL _allowsAutoCancelOnDismiss;
@property (readonly, nonatomic) id *_backgroundPreheatBlock;
@property (readonly, nonatomic) NSString *_heroActionTitle;
@property (readonly, nonatomic) BOOL _isBuiltinDerived;
@property (readonly, nonatomic) BOOL _isDisabled;
@property (readonly, nonatomic) BOOL _showsInSystemActionGroup; // ivar: __showsInSystemActionGroup
@property (copy, nonatomic) id *activityCompletionWithItemsHandler; // ivar: _activityCompletionWithItemsHandler
@property (readonly, nonatomic) UIImage *activityImage;
@property (retain, nonatomic) NSString *activitySectionIdentifier;
@property (copy, nonatomic) NSString *activitySectionIdentifier; // ivar: _activitySectionIdentifier
@property (readonly, nonatomic) NSString *activityTitle;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (readonly, nonatomic) UIViewController *activityViewController;
@property (readonly, nonatomic) NSExtension *applicationExtension;
@property (retain, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didFinishPerformingActivityHandler; // ivar: _didFinishPerformingActivityHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indexInApplicationDefinedActivities; // ivar: _indexInApplicationDefinedActivities
@property (nonatomic) NSInteger maxPreviews; // ivar: _maxPreviews
@property (retain, nonatomic) NSArray *preferredLocalizations; // ivar: _preferredLocalizations
@property (readonly) Class superclass;


+(BOOL)_isCapabilityBasedActivity;
+(CGFloat)imageWidthForContentSizeCategory:(id)arg0 ;
+(Class)classForPreparingExtensionItemData;
+(NSInteger)_activityStyle;
+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
+(NSUInteger)_xpcAttributes;
+(id)_actionImageForActionRepresentationImage:(id)arg0 contentSizeCategory:(id)arg1 ;
+(id)_actionImageForActionRepresentationImage:(id)arg0 contentSizeCategory:(id)arg1 monochrome:(BOOL)arg2 ;
+(id)_actionImageForBundleImageConfiguration:(id)arg0 ;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg0 extensionItemDataRequest:(id)arg1 ;
+(id)_activityImageForActionRepresentationImage:(id)arg0 ;
+(id)_activityImageForApplicationBundleIdentifier:(id)arg0 ;
+(id)_activityImageForBundleImageConfiguration:(id)arg0 ;
+(id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg0 ;
+(id)_activitySettingsImageForBundleImageConfiguration:(id)arg0 ;
+(id)_defaultFallbackActivityType;
+(id)_imageByApplyingDefaultEffectsToImage:(id)arg0 activityCategory:(NSInteger)arg1 iconFormat:(int)arg2 ;
+(id)_stringFromActivityCategory:(NSInteger)arg0 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg0 extensionItemDataRequest:(id)arg1 ;
+(void)_loadItemProvidersFromActivityItems:(id)arg0 withCacheURL:(id)arg1 completion:(id)arg2 ;
+(void)_performAfterActivityImageLoadingCompletes:(id)arg0 ;
-(BOOL)_activitySupportsPromiseURLs;
-(BOOL)_appIsDocumentTypeOwner;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg0 ;
-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_isExecutedInProcess;
-(BOOL)_managesOwnPresentation;
-(BOOL)_needsResolvedActivityItems;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_supportsOpenInPlace;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(BOOL)_wantsOriginalImageColor;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
-(BOOL)ss_shouldExecuteInShareSheet;
-(NSInteger)_defaultSortGroup;
-(id)_actionBundleImageConfiguration;
-(id)_actionImage;
-(id)_activityBundleImageConfiguration;
-(id)_activitySettingsBundleImageConfiguration;
-(id)_activitySettingsImage;
-(id)_attachmentNameForActivityItem:(id)arg0 ;
-(id)_beforeActivity;
-(id)_bundleIdentifierForActivityImageCreation;
-(id)_dataTypeIdentifierForActivityItem:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)_subjectForActivityItem:(id)arg0 ;
-(id)_systemImageName;
-(id)_thumbnailImageForActivityItem:(id)arg0 ;
-(id)applicationProxy;
-(id)init;
-(id)ss_activitySpecificExtensionItemDataRequestInfo;
-(struct CGSize )_thumbnailSize;
-(void)_cleanup;
-(void)_injectedJavaScriptResult:(id)arg0 ;
-(void)_loadItemProvidersFromActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)_loadItemProvidersFromActivityItems:(id)arg0 wantsSendCopyRepresentation:(BOOL)arg1 completion:(id)arg2 ;
-(void)_prepareWithActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(void)_willPresentAsFormSheet;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 items:(id)arg1 error:(id)arg2 ;
-(void)performActivity;
-(void)prepareWithActivityExtensionItemData:(id)arg0 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif