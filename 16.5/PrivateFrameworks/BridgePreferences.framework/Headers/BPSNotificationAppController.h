// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSNOTIFICATIONAPPCONTROLLER_H
#define BPSNOTIFICATIONAPPCONTROLLER_H

@class NPSDomainAccessor, BBSectionInfo, NSString, NSMutableArray, PSSpecifier, NSMutableDictionary;


#import "BPSListController.h"

@interface BPSNotificationAppController : BPSListController

@property (readonly, nonatomic) NSUInteger alertingMode;
@property (retain, nonatomic) NPSDomainAccessor *bbAppsSettings; // ivar: _bbAppsSettings
@property (retain, nonatomic) BBSectionInfo *bbSectionInfo; // ivar: _bbSectionInfo
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL mirrorSettings; // ivar: _mirrorSettings
@property (retain, nonatomic) NSMutableArray *notificationApplicationSpecifiers; // ivar: _notificationApplicationSpecifiers
@property (readonly, nonatomic) NSMutableArray *notificationSpecifiers; // ivar: _notificationSpecifiers
@property (readonly, nonatomic) PSSpecifier *previewSwitchSpecifier;
@property (readonly, nonatomic) NSMutableDictionary *sectionInfo; // ivar: _sectionInfo
@property (nonatomic) NSUInteger settingsMode; // ivar: _settingsMode
@property (readonly, nonatomic) BOOL showAlerts;
@property (readonly, nonatomic) BOOL showPreview;


-(BOOL)_suppressSendToNotificationCenterOption;
-(BOOL)caresAboutSubsections;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)suppressAlertSpecifiers;
-(BOOL)suppressAllMirrorSpecifiers;
-(BOOL)suppressMirrorOption;
-(BOOL)suppressNotificationCoalescingOptions;
-(BOOL)suppressSendToNotificationCenterOption;
-(BOOL)wantsPreviewChoice;
-(BOOL)watchHasCapabilitySendToNotificationCenter;
-(NSInteger)alertType;
-(id)applicationBundleIdentifier;
-(id)applicationGroupSpecifiers;
-(id)bulletinBoardSettings;
-(id)bundle;
-(id)customGroupSpecifierForDescription:(id)arg0 ;
-(id)glanceSpecifierForIdentifier:(id)arg0 ;
-(id)init;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(id)localizedPreviewChoiceTitle;
-(id)localizedPreviewGroupFooter;
-(id)localizedPreviewGroupLabel;
-(id)mirroredApplicationGroupSpecifiers;
-(id)notificationGroupTitles;
-(id)notificationGroupValues;
-(id)notificationGroupingValue:(id)arg0 ;
-(id)sectionInfoForBBSectionInfo:(id)arg0 ;
-(id)showPreviewValue:(id)arg0 ;
-(id)soundsValue:(id)arg0 ;
-(id)specifiers;
-(id)vibrationValue:(id)arg0 ;
-(void)_showSettingsNotifications;
-(void)mirrorSettingsChanged:(BOOL)arg0 ;
-(void)removeAlertOptions;
-(void)removeMirrorOptions;
-(void)removeNotificationCoalescingOptions;
-(void)removeSendToNotificationCenterOption;
-(void)setNotificationGroupingValue:(id)arg0 specifier:(id)arg1 ;
-(void)setSoundsValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setVibrationValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSubsections;
-(void)writeSectionState;


@end


#endif