// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUACCESSORYSETTINGSSIRIRECOGNITIONLANGUAGEVIEWCONTROLLER_H
#define HUACCESSORYSETTINGSSIRIRECOGNITIONLANGUAGEVIEWCONTROLLER_H

@class NAFuture, NSString;
@protocol HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAccessorySettingsSiriRecognitionLanguageItemManager.h"

@interface HUAccessorySettingsSiriRecognitionLanguageViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol>



@property (retain, nonatomic) NAFuture *changeLanguageFuture; // ivar: _changeLanguageFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUAccessorySettingsSiriRecognitionLanguageItemManager *itemManager;
@property (nonatomic) NSInteger selectedLanguageIndex; // ivar: _selectedLanguageIndex
@property (readonly) Class superclass;


-(BOOL)_isAnyMediaAccessoryOnSupportedVoiceRecognitionLanguage;
-(BOOL)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_allMediaAccessories;
-(id)_siriLanguageOptionForMediaProfile:(id)arg0 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)arg0 ;
-(void)_changeSiriLanguageOnlyForThisMediaAccessory:(id)arg0 turnOffVoiceID:(BOOL)arg1 ;
-(void)_clearSpinner;
-(void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)arg0 indexPath:(id)arg1 ;
-(void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)arg0 indexPath:(id)arg1 ;
-(void)_presentAlertConfirmingLanguageChangeForThisORAllMediaAccessories:(id)arg0 indexPath:(id)arg1 ;
-(void)_turnOffVoiceIDAndChangeSiriLanguageForAllMediaAccessories:(id)arg0 ;
-(void)_turnOffVoiceIDForTargetLanguageOption:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif