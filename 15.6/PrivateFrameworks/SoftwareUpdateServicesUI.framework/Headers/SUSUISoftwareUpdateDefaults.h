// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSUISOFTWAREUPDATEDEFAULTS_H
#define SUSUISOFTWAREUPDATEDEFAULTS_H

@class BSAbstractDefaultDomain, NSUserDefaults, NSString, NSDictionary;



@interface SUSUISoftwareUpdateDefaults : BSAbstractDefaultDomain {
    NSUserDefaults *_sbLegacyDefaults;
}


@property (retain, nonatomic) NSString *lastOSVersion;
@property (nonatomic) BOOL needsAlertPresentationAfterOTAUpdate;
@property (retain, nonatomic) NSDictionary *softwareUpdateState;


-(id)_initWithLegacyDefaults:(id)arg0 ;
-(id)init;
-(void)_bindAndRegisterDefaults;
-(void)_clearLegacySpringBoardPreferences;
-(void)_migrateLegacySpringBoardPreferences;
-(void)clearDeveloperInstallBrickAlerts;
-(void)migrateAndClearLegacyPreferences;


@end


#endif