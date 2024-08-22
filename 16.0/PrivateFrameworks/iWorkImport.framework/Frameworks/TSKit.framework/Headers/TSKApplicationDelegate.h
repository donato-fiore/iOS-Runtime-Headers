// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKAPPLICATIONDELEGATE_H
#define TSKAPPLICATIONDELEGATE_H

@class NSDate, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TSKApplicationDelegate : NSObject

@property (readonly, getter=isActivating) BOOL activating;
@property (readonly, nonatomic) CGFloat activityAuthorCacheAuditTimeInterval;
@property (readonly, nonatomic) CGFloat activityAuthorCacheCleanAuthorDuringAuditMinimumTimeInterval;
@property (readonly, nonatomic) NSDate *applicationLaunchTime;
@property (readonly, nonatomic) NSArray *availableLanguages; // ivar: _availableLanguages
@property (readonly, nonatomic) Class iCloudPreferencesProviderClass; // ivar: _iCloudPreferencesProviderClass
@property (readonly, nonatomic) BOOL imageGalleryCaptionsUsePlaceholderText;
@property (readonly, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic) NSString *initialInputLanguage; // ivar: _initialInputLanguage
@property (readonly, nonatomic) NSUInteger maxActivityStreamSize;
@property (readonly, nonatomic) NSUInteger maxOperationStorageSize;
@property (readonly, nonatomic) CGFloat minActivityStreamActivityAge;
@property (readonly, nonatomic) CGFloat minOperationStorageEntryAge;
@property (readonly, nonatomic) BOOL performanceModeEnabled;
@property (readonly, nonatomic) Class propertiesProviderClass;
@property (readonly, nonatomic) NSUInteger smallActivityStreamSize;
@property (readonly, nonatomic) NSUInteger smallOperationStorageSize;
@property (readonly, nonatomic) BOOL supportsCommentsInMasters;
@property (readonly, nonatomic) BOOL supportsFreehandAnimationUI;
@property (readonly, nonatomic) BOOL supportsImageGalleryHyperlinks;
@property (readonly, nonatomic) BOOL supportsLinkedTextBoxes;
@property (readonly, nonatomic) BOOL supportsMovieHyperlinks;
@property (readonly, nonatomic) BOOL supportsPastingIntoGroups;
@property (readonly, nonatomic) BOOL tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL textInspectorShowsMoreSubpane;


+(id)documentDirectoryPath;
+(id)sharedDelegate;
+(id)sharedICloudPreferences;
+(id)sharedPropertiesProvider;
+(void)initialize;
-(BOOL)isValidURLForImportedHyperlink:(id)arg0 targetDocumentRoot:(id)arg1 forCrossDocumentPaste:(BOOL)arg2 ;
-(BOOL)openURL:(id)arg0 ;
-(BOOL)openURL:(id)arg0 displayAlertOnError:(BOOL)arg1 ;
-(BOOL)shouldRenderContactShadow;
-(BOOL)shouldRenderCurvedShadow;
-(BOOL)shouldRenderLargeImages;
-(BOOL)shouldValidateLayoutEngineWhileInsertingRows;
-(BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
-(BOOL)supportsAutosizingTextboxes;
-(BOOL)supportsQuickFormatBar;
-(BOOL)supportsRTL;
-(BOOL)supportsShrinkTextToFit;
-(NSUInteger)activityStreamPruningThresholdWithDocumentRoot:(id)arg0 ;
-(NSUInteger)operationStoragePruningThresholdWithDocumentRoot:(id)arg0 ;
-(id)createCompatibilityDelegate;
-(id)defaultEmailHyperlinkURL;
-(id)defaultHyperlinkURL;
-(id)defaultPhoneHyperlinkURL;
-(id)defaultWebHyperlinkURL;
-(id)init;
-(id)previewImageForType:(id)arg0 ;
-(void)configureSharedPropertiesProvider:(id)arg0 ;
-(void)customizeHyperlinkViewController:(id)arg0 documentRoot:(id)arg1 ;
-(void)donateAddBodyRowAtBottomIntentWithInfo:(id)arg0 ;
-(void)donateAddFormRecordIntentWithFormSheet:(id)arg0 ;
-(void)p_setUpSharedICloudPreferences;
-(void)p_setUpSharedPropertiesProviderIfNeeded;


@end


#endif