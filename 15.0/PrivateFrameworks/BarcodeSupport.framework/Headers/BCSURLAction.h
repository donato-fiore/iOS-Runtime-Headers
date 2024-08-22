// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSURLACTION_H
#define BCSURLACTION_H

@class NSArray, LSApplicationRecord, NSURL, CoreTelephonyClient, CTCellularPlanManagerCameraScanAction;


#import "BCSAction.h"

@interface BCSURLAction : BCSAction {
    NSArray *_appLinks;
    LSApplicationRecord *_userVisibleAppRecord;
    NSArray *_upiApplicationRecords;
    BOOL _deviceDataIsUnavailable;
    NSURL *_appStoreSearchURLForUnsupportedScheme;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCellularPlanManagerCameraScanAction *_cellularPlanAction;
}


@property (readonly, nonatomic) NSUInteger appLinkCount;
@property (readonly, nonatomic) BOOL hasPreferredAppLink; // ivar: _hasPreferredAppLink
@property (readonly, nonatomic) BOOL mustOpenAppLinkInApp;
@property (readonly, nonatomic) LSApplicationRecord *targetApplication;


-(BOOL)_hasCellularPlanAction;
-(BOOL)_isCodeFromQRScanner;
-(BOOL)_isVisualCode;
-(BOOL)_shouldBlockHandlingURL:(id)arg0 ;
-(BOOL)_shouldOpenInAppForAppLink:(id)arg0 ;
-(BOOL)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(id)arg0 ;
-(BOOL)_willOpenInSafari;
-(BOOL)hasSensitiveURL;
-(BOOL)isAMSAction;
-(BOOL)shouldRequireUserToPickTargetApp;
-(NSUInteger)menuElementsCount;
-(id)_actionDescriptionForAppClip;
-(id)_actionDescriptionForURL:(id)arg0 application:(id)arg1 shouldShowHostNameForSafariURL:(BOOL)arg2 ;
-(id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg0 ;
-(id)_actionPickerItemsForAppClip;
-(id)_actionPickerItemsForLockScreenVisibleApps;
-(id)_additionalActionPickerItems;
-(id)_appclipLaunchReason;
-(id)_commonActionPickerItemsForURL;
-(id)_menuElementForActionPicker:(id)arg0 ;
-(id)actionIcon;
-(id)actionPickerItems;
-(id)appLinks;
-(id)contentPreviewString;
-(id)debugDescriptionExtraInfoDictionary;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(id)initWithData:(id)arg0 codePayload:(id)arg1 ;
-(id)localizedDefaultActionDescription;
-(id)localizedDefaultActionTitle;
-(id)menuElements;
-(id)preferredBundleID;
-(id)shortDescription;
-(id)url;
-(id)urlThatCanBeOpened;
-(void)_queryApplicationRecordForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_resolveAppClipForURL:(id)arg0 completion:(id)arg1 ;
-(void)_resolveTargetApplicationForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)determineActionabilityWithCompletionHandler:(id)arg0 ;
-(void)performAction;
-(void)performActionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)performDefaultAction;
-(void)performDefaultActionWithFBOptions:(id)arg0 ;


@end


#endif