// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMDIAGNOSTICSSERVICE_H
#define PXCMMDIAGNOSTICSSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXCMMDiagnosticsService : PXDiagnosticsService



-(BOOL)canProvideConsoleDescription;
-(BOOL)canProvideContextualViewController;
-(BOOL)canProvideSettingsViewController;
-(id)contextualViewController;
-(id)settingsViewController;
-(id)title;


@end


#endif