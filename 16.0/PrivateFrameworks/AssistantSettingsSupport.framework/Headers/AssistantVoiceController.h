// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSISTANTVOICECONTROLLER_H
#define ASSISTANTVOICECONTROLLER_H

@class PSListController, NSArray, AFVoiceInfo, VSVoiceAsset, PSSpecifier, SUICAssistantVoiceSettingsConnection, NSDate;


#import "AssistantSettingsSignalEmitter.h"
#import "AssistantVoiceViewModel.h"
#import "AssistantVoiceMetrics.h"

@interface AssistantVoiceController : PSListController {
    AssistantSettingsSignalEmitter *_signalEmitter;
}


@property (retain, nonatomic) NSArray *cellularUpdatesSpecifiers; // ivar: _cellularUpdatesSpecifiers
@property (retain, nonatomic) AssistantVoiceViewModel *currentViewModel; // ivar: _currentViewModel
@property (retain, nonatomic) AFVoiceInfo *currentVoice; // ivar: _currentVoice
@property (retain, nonatomic) VSVoiceAsset *downloadingAsset; // ivar: _downloadingAsset
@property (nonatomic) BOOL ignoreNextVoiceChangeNotification; // ivar: _ignoreNextVoiceChangeNotification
@property (retain, nonatomic) AFVoiceInfo *inProgressVoice; // ivar: _inProgressVoice
@property (retain, nonatomic) PSSpecifier *languageGroupSpecifier; // ivar: _languageGroupSpecifier
@property (retain, nonatomic) PSSpecifier *languageProto; // ivar: _languageProto
@property (retain, nonatomic) NSArray *languageSpecifiers; // ivar: _languageSpecifiers
@property (retain, nonatomic) AssistantVoiceMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) SUICAssistantVoiceSettingsConnection *settingsConnection; // ivar: _settingsConnection
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) PSSpecifier *voiceVariationGroupSpecifier; // ivar: _voiceVariationGroupSpecifier
@property (retain, nonatomic) PSSpecifier *voiceVariationProto; // ivar: _voiceVariationProto
@property (retain, nonatomic) NSArray *voiceVariationSpecifiers; // ivar: _voiceVariationSpecifiers


+(BOOL)asset:(id)arg0 isEqualToAsset:(id)arg1 ;
+(id)bundle;
-(BOOL)isCellularDataPermissionAllowedForVoice:(id)arg0 ;
-(BOOL)isVoiceInstalled:(id)arg0 ;
-(id)_languageSpecifiersForLanguage:(id)arg0 ;
-(id)_voiceVariationSpecifiersForLanguage:(id)arg0 ;
-(id)deriveVoicesWithTargetVoice:(id)arg0 currentVoice:(id)arg1 ;
-(id)dialectsForLanguageIdentifiers:(id)arg0 ;
-(id)inProgressOutputVoice;
-(id)init;
-(id)outputVoice;
-(id)specifiers;
-(id)viewModelWithInProgressVoice:(id)arg0 currentVoice:(id)arg1 ;
-(id)voiceSettingsForLanguageCode:(id)arg0 name:(id)arg1 gender:(NSInteger)arg2 ;
-(void)_signalDidSelectVoice;
-(void)applyViewModel:(id)arg0 ;
-(void)downloadVoice:(id)arg0 ;
-(void)grantCellularDataPermissionForVoice:(id)arg0 ;
-(void)languageCodeDidChange:(id)arg0 ;
-(void)outputVoiceDidChange:(id)arg0 ;
-(void)playVoicePreview:(id)arg0 ;
-(void)presentVoiceDownloadConfirmationNoWifiAlertForVoice:(id)arg0 inProgressVoice:(id)arg1 ;
-(void)presentVoiceDownloadDisabledNoInternetAlert;
-(void)presentVoiceDownloadDisabledNoWifiAlert;
-(void)selectVoice:(id)arg0 inProgressVoice:(id)arg1 ;
-(void)setAssistantInProgressVoice:(id)arg0 ;
-(void)setAssistantOutputVoice:(id)arg0 ;
-(void)setOutputVoicePreference:(id)arg0 ;
-(void)setParentController:(id)arg0 ;
-(void)stopAllDownload;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateDownloadProgress:(float)arg0 ;
-(void)updateFooterText:(id)arg0 forSpecifier:(id)arg1 ;
-(void)updateVoiceVariationGroupUI:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif