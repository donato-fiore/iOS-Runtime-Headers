// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGSHOWANDPERFORMSETTINGSACTION_H
#define SASETTINGSHOWANDPERFORMSETTINGSACTION_H

@protocol SASettingSettingsAction;


#import "SABaseClientBoundCommand.h"

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (retain, nonatomic) NSObject<SASettingSettingsAction> *settingsAction;


+(id)showAndPerformSettingsAction;
+(id)showAndPerformSettingsActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif