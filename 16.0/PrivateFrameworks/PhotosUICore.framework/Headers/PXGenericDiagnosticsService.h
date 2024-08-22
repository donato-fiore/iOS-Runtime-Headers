// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGENERICDIAGNOSTICSSERVICE_H
#define PXGENERICDIAGNOSTICSSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXGenericDiagnosticsService : PXDiagnosticsService



-(BOOL)canProvideConsoleDescription;
-(BOOL)canProvideContextualViewController;
-(BOOL)canProvideSettingsViewController;
-(id)consoleDescription;
-(id)settingsViewController;
-(id)title;


@end


#endif