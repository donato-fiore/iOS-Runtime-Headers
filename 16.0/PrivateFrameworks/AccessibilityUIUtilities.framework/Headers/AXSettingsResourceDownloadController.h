// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSETTINGSRESOURCEDOWNLOADCONTROLLER_H
#define AXSETTINGSRESOURCEDOWNLOADCONTROLLER_H

@class NSString, NSMutableDictionary;
@protocol AXResourceDownloadInformationDelegate;


#import "AXUISettingsListController.h"
#import "AXSpeechSettingsModelController.h"

@interface AXSettingsResourceDownloadController : AXUISettingsListController <AXResourceDownloadInformationDelegate>

 {
    CGFloat _latestProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *downloadProgessByVoiceID;
@property (copy, nonatomic) id *getDialectPreferencesCallback; // ivar: _getDialectPreferencesCallback
@property (copy, nonatomic) id *getVoiceAllowedCallback; // ivar: _getVoiceAllowedCallback
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *setDialectPreferencesCallback; // ivar: _setDialectPreferencesCallback
@property (retain, nonatomic) AXSpeechSettingsModelController *speechModelController; // ivar: _speechModelController
@property (readonly) Class superclass;


-(BOOL)allowedToDownload;
-(id)specifierForVoiceId:(id)arg0 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)deleteResource:(id)arg0 ;
-(void)downloadProgressUpdate:(id)arg0 progress:(float)arg1 ;
-(void)finishedDeletingResource:(id)arg0 ;
-(void)finishedDownloadingResource:(id)arg0 ;
-(void)manageEditButton;
-(void)playSampleForResource:(id)arg0 completion:(id)arg1 ;
-(void)restoreDownloadProgress;
-(void)setSelectedSpecifier:(id)arg0 ;
-(void)startDownloadForResource:(id)arg0 ;
-(void)stopDownloadForResource:(id)arg0 ;
-(void)updateSettings;


@end


#endif