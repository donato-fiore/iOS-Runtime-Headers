// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSOFTWAREUPDATEDEFAULTS_H
#define SBSOFTWAREUPDATEDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown3DayWarning) BOOL developerInstallBrickAlertShown3DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown7DayWarning) BOOL developerInstallBrickAlertShown7DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShownTomorrowWarning) BOOL developerInstallBrickAlertShownTomorrowWarning;


-(void)_bindAndRegisterDefaults;
-(void)clearDeveloperInstallBrickAlerts;


@end


#endif