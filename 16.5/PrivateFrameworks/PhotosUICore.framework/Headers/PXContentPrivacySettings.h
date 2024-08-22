// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTPRIVACYSETTINGS_H
#define PXCONTENTPRIVACYSETTINGS_H



#import "PXSettings.h"

@interface PXContentPrivacySettings : PXSettings

@property (nonatomic) NSInteger authenticationBehaviorUponAppearing; // ivar: _authenticationBehaviorUponAppearing
@property (nonatomic) BOOL shouldAlwaysShowUnlockButtonInContentUnavailableViews; // ivar: _shouldAlwaysShowUnlockButtonInContentUnavailableViews
@property (nonatomic) NSInteger simulatedAuthenticationType; // ivar: _simulatedAuthenticationType
@property (nonatomic) NSInteger simulationMode; // ivar: _simulationMode


+(id)settingsControllerModule;
+(id)sharedInstance;
-(BOOL)contentPrivacyEnabled;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif